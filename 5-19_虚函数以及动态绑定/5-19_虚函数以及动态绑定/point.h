#include <iostream>
#include <iostream>
#include "shape.h"
using namespace std;
class Point : public Shape
{
	int x, y;       //���x��y����
public:
	Point(int = 0, int = 0);      // ���캯��
	void SetPoint(int a, int b);      // ��������
	int GetX() const	// ȡx����
	{
		return x;
	}
	int GetY() const	// ȡy����
	{
		return y;
	}
	virtual void PrintShapeName() const
	{
		cout << "Point: ";
	}
	virtual void Print() const;	//����������
};