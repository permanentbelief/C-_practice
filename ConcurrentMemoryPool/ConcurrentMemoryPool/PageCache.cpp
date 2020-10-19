#include "pageCache.h"


Span* PageCache::NewSpan(size_t numpage)
{
	_spanLists[numpage].Lock();
	return _NewSpan(numpage);
	_spanLists[numpage].UnLock();
}
Span* PageCache::_NewSpan(size_t numpage)  // 要的是 numpage大小的span
{
	//_spanLists[numpage].Lock();

	//在当前numpage上看这个pageCache上有没有numspage个大小的sapn

	if (!_spanLists[numpage].Empty()) //  
	{
		Span* span = _spanLists[numpage].Begin();
		_spanLists[numpage].PopFront();
		return span;
	}
	for (int i = numpage + 1; i < MAX_PAGE; ++i)
	{
		if (!_spanLists[i].Empty())
		{
			//分裂
			Span* span = _spanLists[i].Begin();
			
			_spanLists[i].PopFront(); //将这个大的i页全拿出来

			//将大页 切成 小页 的过程， 过程中还要改变映射关系

			Span* splitspan = new Span;
		/*	splitspan->_pageid = span->_pageid + numpage;
			splitspan->_pagesize = span->_pagesize - numpage;
			span->_pagesize = numpage;

			_spanLists[splitspan->_pagesize].PushFront(splitspan);


			return span;*/
			splitspan->_pageid = span->_pageid + span->_pagesize - numpage;
			splitspan->_pagesize = numpage;

			//改变映射关系
			for (int i = 0; i < numpage; i++)
			{
				_idSpanMap[splitspan->_pageid + i] = splitspan;
			}

			span->_pagesize -= numpage;


			//将切割的另一半 插入到相对应的spanLists中去
			_spanLists[span->_pagesize].PushFront(span);

			return splitspan;
		}
	}

	//向系统申请
	void *ptr = SystemAlloc(MAX_PAGE - 1); //以页的形式申请

	Span* bigspan = new Span;
	bigspan->_pageid = (PAGE_ID)ptr >> PAGE_SHIFT; //算出页号
	bigspan->_pagesize = MAX_PAGE - 1; // 页的大小 129 - 1


	//映射
	for (PAGE_ID i = 0; i < bigspan->_pagesize; ++i)
	{
		_idSpanMap[bigspan->_pageid + i] = bigspan;
	}

	//将这个128页的大页 插入到_spanLists中128的位置
	_spanLists[bigspan->_pagesize].PushFront(bigspan);

	//再次调用自己
	return _NewSpan(numpage);
}


// 合并，小页 合成 大页 的过程， 并挂在PageCache的spanLists中
void PageCache::ReleaseSpanToPageCache(Span* span)
{
	//向前合并
	while (1)
	{
		PAGE_ID prevPageId = span->_pageid - 1; //这里的span->_pageid 不应该是随机值吗？
		auto pit = _idSpanMap.find(prevPageId);
		//当前的也不存在
		if (pit == _idSpanMap.end())
		{
			break;
		}

		//如果前边的页的usecount还不等于0，说明前面的页还在使用中，不能进行合并
		Span* prevSpan = pit->second;
		if (prevSpan->_usecount != 0)
		{
			break;
		}
		//合并
		span->_pageid = prevSpan->_pageid;
		span->_pagesize += prevSpan->_pagesize;

		for (PAGE_ID i = 0; i < prevSpan->_pagesize; i++)
		{
			_idSpanMap[prevSpan->_pageid + i] = span;
		}

		// 从spanList上将 prevspan取下来
		_spanLists[prevSpan->_pagesize].Erase(prevSpan);
		delete prevSpan;
	}

	//向后合并
	while (1)
	{
		PAGE_ID nextPageId = span->_pageid + span->_pagesize;
		auto nextIt = _idSpanMap.find(nextPageId);
		if (nextIt == _idSpanMap.end())
		{
			break;
		}
		
		Span* nextSpan = nextIt->second;

		if (nextSpan->_usecount != 0)
		{
			break;
		}
		span->_pagesize += nextSpan->_pagesize;
		for (PAGE_ID i = 0; i < nextSpan->_pagesize; i++)
		{
			_idSpanMap[nextSpan->_pageid + i] = span;
		}

		_spanLists[nextSpan->_pagesize].Erase(nextSpan);
		delete nextSpan;
	}


	//将合并好的大的Span放到 PageCache中对应的Span
	_spanLists[span->_pagesize].PushFront(span);
}


Span* PageCache::GetIdToSpan(PAGE_ID id)
{
	std::map<PAGE_ID, Span*>::iterator it = _idSpanMap.find(id);

	// 不可能为nullptr，因为假如为nullptr 说明id错了，前面有点问题
	if (it == _idSpanMap.end())
	{
		return nullptr;
	}
	else
	{
		return it->second;
	}
}