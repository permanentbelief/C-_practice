#define _CRT_SECURE_NO_WARNINGS 1 
//模板的特化
#include <iostream>
using namespace std;
//template<class T>
//bool IsEqual(T& left, T&right)
//{
//	return left == right;
//}
//template<>
//bool IsEqual<char*>(char*&left, char*&right)
//{
//	if (strcmp(left, right) == 0)
//		return true;
//	return false;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	cout << IsEqual(a, b) << endl;
//	//char* p1 = "hello";
//	//char* p2 = "hello";
//	char* p1 = new char [6];
//	char* p2 = new char [6];
//	strcpy(p1, "hello");
//	strcpy(p2, "hello");//地址不一样
//	/*if (IsEqual(p1, p2))
//		cout << p1 << endl;
//	else
//		cout << p2 << endl;*/
//	cout << IsEqual(p1, p2) << endl;
//	system("pause");
//}
//函数模板的特化
// 原型 和 template<>

//
////类模板的特化 特化的本质在于 ： 
////模板
//template <class T1 ,class T2>
//class Date
//{
//public:
//	Date() { cout << "Data<T1,T2>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//// 全特化
//template<>
//class Date<int, int>
//{
//public:
//	Date() { cout << "Data<int,int>" << endl; }
//private:
//	int _d1;
//	char _d2;
//};
//// 偏特化 ：特化部分参数
//template <class T1>
//class Date<T1, int>
//{
//public:
//	Date() { cout << "Data<T1,int>" << endl; }
//private:
//	T1 _d1;
//	char _d2;
//};
////
////偏特化：对模板参数近一步限制
//template <class T1, class T2>
//class Date<T1*,T2*>//此处也能给引用
//{
//public:
//	Date() { cout << "Data<T1*,T2*>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//int main()
//{
//	Date<int, char> d1;
//	Date<int, int> d2;
//	Date<char, int> d3;
//	Date<char*, int*>d4;
//	system("pause");
//}
//求1+2+3+4+...+n 要求不能使用乘除 for、while、if、else、switch、case、等关键字判断
//template <size_t N>
//class Sum
//{
//public:
//	enum{Ret = N + Sum<N-1>::Ret};//匿名枚举 直接取Ret,编译时计算
//
//};
//template <>
//class Sum<1>
//{
//public:
//	enum{ Ret = 1 };
//
//};
//int main()
//{
//	cout << Sum<10>::Ret << endl;
//	system("pause");
//}
//类型萃取
//template<class T>
//T*Copy(T*dst, const T*src, size_t size)
//{
//	memcpy(dst, src, sizeof(T)*size);
//	return dst;
//}
//template<>
//string*Copy(string*dst, const string*src, size_t size)
//{
//
//	for (size_t i = 0; i < size; i++)
//	{
//		dst[i] = src[i];
//	}
//	return dst;
//}
//int main()
//{
//	string a1[3] = { "111", "222", "333" };
//	string a2[3];
//	Copy(a2, a1, 3);
//	for (auto:)
//
//}