#define _CRT_SECURE_NO_WARNINGS 1 
//
//#include <iostream>
//using namespace std;
//class Shape
//{
//public:
//	Shape(){};
//	~Shape(){};
//	virtual double GetArea() = 0;
//};
//class Circle : public Shape
//{
//private:
//	double r;
//public:
//	Circle(double radius) :r(radius){}
//	~Circle(){  };
//	double GetArea()
//	{
//		return r*r*3.14;
//	}
//};
//class Rectangle : public Shape
//{
//private:
//	double x = 0;
//	double y = 0;
//public:
//	Rectangle(double len, double width) :x(len), y(width){};
//	~Rectangle(){};
//	double GetArea()
//	{
//		return x*y;
//	}
//	virtual double Getx()
//	{
//		return x;
//	}
//	virtual double Gety()
//	{
//		return y;
//	}
//	
//};
//class Square : public Rectangle
//{
//public:
//	Square(double len) :Rectangle(len, len)
//	{};
//	~Square(){};
//};
//int main()
//{
//	Shape *sp;
//	    sp = new Circle(10);
//	    cout << "The area of the Circle is " << sp->GetArea() << endl;
//	    delete sp;
//	
//		sp = new Rectangle(4, 6);
//	    cout << "The area of the Rectangle is " << sp->GetArea() << endl;
//	    delete sp;
//	
//		sp = new Square(5);
//	    cout << "The area of the Square is " << sp->GetArea() << endl;
//	    delete sp;
//		system("pause");
//		return 0;
//	
//}



