#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//template <class T>
//T f(T x)
//{
//	T y;
//	y = x *(T)5.8;
//	return y;
//
//}
//int main()
//{
//	cout << f(5) << endl;
//	cout << f(5.0) << endl;
//	system("pause");
//}

//#include <iostream>
//using namespace std;
//void ShowMax(int a, int b)
//{
//	int max = (a > b) ? a : b;
//	cout << "调用int，maxValue=" << max << endl;
//
//}
//void ShowMax(double a, double b)
//{
//	int max = (a > b) ? a : b;
//	cout << "调用double，maxValue=" << max << endl;
//
//}
//template <class T1, class T2>
//void ShowMax(T1 a, T2 b)
//{
//	T1 max = (a > (T1)b) ? a : (T1)b;
//
//	cout << "调用函数模板，maxValue=" << max << endl;
//
//}
//int main()
//{
//	ShowMax(16, 518);
//	ShowMax(16.0, 518.0);
//	ShowMax(16.0, 518);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class A
//{
//private:
//	int a;
//public:
//	A(int x) :a(x){}
//	virtual void Show() const { cout << a; }
//};
//template <class T>
//class B : public A
//{
//private:
//	T b;
//public:
//	B(int x, T y) :A(x), b(y){}
//	void Show() const
//	{
//		A::Show();
//		cout << " " << b << endl;
//	}
//};
//int main()
//{
//	B<char*>obj(8, "is my happy digit!");
//	obj.Show();
//	system("pause");
//}
//#include <iostream>
//using namespace std;
//template <class T1, class T2>
//T1 Max(T1 a, T2 b)
//{
//	return (a >(T1) b) ? a :(T1) b;
//}
//int main()
//{
//	cout << Max(16, 518) << endl;
//	cout << Max(16.8, 518) << endl;
//	system("pause");
//}
//#include <iostream>
//using namespace std;
//template <class T>
//class Array
//{
//private:
//	T *a;
//	int elem;
//public:
//	Array(T *y, int a) :a(y), elem(a){}
//	void sort()
//	{
//		int i = 0;
//		for (i = 0; i < elem; i++)
//		{
//			if (a[i] < a[i + 1])
//			{
//				T temp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = temp;
//			}
//		}
//	}
//	T sum()
//	{
//		int i = 0;
//		T sum = 0;
//		for (i = 0; i < elem; i++)
//		{
//	
//			sum += a[i];
//		}
//		return sum;
//	}
//	T find()
//	{
//		int i = 0;
//		T max = a[0];
//		for (i = 0; i < elem; i++)
//		{
//			if (max < a[i])
//			{
//				max = a[i];
//			}
//		}
//		return max;
//	}
//	void show()
//	{
//		
//			for (int i = 0; i < elem; i++)			
//			cout << a[i] << "  ";
//			cout << endl;						
//	}
//};
//int main()
//{
//	
//		int a[] = { 6, 2, 1, 4, 5, 3 };			
//		Array<int> obj(a, 6);					
//
//		cout << "原数组各元素的值:";
//		obj.show();							
//		cout << "最大值为" << obj.find() << endl;
//		cout << "元素之和为" << obj.sum() << endl;
//		obj.sort();							
//		cout << "排序后数组各元素的值:";
//		obj.show();	
//		system("pause");
//		return 0;                    		
//	}


//第六题
//#include <iostream>
//using namespace std;
//template <class T>
//class Array
//{
//private:
//	T *elem;
//	int size;
//public:
//	Array(T *p, int sz) :elem(p), size(sz){}
//	static T Max(T elem[], int n);	
//	static T Sum(T elem[], int n);	
//	static void Sort(T elem[], int n);		
//	static void Show(T elem[], int n);	
//};
//template <class T>
//T Array<T>::Sum(T elem[], int n)
//{
//	T sum = 0;				
//	for (int i = 0; i < n; i++){ sum += elem[i]; }			
//
//	return sum;					
//}
//
//template <class T>
//T Array<T>::Max(T elem[], int n)
//{
//	T max = elem[0];		
//	for (int i = 1; i < n; i++)			
//	{
//		if (max < elem[i]) max = elem[i];
//	}
//
//	return max;						
//}
//
//template <class T>
//void Array<T>::Sort(T elem[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int k = i;						
//		for (int j = i + 1; j < n; j++)				
//		if (elem[k] > elem[j]) k = j;
//		if (k != i)
//		{  
//			int tem;					
//			tem = elem[i]; elem[i] = elem[k]; elem[k] = tem; 	
//		}
//	}
//}
//template <class T>
//void Array<T>::Show(T elem[], int n)
//{
//	for (int i = 0; i < n; i++)			
//		cout << elem[i] << "  ";
//	cout << endl;						
//}
//int main()
//{
//	int a[] = { 6, 2, 1, 4, 5, 3 };		
//	Array<int> obj(a, 6);					
//
//	cout << "原数组各元素的值:";
//	obj.Show(a,6);							
//	cout << "最大值为" << obj.Max(a,6) << endl;
//	cout << "元素之和为" << obj.Sum(a,6) << endl;
//	obj.Sort(a,6);							
//	cout << "排序后数组各元素的值:";
//	obj.Show(a,6);		
//	system("pause");
//	return 0;
//}