#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
public:
	virtual double Area() const
	{
		return 0.0;
	}
	//纯虚函数，在派生类重载
	virtual void PrintShapeName() const = 0;
	virtual void Print() const = 0;
}
#endif