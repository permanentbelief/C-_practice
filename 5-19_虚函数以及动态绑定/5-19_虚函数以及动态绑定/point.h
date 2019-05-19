#include <iostream>
#include <iostream>
#include "shape.h"
using namespace std;
class Point : public Shape
{
	int x, y;       //点的x和y坐标
public:
	Point(int = 0, int = 0);      // 构造函数
	void SetPoint(int a, int b);      // 设置坐标
	int GetX() const	// 取x坐标
	{
		return x;
	}
	int GetY() const	// 取y坐标
	{
		return y;
	}
	virtual void PrintShapeName() const
	{
		cout << "Point: ";
	}
	virtual void Print() const;	//输出点的坐标
};