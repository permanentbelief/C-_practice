#define _CRT_SECURE_NO_WARNINGS 1 

#include "ThreadCache.h"
#include "CentralCache.h"
#include "PageCache.h"

#include "Common.h"
#include <vector>

//void UnitThreadCache()
//{
//	ThreadCache tc;
//	vector<void*> v;
//	for (size_t i = 0; i < 21; i++)
//	{
//		v.push_back(tc.Allocte(7));
//	}
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		printf("[%d]->%p\n", i, v[i]);
//	}
//
//	for (auto ptr : v)
//	{
//		tc.Deallocte(ptr, 7);
//	}
//}

void UnitTestSizeClass()
{
	cout << SizeClass::RoundUp(1) << endl;
	cout << SizeClass::RoundUp(7) << endl;
	cout << SizeClass::RoundUp(127) << endl;
	cout << SizeClass::RoundUp(128) << endl;
	cout << SizeClass::RoundUp(129) << endl;



	cout << SizeClass::RoundUp(8 * 1024 + 1) << endl;
	cout << SizeClass::RoundUp(64 * 1024 - 1) << endl;


	cout << SizeClass::ListIndex(129) << endl;
	cout << SizeClass::ListIndex(1023) << endl;
	cout << SizeClass::ListIndex(1024) << endl;
	cout << SizeClass::ListIndex(1025) << endl;
}

void UnitTestSystemAlloc()
{
	void* ptr = SystemAlloc(MAX_PAGE - 1);
	PAGE_ID id = (PAGE_ID)ptr >> PAGE_SHIFT;
	void* ptrshift = (void*)(id << PAGE_SHIFT);

	char* obj1 = (char*)ptr;
	char* obj2 = (char*)ptr + 8;
	char* obj3 = (char*)ptr + 16;

	PAGE_ID id1 = (PAGE_ID)obj1 >> PAGE_SHIFT;
	PAGE_ID id2 = (PAGE_ID)obj2 >> PAGE_SHIFT;
	PAGE_ID id3 = (PAGE_ID)obj3 >> PAGE_SHIFT;

}

//void func1()
//{ 
//	std::vector<void*> v;
//	size_t size = 7;
//	for (size_t i = 0; i < SizeClass::NumMoveSize(size) + 1; i++) //NumMoveSize将申请的对象个数控制在【2,512】
//	{
//		v.push_back(ConcurrentMalloc(size));
//	}
//
//	for (auto ptr : v)
//	{
//		ConcurrentFree(ptr);
//	}
//	v.clear();
//}
#include <Windows.h>
//int main()
//{
//	// UnitThreadCache();
//	//UnitTestSizeClass();
//	UnitTestSystemAlloc();
//	system("pause");
//}