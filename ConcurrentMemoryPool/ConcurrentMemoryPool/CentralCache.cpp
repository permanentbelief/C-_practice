#define _CRT_SECURE_NO_WARNINGS 1 

#include "CentralCache.h"
#include "PageCache.h"


Span* CentralCache::GetOneSpan(size_t size) //从spanlist中获取一个span 或者 从page cache中获取一个span
{
	//从CentralCache中 获得一个span
	size_t index = SizeClass::ListIndex(size); // 根据size算的span链表的下标

	SpanList& spanlist = _spanLists[index];
	Span* it = spanlist.Begin();

	while (it != spanlist.End())
	{
		if (!it->_freeList.Empty())
		{
			return it;
		}
		else
		{
			it = it->_next;
		}
	}
	//若Central Cache中没有这个span
	//则从pagecache中 获取一个span
	size_t numpage = SizeClass::NumMovePage(size);//计算申请多少页

	Span* span = PageCache::GetInstance().NewSpan(numpage);//从PageCache 申请numpage页的sapn

	//将对象切成对应大小的span挂载到span的freelist中去
	char* start = (char*)(span->_pageid << 12);  // * 4k
	char* end = start + (span->_pagesize << 12); //*4k

	while (start < end)
	{
		char* obj = start;
		start += size;

		span->_freeList.Push(obj);
	}

	span->_objSize = size;
	spanlist.PushFront(span);

	return span;
}

//从中心Cache获取一定数量的对象给thread cache
size_t CentralCache::FetchRangeObj(void*& start, void*& end, size_t num, size_t size)
{
	//得获得这个spanLists的下标，加锁
	size_t index = SizeClass::ListIndex(size);
	SpanList& spanlist = _spanLists[index];

	spanlist.Lock();
	Span* span = GetOneSpan(size);
	FreeList& freelist = span->_freeList;
	size_t actualNum = freelist.PopRange(start, end, num);
	span->_usecount += actualNum;

	spanlist.UnLock();

	return actualNum;
}

void CentralCache::ReleaseListToSpans(void* start, size_t size)
{
	size_t index = SizeClass::ListIndex(size); //算出spanLists的下标
	SpanList& spanlist = _spanLists[index];
	

	spanlist.Lock();
	while (start) //将这一段循环插入进去， 要注意不一定是spanLists上的同一块span
	{
		void* next = NextObj(start); //存start的下一个值
		PAGE_ID id = (PAGE_ID)start >> PAGE_SHIFT; //地址/4k 是页号 因为一页4k
		Span* span = PageCache::GetInstance().GetIdToSpan(id); // 通过[page_ID,span*]的映射， 看是哪一个sapn
		span->_freeList.Push(start);
		span->_usecount--;


		//表示当前span切出去的对象完全返回，可以将span还给pageCache进行合并
		if (span->_usecount == 0)
		{
			size_t index = SizeClass::ListIndex(span->_objSize);
			_spanLists[index].Erase(span);
		
			span->_freeList.Clear(); //什么意思  大的切碎 防止再切 

			PageCache::GetInstance().ReleaseSpanToPageCache(span);



		}

		start = next;
	}

	spanlist.UnLock();
}