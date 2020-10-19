#pragma once

#include "Common.h"

class PageCache
{
public:
	Span* _NewSpan(size_t numpage); // 递归的步骤 防止产生递归锁

	//申请一个numpage页 的span
	Span* NewSpan(size_t numpage);

	void ReleaseSpanToPageCache(Span* span);

	Span* GetIdToSpan(PAGE_ID id); //通过映射返回span

	static PageCache& GetInstance()
	{
	    static  PageCache pageCacheInst;
		return pageCacheInst;
	}
private:
	SpanList _spanLists[MAX_PAGE];
	std::map<PAGE_ID, Span*> _idSpanMap; // 建立 页号 与 span的映射

	PageCache()
	{

	}
	PageCache(const PageCache&) = delete;

};

//static PageCache pageCacheInst;