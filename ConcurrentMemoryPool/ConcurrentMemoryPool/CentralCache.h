#pragma once

#include "Common.h"


//得改为单例模式
class CentralCache
{
public:
	//从中心Cache获取一定数量的对象给thread cache
	size_t FetchRangeObj(void*& start, void*& end, size_t num, size_t size);


	//将一定数量的对象释放到span跨度
	void ReleaseListToSpans(void* start, size_t size);

	//从spanlist 或者 page chche获取一个span
	Span* GetOneSpan(size_t size);

	static CentralCache& GetInstance()
	{
		static CentralCache inst;
		return inst;
	}
private:
	CentralCache()
	{

	}

	CentralCache(const CentralCache&) = delete;
	SpanList _spanLists[NFREE_LIST];
};


//static CentralCache centralCacheInst;