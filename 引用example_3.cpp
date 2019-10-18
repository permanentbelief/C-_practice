#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

//int Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//
//}
//int main()
//{
//	int ret = Add(1, 2);
//	Add(3, 4);
//	cout << ret << endl;
//	system("pause");
//}
int ArrayAt()
{
	static int a[10] = { 0, 1, 2, 3, 4, 5 };
	return a[i]
}
int &ArrayAt()
{
	static int a[10] = { 0, 1, 2, 3, 4, 5 };
	return a[i];
}