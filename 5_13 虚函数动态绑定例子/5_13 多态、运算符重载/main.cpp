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
	Point point(30, 50);
	Circle circle(120, 80, 10.0);
	point.PrintShapeName();
	point.Print();
	circle.PrintShapeName();
	circle.Print();
	Shape* arrayOfShape[2];
	arrayOfShape[0] = &point;
	arrayOfShape[1] = &circle;
	cout << "Virtual "
}