#define _CRT_SECURE_NO_WARNINGS 1 
//2����д��������ԭ��Ϊ��void index(int a[], int n, int & sub)��
//���ܣ��ڴ�СΪn������a�У�����ĳ����sub�����ҵ�������Ӧ����Ԫ��
//���±긳��sub����û�ҵ����� - 1����sub��������������ͨ���ж�sub
//��ֵ���ж��������Ƿ��и����������sub���������͵Ĳ���������
//��ֵ�����á�
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
//3����д�ַ������Һ���mystrchr()��
//�ú����Ĺ��������ַ����в���ָ���ַ�������и��ַ���
//�򷵻ظ��ַ����ַ����е�һ�γ��ֵ�λ�ã����򷵻�0��
//Ȼ���Э������������֤������ԭ��Ϊ��
//int mystrchr(char string[], char c); �� 
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
//		cout << "û���ҵ�";
//	}
//	else
//	{
//		cout << "�ҵ��� ,�±�Ϊ:" << mystrchr(str, 'm');
//	}
//	system("pause");
//}
//11����һ���򣬽��ַ�����Hello, C++��������һ���ַ����飬
//Ȼ��ӵ�һ����ĸ��ʼ���������ô�������ָ����ɣ���
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