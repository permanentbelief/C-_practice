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
	void SetRadius(double r);   //���ð뾶
	double GetRadius() const;   //ȡ�뾶
	virtual double Area() const;  //�������a
	virtual void Print() const;    //���Բ������Ͱ뾶
	virtual void PrintShapeName() const
	{
		cout << "Circle: ";
	}
};
#endif