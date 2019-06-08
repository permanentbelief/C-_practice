//#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//template <class ElemType>
//class Array
//{
//private:
//	ElemType *elem;					// 数组元素存储空间
//	int size;							// 数组元素个数
//public:
//	Array(int a[], int sz) : elem(a), size(sz){ }
//	ElemType Max();					// 返回数组元素的最大值
//	ElemType Sum();					// 返回数组元素之和
//	void Sort();						// 排序
//	void Show();						// 显示数组所有元素
//};
//
//// 数组类模板的实现部分
//template <class ElemType>
//ElemType Array<ElemType>::Max()		// 返回数组元素的最大值
//{
//	ElemType max = elem[0];			// 假设elem[0]最小
//	for (int i = 1; i < size; i++)			// 依次比较求最新的最小值
//	{
//		if (max < elem[i]) max = elem[i];
//	}
//
//	return max;						// 返回最大值
//}
//
//template <class ElemType>
//ElemType Array<ElemType>::Sum()		// 返回数组元素这和
//{
//	ElemType sum = 0;				// 用sum累加求和
//	for (int i = 0; i < size; i++){ sum += elem[i]; }			// 依次累加求和
//
//	return sum;						// 返回最大值
//}
//
//template <class ElemType>
//void Array<ElemType>::Sort()			// 排序
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int k = i;						// 假设elem[i]最小
//		for (int j = i + 1; j < size; j++)											        // 查找 elem[i],elem[i+1],...,elem[size-1] 中的最小值下标k
//		if (elem[k] > elem[j]) k = j;
//		if (k != i)
//		{  // 交换elem[j]和elem[k]
//			int tem;					// 临时变量
//			tem = elem[i]; elem[i] = elem[k]; elem[k] = tem; 	// 循环赋值
//		}
//	}
//}
//
//template <class ElemType>
//void Array<ElemType>::Show()			// 显示数组所有元素
//{
//	for (int i = 0; i < size; i++)			// 依次显示各元素的值
//		cout << elem[i] << "  ";
//	cout << endl;						// 换行
//}
//
//int main()
//{
//	int a[] = { 6, 2, 1, 4, 5, 3 };			// 定义数组a
//	Array<int> obj(a, 6);					// 定义数组对象
//
//	cout << "原数组各元素的值:";
//	obj.Show();							// 显示各元素的值
//	cout << "最大值为" << obj.Max() << endl;
//	cout << "元素之和为" << obj.Sum() << endl;
//	obj.Sort();							// 排序
//	cout << "排序后数组各元素的值:";
//	obj.Show();							// 显示各元素的值
//	system("pause");
//	return 0;                    		// 返回值0, 返回操作系统
//}


//template <class T>
//class ArrayAlg
//{
//private:
//	T* elem;
//	int size;
//public:
//	ArrayAlg(int a[], int s) :
//		elem(a), size(s) {}
//	static T Max(T elem[], int size);
//	static T Sum(T elem[], int size);
//	static void Sort(T elem[], int size);
//	static void Display(T elem[], int size);
//
//};
//
//template <class T>
//T ArrayAlg<T>::Max(T elem[], int size)
//{
//	T max = elem[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (max < elem[i])
//		{
//			max = elem[i];
//		}
//	}
//	return max;
//}
//
//template <class T>
//T ArrayAlg<T>::Sum(T elem[], int size)
//{
//	T sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += elem[i];
//	}
//	return sum;
//}
//int main()
//{
//	int a[] = { 7, 10, 8, 9, 6, 2, 1, 4, 5, 3 };
//	ArrayAlg<int>obj(a, 10);
//	cout << "各元素的值：";
//	obj.Display(a, 10);
//	cout << "Max:" << obj.Max(a, 10) << endl;
//	cout << "Sum:" << obj.Sum(a, 10) << endl;
//	system("pause");
//}

//class A
//{
//private:
//	int a;
//public:
//	A(int x) :a(x){}
//	
//		virtual void Show() const{ cout << a; }
//	
//};
//
//template <class T>
//class B : public A
//{
//private:
//	T b;
//public:
//	B(int x, T y) :A(x), b(y){}
//	void Show() const
//	{
//		//A::Show();
//		cout << " " << b << endl;
//	}
//
//
//};
//int main()
//{
//	B <char*> obj(8, "is my happy digit!");
//	obj.Show();
//	system("Pause");
//}

//template <class T>
//class Max
//{
//public:
//	Max(T a, T b, T c);
//	T max();
//	void set(T, T, T);
//	void get();
//private:
//	T item1;
//	T item2;
//	T item3;
//
//};
//template <class T>
//Max<T>::Max(T x, T y, T z)
//:item1(x), item2(y), item3(z)
//{}
//template <class T>
//void Max<T>::set(T x, T y, T z)
//{
//	item1 = x;
//	item2 = y;
//	item3 = z;
//}
//
//template <class T>
//void Max<T>::get()
//{
//	cout << item1 << endl;
//	cout << item2 << endl;
//	cout << item3 << endl;
//
//}
//
//template <class T>
//T Max<T>::max()
//{
//	T temp;
//	temp = (item1 > item2) ? item1 : item2;
//	temp = (temp > item3) ? temp : item3;
//	return temp;
//}
//int main()
//{
//	Max<int>myint1(3, 6, 9);
//	myint1.get();
//	myint1.set(8, 9, 0);
//	myint1.get();
//	system("pause");
//}