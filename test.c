#define _CRT_SECURE_NO_WARNINGS 1 
//枚举
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


//struct 里是成员变量   任意变量 ,每一行都是一个表达式  以分号结束
// enum   成员常量  整形 枚举默认值从0 开始,也可以给任意整形常量

//红黑树(数据结构) 枚举
//const int RED = 0;
//const int BLACK = 1;
//enum Color 
//{
//	RED,
//	BLACK
//};
//
//enum Color1 //颜色
//{
//	BLUE = 4
//};
//enum Color2
//{
//	RED = 5,
//	GREEN = 6,
//	BLACK = 7
//};
//枚举有什么优点?
//1.增加可读性强,可维护性强。
//2.比起define便于调试。
//3.没有命名污染。
//4.便于调试
//5.使用方便，一次可以定义多个常量
//enum Color// 枚举类名字
//{
//	RED = 1,//常量 存到常量区
//	GREEN = 2,
//	BLUE = 4
//};
//int main()
//{
//	enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值
//	clr = 5;
////	GREEN = 6; //????      枚举常量不能赋值。
//	printf("%d", clr);
//	printf("%d", sizeof(enum Color));// 枚举 对应的类型就是整形，只是把数据罗列出来
//	system("pause");
//}

//联合
union Un
{
	char c;
	int i;
};
int main()
{
	union Un un; //以最大的变量开空间，共用这个空间
	printf("%d\n", sizeof(un));
	un.c = 10; // int型赋给char型 发生截断
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