//#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//template <class ElemType>
//class Array
//{
//private:
//	ElemType *elem;					// ����Ԫ�ش洢�ռ�
//	int size;							// ����Ԫ�ظ���
//public:
//	Array(int a[], int sz) : elem(a), size(sz){ }
//	ElemType Max();					// ��������Ԫ�ص����ֵ
//	ElemType Sum();					// ��������Ԫ��֮��
//	void Sort();						// ����
//	void Show();						// ��ʾ��������Ԫ��
//};
//
//// ������ģ���ʵ�ֲ���
//template <class ElemType>
//ElemType Array<ElemType>::Max()		// ��������Ԫ�ص����ֵ
//{
//	ElemType max = elem[0];			// ����elem[0]��С
//	for (int i = 1; i < size; i++)			// ���αȽ������µ���Сֵ
//	{
//		if (max < elem[i]) max = elem[i];
//	}
//
//	return max;						// �������ֵ
//}
//
//template <class ElemType>
//ElemType Array<ElemType>::Sum()		// ��������Ԫ�����
//{
//	ElemType sum = 0;				// ��sum�ۼ����
//	for (int i = 0; i < size; i++){ sum += elem[i]; }			// �����ۼ����
//
//	return sum;						// �������ֵ
//}
//
//template <class ElemType>
//void Array<ElemType>::Sort()			// ����
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int k = i;						// ����elem[i]��С
//		for (int j = i + 1; j < size; j++)											        // ���� elem[i],elem[i+1],...,elem[size-1] �е���Сֵ�±�k
//		if (elem[k] > elem[j]) k = j;
//		if (k != i)
//		{  // ����elem[j]��elem[k]
//			int tem;					// ��ʱ����
//			tem = elem[i]; elem[i] = elem[k]; elem[k] = tem; 	// ѭ����ֵ
//		}
//	}
//}
//
//template <class ElemType>
//void Array<ElemType>::Show()			// ��ʾ��������Ԫ��
//{
//	for (int i = 0; i < size; i++)			// ������ʾ��Ԫ�ص�ֵ
//		cout << elem[i] << "  ";
//	cout << endl;						// ����
//}
//
//int main()
//{
//	int a[] = { 6, 2, 1, 4, 5, 3 };			// ��������a
//	Array<int> obj(a, 6);					// �����������
//
//	cout << "ԭ�����Ԫ�ص�ֵ:";
//	obj.Show();							// ��ʾ��Ԫ�ص�ֵ
//	cout << "���ֵΪ" << obj.Max() << endl;
//	cout << "Ԫ��֮��Ϊ" << obj.Sum() << endl;
//	obj.Sort();							// ����
//	cout << "����������Ԫ�ص�ֵ:";
//	obj.Show();							// ��ʾ��Ԫ�ص�ֵ
//	system("pause");
//	return 0;                    		// ����ֵ0, ���ز���ϵͳ
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
//	cout << "��Ԫ�ص�ֵ��";
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