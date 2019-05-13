#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "shape.h"
using namespace std;
class Point : public Shape
{
	int x = 0;
	int y = 0;
public:
	Point(int = 0, int = 0);// 构造函数
	void SetPoint(int a, int b); //设置坐标
	int GETX()const
	{
		return x;
	}
	int GETY() const
	{
		return y;
	}
	virtual void PrintShapeName() const
	{
		cout << "Point:";
	}
	virtual void Print() const;//输出点的坐标
}
#endif