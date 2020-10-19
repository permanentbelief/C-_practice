#pragma once

#include "Common.h"

//size 是大小
//num 是个数
class ThreadCache
{
public:
	//申请内存和释放内存
	void* Allocte(size_t size);
	void Deallocte(void* ptr, size_t size);

	//从中心缓存获取对象
	void * FetchFromCentralCache(size_t index);

	//如果自由链表中的对象超过一定长度就要释放给中心缓存
	void ListTooLong(FreeList& freeList, size_t num, size_t size);
private:
	FreeList _freeLists[NFREE_LIST];


	//可以这样实行静态的Thread Cache
	//将每一个ThreadCache对象串成一个链表，对每一个ThreadCache 加锁
	// ThreadCache* _next;
	// int threadId;
};

//静态的 线程TLS Thread Loacl Storage
_declspec (thread) static ThreadCache* pThreadCache = nullptr;