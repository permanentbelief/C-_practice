#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include "point.h" 
using namespace std;
Point::Point(int a, int b) : x(a), y(b)
{    }

void Point::SetPoint(int a, int b)
{
	x = a; y = b;
}

void Point::Print() const
{
	cout << '[' << x << ", " << y << ']';
}