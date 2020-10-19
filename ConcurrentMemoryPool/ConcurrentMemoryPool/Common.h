#pragma once

#include <iostream>
#include <assert.h>

#include <thread>
#include <mutex>
#include <map>

#ifdef _WIN32
#include <windows.h>
#endif 

//using namespace std;

using std::endl;
using std::cout;

const size_t MAX_SIZE = 64 * 1024; // 64页
const size_t NFREE_LIST = MAX_SIZE / 8; //自由链表下的链表个数

const size_t PAGE_SHIFT = 12;  //  4k为页 移位
const size_t MAX_PAGE = 129;   //  PageCache的最大页[1,128]



inline void*& NextObj(void* obj) //获取下一个节点的地址  
{
	return *((void**)obj);
}
class FreeList
{
private:
	void* _freelist = nullptr;
	size_t _num = 0;
public:
	void Push(void* obj)
	{
		//头插
		NextObj(obj) = _freelist;
		_freelist = obj;
		++_num;
	}
	void PushRange(void* head, void* tail, size_t num) // 增加了一个对象大小size
	{
		NextObj(tail) = _freelist;

		_freelist = head;
		_num += num;
	}

	size_t PopRange(void*& start, void*& end, size_t num) // 加了引用
	{
		size_t actualNum = 0;
		void* prev = nullptr;

		//       
		// 

		void* cur = _freelist;
		for (; actualNum < num && cur != nullptr; ++actualNum)
		{
			prev = cur;
			cur = NextObj(cur);
		}

		start = _freelist;
		end = prev;
		_freelist = cur;
		_num -= actualNum;

		return actualNum;
	}
	void *Pop()
	{
		//头删
		void* obj = _freelist;
		_freelist = NextObj(obj);
		_num--;
		return obj;
	}
	bool Empty()
	{
		return _freelist == nullptr;
	}
	void Clear() //清理 ？？ 怎么清理的？
	{
		_freelist = nullptr;
	}
	size_t Num()
	{
		return _num;
	}
};

class SizeClass
{
public:
	/*static size_t ListIndex(size_t size)
	{
		if (size % 8 == 0)
		{
			return  size / 8 - 1;

		}
		else
		{
			return size / 8;
		}
	}*/
	/*static size_t RoundUp(size_t size) //自由链表上的 对齐到字节数
	{
		if (size % 8 != 0)
		{
			return (size / 8 + 1) * 8;
		}
		else
		{
			return size;
		}
	}*/

	//控制在[%1,10%]左右的内碎片浪费
	//[1,128] 8byte对齐 freelist[0.16)
	//[129,1024] 16byte对齐 freelist[16,72)
	//[1025,8*1024] 128byte对齐 freelist[72,128)
	//[8*1024+1,64*1024] 1024byte对齐 freelist[128,184)
	//
	//
	
	static size_t _RoundUp(size_t size, int alignment)
	{
		return (size + alignment - 1)&(~(alignment - 1));
	}

	// [9-16] + 7 = [16,13] -> 16 8 4 2 1
	// [17-32] + 15 = [32,47] -> 32 16 8 4 2 1 这个例子不太恰当(本应该>128 <=1024)，意思就是这样来对齐

	static inline size_t RoundUp(size_t size)
	{
		assert(size <= MAX_SIZE);

		if (size <= 128)
		{
			return _RoundUp(size, 8);
		}
		else if (size <= 1024)
		{
			return _RoundUp(size, 16);
		}
		else if (size <= 8192)
		{
			return _RoundUp(size, 128);
		}
		else if (size <= 65536)
		{
			return _RoundUp(size, 1024);
		}
		return -1;
	}

	static size_t _ListIndex(size_t size, int align_shift) // 7 + (1 << align_shift) >> - 1
	{
		return ((size + (1 << align_shift) - 1) >> align_shift) - 1;
	}

