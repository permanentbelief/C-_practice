#include "point.h"
using namespace std;
class Circle : public Point
{
	double radius;
public:
	Circle(int x = 0, int y = 0, double r = 0.0);
	void SetRadius(double r);
	double GetRadius() const;
	virtual double Area() const;//�������a
	virtual void Print() const;
	virtual void PrintfShapeName() const
	{
		cout << "Circle:";
	}
};
