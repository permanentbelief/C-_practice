#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

int main()
{
	//int a = 10;
	//int &b = a;//b c d 都是int型 都是同一块空间的别名
	//int &c = b;
	//int &d = c;
	//d = 20;         // a,b,c,d都是20了
	int a = 10; 
	int &b = a; // 引用必须在定义的时候 初始化 起外号要想好给谁起的
	/*int &b;
	b = a;*/ // 错误范例
	int a = 10;
	int&b = a;
	int c = 20;
	b = c;   // 把空间c的值 给b， b是a的引用 b和a的值都改变

	int&r = 10; // 找到10这个空间，就可以用r来改了 所以加个const不可修改 引用常量必须用const，不可修改

	// 指针与引用 赋值： 权限的缩小 ok 权限的放大 no
	int a = 20;
	const int& r2 = a;

	const int b = 30;
	const int &r3 = b; //必须加 const b是不能修改的， 所以c一定不能修改

	int c = b; //可以 互相之间没有影响 不是指针和引用的赋值

	const int* // 10:30  
	int * const
	int const* // 和第一个一样

	int* p1 = &b; // no 权限的放大 ，
	const int* p2 = &b;// ok
	int* p3 = &a;// ok
	const int* p3 = &a;// ok  权限的缩小 10:34 10:36-38 做参数 10:45


}
int &ArrayAt(int i)	 //必须加引用
{
	static int a[10] = { 0, 1, 2, 3, 4, 5 };
	return a[i];
}

int ArrayAt(int i)//引用做返回值 出了作用域 不在不能用引用做返回值， 变量还在可以用引用做返回值
{
	static int a[10] = { 0, 1, 2, 3, 4, 5 };
	return a[i];
}
int ArrayAt(int i)
{
	static int a[10] = { 0, 1, 2, 3, 4, 5 };
	return a[i];
}
int main()
{
	ArrayAt(3) = 10;
}
int& Add(int a, int b)
{
	int c = a + b;
	return c;
}
int main()
{
	int& ret = Add(1, 2);
	cout << ret << endl;
	Add(3, 4);
	cout << ret << endl; //10:56
}


int main()
{
	int a = 10;
	int &b = a;
	int* b = &a;
}