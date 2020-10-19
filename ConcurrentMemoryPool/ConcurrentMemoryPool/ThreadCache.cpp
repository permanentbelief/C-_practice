#define _CRT_SECURE_NO_WARNINGS 1 

/*
内存碎片
性能
高并发的性能
*/

#include "ThreadCache.h"
#include "CentralCache.h"

void* ThreadCache::Allocte(size_t size)
{
	size_t index = SizeClass::ListIndex(size); //根据对象大小算出 自由链表的下标
	FreeList& freeList = _freeLists[index];
	if (! freeList.Empty())  //如果不为空 则取出一个对象
	{
		return freeList.Pop();
	}
	else
	{														   // size有可能是7， 是1-128字节的范围内，对齐数是8， 所以要进行重新算出它的在FreeList链表上对应的位置
		return FetchFromCentralCache(SizeClass::RoundUp(size));//自由链表对齐到size对应的位置，去Central Cache 中取这样大小的
								
														       // 也就是说 对齐到字节数
	}
}

void ThreadCache::Deallocte(void* ptr, size_t size)
{
	size_t index = SizeClass::ListIndex(size); //算出自由链表中的下标
	FreeList& freeList = _freeLists[index];
	freeList.Push(ptr);


	//对象个数满足一定条件 | 到达内存的大小 2MB
	size_t num = SizeClass::NumMoveSize(size); //对象的个数 控制在[2,512]之间
	if (freeList.Num() >= num)
	{
		ListTooLong(freeList, num, size);
	}
	//if()
	//{
		//ReleaseToCentralCache();
	//}
}


// 独立测试  Thread Cache
//void* ThreadCache::FetchFromCentralCache(size_t index)
//{
//	size_t num = 20;
//
//	//测试模拟内存取对象的代码，测试Thread Cache的逻辑
//	size_t size = (index + 1) * 8;
//	char* start = (char*)malloc(size*num);
//	char* cur = start;
//	for (size_t i = 0; i < num - 1; ++i)
//	{
//		char* next = cur + size;
//		NextObj(cur) = next;
//
//		cur = next;
//	}
//	NextObj(cur) = nullptr;
//
//	void* head = NextObj(start);
//	void* tail = cur;
//	_freeLists[index].PushRange(head, tail);
//	return  start;
//}
void ThreadCache::ListTooLong(FreeList& freeList,size_t num, size_t size)
{
	void* start = nullptr;
	void* end = nullptr;
	freeList.PopRange(start, end,  num);//走完这一步start和end指向 剪出来那一段的头和尾

	//因为尾不一定是那个链表的结束位置，里面还存着后面的地址，所以要置空一下
	NextObj(end) = nullptr;

	CentralCache::GetInstance().ReleaseListToSpans(start, size);

}
void * ThreadCache::FetchFromCentralCache(size_t size) // size 是对齐到 FreeList上的 内存块的大小
{
	size_t num = SizeClass::NumMoveSize(size); // 看给thread申请多少个  [2,512]

	void* start = nullptr;
	void* end = nullptr;
	size_t actualNum = CentralCache::GetInstance().FetchRangeObj(start, end, num, size); //申请  num个大小为size的内存块

	if (actualNum == 1)
		return start;
	else
	{
		size_t index = SizeClass::ListIndex(size);
		FreeList& list = _freeLists[index];
		list.PushRange(NextObj(start), end, num);

		return start;
	}

}