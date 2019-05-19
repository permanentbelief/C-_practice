#define _CRT_SECURE_NO_WARNINGS 1 
#include "circle.h"
Circle::Circle(int a, int b, double r) : Point(a, b), radius(r)
{  }

void Circle::SetRadius(double r)
{
	radius = (r >= 0 ? r : 0);
}

double Circle::GetRadius() const
{
	return radius;
}

double Circle::Area() const
{
	return 3.14159 * radius * radius;
}

void Circle::Print() const
{
	cout << "Center = ";
	Point::Print();
	cout << "; Radius = " << radius << endl;
}