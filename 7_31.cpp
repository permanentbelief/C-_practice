#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

int main()
{
	//int a = 10;
	//int &b = a;//b c d ����int�� ����ͬһ��ռ�ı���
	//int &c = b;
	//int &d = c;
	//d = 20;         // a,b,c,d����20��
	int a = 10; 
	int &b = a; // ���ñ����ڶ����ʱ�� ��ʼ�� �����Ҫ��ø�˭���
	/*int &b;
	b = a;*/ // ������
	int a = 10;
	int&b = a;
	int c = 20;
	b = c;   // �ѿռ�c��ֵ ��b�� b��a������ b��a��ֵ���ı�

	int&r = 10; // �ҵ�10����ռ䣬�Ϳ�����r������ ���ԼӸ�const�����޸� ���ó���������const�������޸�

	// ָ�������� ��ֵ�� Ȩ�޵���С ok Ȩ�޵ķŴ� no
	int a = 20;
	const int& r2 = a;

	const int b = 30;
	const int &r3 = b; //����� const b�ǲ����޸ĵģ� ����cһ�������޸�

	int c = b; //���� ����֮��û��Ӱ�� ����ָ������õĸ�ֵ

	const int* // 10:30  
	int * const
	int const* // �͵�һ��һ��

	int* p1 = &b; // no Ȩ�޵ķŴ� ��
	const int* p2 = &b;// ok
	int* p3 = &a;// ok
	const int* p3 = &a;// ok  Ȩ�޵���С 10:34 10:36-38 ������ 10:45


}
int &ArrayAt(int i)	 //���������
{
	static int a[10] = { 0, 1, 2, 3, 4, 5 };
	return a[i];
}

int ArrayAt(int i)//����������ֵ ���������� ���ڲ���������������ֵ�� �������ڿ���������������ֵ
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