	static size_t ListIndex(size_t size)
	{
		assert(size <= MAX_SIZE);

		// 每个区间有多少个链
		static int group_array[4] = { 16, 56, 56, 56 };
		if (size <= 128)
			return _ListIndex(size, 3);
		else if (size <= 1024)
			return _ListIndex(size - 128, 4) + group_array[0];
		else if (size <= 8192)
			return _ListIndex(size - 1024, 7) + group_array[0] + group_array[1];
		else if (size <= 65535)
			return _ListIndex(size - 8192, 10) + group_array[0] + group_array[1] + group_array[2];
		
		return -1;

	}
	// 控制在[2,512]个之间
	static size_t NumMoveSize(size_t size) //看申请多少个size大小的对象
	{
		if (size == 0)
			return 0;
		int num = MAX_SIZE / size;
		if (num < 2)
			num = 2;
		if (num > 512)
			num = 512;

		return num;
	}

	static size_t NumMovePage(size_t size) //看申请多少页的Page
	{
		size_t num = NumMoveSize(size);
		size_t npage = num*size;

		npage >>= 12;
		if (npage == 0)
			npage = 1;

		return npage;
	}
};

//////////////////////////////////////////////////////////
// span 跨度 管理页为单位的内存对象，本质是方便做合并，解决内存碎片问题


//针对 windows
# ifdef _WIN32
typedef unsigned int PAGE_ID; //32位下 unsigned int 可以表示到最大的页
#else
typedef unsigned long long PAGE_ID //64位下 unsiged int 不能表示到最大的页
#endif


struct Span
{
	PAGE_ID _pageid; //页号
	int _pagesize;  //页的数量

	size_t _objSize = 0; //自由链表对象大小

	FreeList _freeList; //对象的自由链表
	int _usecount; //内存对象使用计数

	Span* _next;
	Span* _prev;
};


class SpanList
{
public:
	SpanList()
	{
		_head = new Span;
		_head->_next = _head;
		_head->_prev = _head;

		// _head->next  , _head->prev
	}
	Span* Begin()
	{
		return _head->_next; 
	}
	Span* End()
	{
		return _head;
	}
	void Insert(Span* pos, Span* newspan)  // 在pos 位置前插入 一个 span
	{
		Span* prev = pos->_prev;

		//prev   newspan   pos

		prev->_next = newspan;
		pos->_prev = newspan;
		newspan->_next = pos;
		newspan->_prev = prev;
	}
	void Erase(Span* pos)  // 释放pos位置的 span
	{
		assert(pos != _head);


		Span* prev = pos->_prev;
		Span* next = pos->_next;

		prev->_next = next;
		next->_prev = prev;
	}
	void PushFront(Span* newspan) // 头插
	{
		Insert(_head->_next, newspan);
	}
	void PopFront()
	{
		Erase(_head->_next);
	}

	void PushBack(Span* newspan)
	{
		Insert(_head, newspan); // 就是
	}
	void PopBack()
	{
		Erase(_head->_prev);
	}
	bool Empty()
	{
		return Begin() == End();
	}
	void Lock()
	{
		_mtx.lock();
	}
	void UnLock()
	{
		_mtx.unlock();
	}
private:
	Span* _head;
	std::mutex _mtx;
};

inline static void * SystemAlloc(size_t num_page)
{
#ifdef _WIN32
	void* ptr = VirtualAlloc(0, num_page*(1 << PAGE_SHIFT),                 //调研virtuallAlloc 和 brk, mmp
		MEM_COMMIT | MEM_RESERVE ,PAGE_READWRITE);
#else
	// brk mmp等等
#endif
	if (ptr == nullptr)
		throw std::bad_alloc();

	return ptr;
}

inline static void SystemFree(void* ptr)
{
#ifdef _WIN32
	VirtualFree(ptr, 0, MEM_RELEASE); //释放大内存 > 128*4k  也就是 >128页的内存 我们用VirtualFree释放
#else
#endif
}