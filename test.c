#define _CRT_SECURE_NO_WARNINGS 1 
//ö��
#include <stdio.h>

//enum Week
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex
//{
//	Male,
//	Female,
//	Secret
//};
//enum Color
//{
//	Red = 1,
//	Green = 2,
//	Blue = 4
//
//};

//struct Week
//{
//	Mon,
//	Tu
//};


//struct ���ǳ�Ա����   ������� ,ÿһ�ж���һ�����ʽ  �ԷֺŽ���
// enum   ��Ա����  ���� ö��Ĭ��ֵ��0 ��ʼ,Ҳ���Ը��������γ���

//�����(���ݽṹ) ö��
//const int RED = 0;
//const int BLACK = 1;
//enum Color 
//{
//	RED,
//	BLACK
//};
//
//enum Color1 //��ɫ
//{
//	BLUE = 4
//};
//enum Color2
//{
//	RED = 5,
//	GREEN = 6,
//	BLACK = 7
//};
//ö����ʲô�ŵ�?
//1.���ӿɶ���ǿ,��ά����ǿ��
//2.����define���ڵ��ԡ�
//3.û��������Ⱦ��
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������
//enum Color// ö��������
//{
//	RED = 1,//���� �浽������
//	GREEN = 2,
//	BLUE = 4
//};
//int main()
//{
//	enum Color clr = GREEN;//ֻ����ö�ٳ�����ö�ٱ�����ֵ
//	clr = 5;
////	GREEN = 6; //????      ö�ٳ������ܸ�ֵ��
//	printf("%d", clr);
//	printf("%d", sizeof(enum Color));// ö�� ��Ӧ�����;������Σ�ֻ�ǰ��������г���
//	system("pause");
//}

//����
union Un
{
	char c;
	int i;
};
int main()
{
	union Un un; //�����ı������ռ䣬��������ռ�
	printf("%d\n", sizeof(un));
	un.c = 10; // int�͸���char�� �����ض�
	un.c = 129;
	printf("%d\n", un.c);
	printf("%d\n", un.i);
	system("pause");
}

//char 129  
//                  10000001 
//           100000001111111
//
//
//
//
//
//
//
//
//
//
//