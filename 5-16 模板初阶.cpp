#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

// ����ģ��
//ģ������壺 ��һ����ͼ�����ظ��Ķ�����������ȥ��
// ģ���ʵ������
//template<class T>
//T Add(const T& left, const T& right)//������һ��������һ��ģ��
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
//	cout << Add<int>(a1, d1) << endl;//��ʽʵ���� ���õ�һ��
//
//	system("pause");
//}
// ��ģ��

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