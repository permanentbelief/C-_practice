#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "point.h"
using namespace std;

class Circle : public Point
{
	double radius;
public:
	Circle(int x = 0, int y = 0, double r = 0.0);
	void SetRadius(double r);   //设置半径
	double GetRadius() const;   //取半径
	virtual double Area() const;  //计算面积a
	virtual void Print() const;    //输出圆心坐标和半径
	virtual void PrintShapeName() const
	{
		cout << "Circle: ";
	}
};
#endif