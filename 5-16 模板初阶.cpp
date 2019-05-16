#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

// 函数模板
//模板的意义： 是一个蓝图，把重复的东西交给机器去做
// 模板的实例化：
//template<class T>
//T Add(const T& left, const T& right)//并不是一个函数，一个模具
//{
//	return left + right;
//}
//int Add(int left, int right)
//{
//	return left + right;
//}
//int main()
//{
//	double d1 = 10.01, d2 = 20.02;
//	int  a1 = 10, a2 = 20;
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//	cout << Add((double)a1, d1) << endl;
//	cout << Add<int>(a1, d1) << endl;//显式实例化 调用第一个
//
//	system("pause");
//}
// 类模板

//typedef int VDataType;
template <class T>
class Vector
{
public:
	Vector()
		:_array(nullptr)
		, _size(0)
		, _capacity(0)
	{}
	void PushBack(const T& x)
	{
		_array[_size] = x;
		++_size;
	}
	~Vector()
	{
		delete[]_array;
		_array = nullptr;
	}
private:
	T * _array;
	size_t _size;
	size_t _capacity;
};
int main()
{
	Vector v1; // int
	Vector v2; // char
	system("pause");
}