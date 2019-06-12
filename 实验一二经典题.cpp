#define _CRT_SECURE_NO_WARNINGS 1 
//2、编写函数，其原型为：void index(int a[], int n, int & sub)。
//功能：在大小为n的数组a中，查找某个数sub，若找到，将对应数组元素
//的下标赋给sub，若没找到，将 - 1赋给sub，在主调函数中通过判断sub
//的值来判断数组中是否有该数。在这里，sub是引用类型的参数，但起返
//回值的作用。
#include <iostream>
#include <cassert>
using namespace std;
//void index(int a[], int n, int & sub)
//{
//	assert(a);
//	int start = 0;
//	int end = n - 1;
//	int mid = (start + end) / 2;
//	while (a[start] <= a[end])
//	{
//	
//		if ( sub < a[mid])
//		{
//			end = mid - 1;
//		}
//		 if (sub > a[mid])
//		{
//			start = mid + 1;
//		}
//		if (sub == a[mid])
//		{
//			sub = mid;
//			cout << sub << endl;
//			break;
//		}
//	}
//	//sub = -1;
//	//cout << sub << endl;
//}
//int main()
//{
//	int arr[] = { 1, 4, 5, 6, 7, 8, 9, 89};
//	int sz = 8;
//	int x = 6;
//	//cin >> x;
//	index(arr, sz, x);
//	//cout << sz << endl;
//	system("pause");
//
//	
//}
//3、编写字符串查找函数mystrchr()。
//该函数的功能是在字符串中查找指定字符，如果有该字符，
//则返回该字符在字符串中第一次出现的位置，否则返回0，
//然后便协主函数进行验证。函数原型为：
//int mystrchr(char string[], char c); 。 
//int mystrchr(char string[],char c)
//{
//	assert(string);
//	int count = 0;
//	while (*string)
//	{
//		
//		if (*string == c)
//		{
//			return count;
//			
//		}
//		string++;
//		count++;
//	}
//	return -1;
//}
//int main()
//{
//	char str[] = "I a m  lihua";
//	if (mystrchr(str, 'm') == -1)
//	{
//		cout << "没有找到";
//	}
//	else
//	{
//		cout << "找到了 ,下标为:" << mystrchr(str, 'm');
//	}
//	system("pause");
//}
//11、编一程序，将字符串“Hello, C++！”赋给一个字符数组，
//然后从第一个字母开始间隔地输出该串（请用指针完成）。
void puts_string(char* string)
{
	assert(string);
	while (*string)
	{
		cout << *string ;
		string++;
	}
	cout << endl;
}
int main()
{
	char arr[] = "lihua ma ming kai";
	puts_string(arr);
	system("pause");
}