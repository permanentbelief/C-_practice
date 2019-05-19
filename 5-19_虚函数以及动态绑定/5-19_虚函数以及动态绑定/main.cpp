#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include "shape.h"
#include "point.h"
#include "circle.h"
using namespace std;
void virtualViaPointer(const Shape *);
void virtualViaReference(const Shape &);

int main()
{
	//创建point、circle对象
	Point point(30, 50);
	Circle circle(120, 80, 10.0);
	//输出point、circle、rectangle对象信息
	point.PrintShapeName();
	point.Print();
	cout << endl;
	circle.PrintShapeName();
	circle.Print();
	//定义基类对象指针
	Shape *arrayOfShapes[2];
	arrayOfShapes[0] = &point;
	arrayOfShapes[1] = &circle;
	//通过基类对象指针访问派生类对象
	cout << "Virtual function calls made off " << "base-class pointers\n";
	for (int i = 0; i < 2; i++)
	{
		virtualViaPointer(arrayOfShapes[i]);
	}

	cout << "Virtual function calls made off " << "base-class references\n";

	for (int j = 0; j < 2; j++)
	{
		virtualViaReference(*arrayOfShapes[j]);
	}

	return 0;
}

//通过基类对象指针访问虚函数实现动态绑定
void virtualViaPointer(const Shape *baseClassPtr)
{
	baseClassPtr->PrintShapeName();
	baseClassPtr->Print();
	cout << "Area = " << baseClassPtr->Area() << endl;
}
//通过基类对象引用访问虚函数实现动态绑定
void virtualViaReference(const Shape &baseClassRef)
{
	baseClassRef.PrintShapeName();
	baseClassRef.Print();
	cout << "Area = " << baseClassRef.Area() << endl;
}
