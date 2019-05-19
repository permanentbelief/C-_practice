class Shape
{
public:
	virtual double Area() const
	{
		return 0;
	}
	virtual void PrintShapeName() const = 0;
	virtual void Print() const = 0;
};