#pragma once

#include "ThreadCache.h"
#include "PageCache.h"


void * ConcurrentMalloc(size_t size)
{
	if (size < MAX_SIZE) // [1byte, 64kb]
	{
		if (pThreadCache == nullptr)
		{
			pThreadCache = new ThreadCache;
			cout << std::this_thread::get_id() << "->" << pThreadCache << endl;
		}

		return pThreadCache->Allocte(size);
	}
	else if (size <= ((MAX_PAGE - 1) << PAGE_SHIFT)) // （64kb,128*4k]
	{
		size_t align_size = SizeClass::_RoundUp(size, 1 << PAGE_SHIFT); //看有多少个4k,多少个页一共
		size_t pagenum = (align_size >> PAGE_SHIFT); //除4k看有多少页
		Span* span = PageCache::GetInstance().NewSpan(pagenum); //申请这么大的span,在NewSpan里面已经给好了pageid
		span->_objSize = align_size;
		//在 NewSpan中 已经获得了Page_id;
		void* ptr = (void*)(span->_pageid << PAGE_SHIFT);

		return ptr;
	}
	else  //[128*4kb.-] 直接调用Virtualloc 申请
	{
		size_t align_size = SizeClass::_RoundUp(size, 1 << PAGE_SHIFT);
		size_t pagenum = (align_size >> PAGE_SHIFT);
		return SystemAlloc(pagenum); //直接申请pagenum个页
	}
}

void ConcurrentFree(void* ptr)
{
	size_t pageid = (PAGE_ID)ptr >> PAGE_SHIFT;
	Span* span = PageCache::GetInstance().GetIdToSpan(pageid);
	if (span == nullptr) // [128*4kb,-] 因为没有映射关系
	{
		SystemFree(ptr); //底层就是调用的VirtualFree
		return;
	}
	size_t size = span->_objSize;
	if (size <= MAX_SIZE) // [1byte,64kb]
	{
		pThreadCache->Deallocte(ptr, size);
	}
	else if (size <= (MAX_SIZE - 1) << PAGE_SHIFT)
	{
		PageCache::GetInstance().ReleaseSpanToPageCache(span);
	}
}