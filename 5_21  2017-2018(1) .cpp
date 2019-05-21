#define _CRT_SECURE_NO_WARNINGS 1 
//第一题 填空
//#include <iostream>
//using namespace std;
//class Point{
//private:
//	int x, y;
//public:
//	Point(int x = 0, int y = 0)
//	{
//		this->x = x, this->y = y;
//	}
//	virtual void area()//virtual定义为虚函数
//	{
//		cout << "The Point's area is:0" << endl;
//	}
//};
//const double PI = 3.14159;
//class Circle :public Point
//{
//private:
//	double radius;
//public:
//	Circle(int m, int n, double r) :Point(m,n)
//	{
//		radius = r;
//	}
//	void area()
//	{
//		cout << "The Circle's area is:" << PI*radius*radius << endl;
//	}
//};
//int main(){
//	Point*p;
//		Point p1(10, 20);
//	Circle Cir1(20, 30, 5);
//	p = &p1;
//	p->area();
//	p = &Cir1;
//	p->area();
//	Point &cr = Cir1;
//	cr.area();
//	system("pause");
//	return 0;
//}
// 第二题 填空
//#include <iostream>
//using namespace std;
//class Base
//{
//private:
//	int a;
//public:
//	Base()	{ a = 0; }
//	Base(int a){
//		this ->a = a;
//	}
//	void show()
//	{
//		cout << "a=" << a;
//	}
//};
//class Dreve : public Base
//{
//private:
//	int b, c;
//public:
//	Dreve(int, int, int);
//	void show()
//	{
//		Base::show();
//			cout << "\tb=" << b << "\t" << "c=" << c << endl;
//	}
//};
//Dreve::Dreve(int i, int j, int k) :Base(i)
//{
//	b = j; c = k;
//}
//int main() {
//	Base a1, a2(20);
//	cout << "a1:";
//	a1.show();
//	cout << endl;
//	cout << "a2:";
//	a2.show();
//	cout << endl;
//	Dreve b1(5, 3, 4);
//	cout << "b1:";
//	b1.show();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Complex
//{
//private:
//	int real;
//	int image;
//public:
//	Complex(int r = 0, int i = 0)
//	{
//		real = r;
//		image = i;
//	}
//	friend Complex operator +(Complex &a, Complex &b)
//	{
//		return Complex(a.real + b.real, a.image + b.image);
//	}
//	void operator=(Complex &a)
//	{
//		real = a.real;
//		image = a.image;
//	}
//	void show()
//	{
//		cout << "(" << real << "+" << image << ")" << endl;
//		//cout << endl;
//	}
//};
//int main()
//{
//	Complex c1(12, 5), c2(8, 6);
//	Complex c3 = c1 + c2;
//	cout << "c1=";
//	c1.show();
//	cout << "c2=";
//	c2.show();
//	cout << "c1+c2:";
//	c3.show();
//	system("pause");
//}
//#include <iostream>
//#include <iomanip>
//using namespace std;
//class Base
//{
//private:
//	int a;
//public:
//	Base()	{ a = 0; }
//	Base(int a)	{ this->a = a; }
//	void show()
//	{
//		cout << setw(5) << " a= " << a;
//	}
//};
//class Dreve :public Base
//{
//private:
//	int b, c;
//public:
//	Dreve(int, int, int);
//	void show();
//};
//Dreve::Dreve(int x, int y, int z) :Base(x)
//{
//	b = y;
//	c = z;
//}
//void Dreve::show()
//{
//	Base::show();
//	cout << setw(5) << "b=" << b << setw(5) << "c=" << c << endl;
//
//}
//int main() {
//	Base a1, a2(20);
//	cout << "a1:";
//	a1.show();
//	cout << endl;
//	cout << "a2:";
//	a2.show();
//	cout << endl;
//	Dreve b1(5, 3, 4);
//	cout << "b1:";
//	b1.show();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Shape
//{
//public:
//	virtual double   Area() = 0;
//	virtual double Perimeter() = 0;
//	virtual void show() = 0;
//};
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int a, int b)
//	{
//		x = a; y = b;
//	}
//	void show()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//};
//class Rectangle :public Shape, public Point
//{
//private:
//	int length, height;
//public:
//	double Area();
//	double Perimeter();
//	//请在此处添加缺失函数声明
//	Rectangle(int a = 0, int b = 0, int l = 1, int h = 1);
//	void Rectangle::show();
//};
//
////请在此处添加成员函数的实现
//Rectangle::Rectangle(int a, int b, int l, int h) :Point(a, b)
//{
//	height = h;
//	length = l;
//}
//double Rectangle:: Area()
//{
//	return length*height;
//}
//double Rectangle::Perimeter()
//{
//	return 2 * (length + height);
//}
//void Rectangle::show()
//{
//	cout << "The Rectangle's left top point is:";
//	Point::show();
//	cout << "Length=" << length << "\tHeight=" << height << endl;
//}
//
//int main() {
//	Rectangle r1(20, 20), r2(30, 30, 45, 60);
//	cout << "The first Rectangle:" << endl;
//	r1.show();
//	cout << "周长是：" << r1.Perimeter() << ",面积是：" << r1.Area() << endl;
//	cout << "===================================================" << endl;
//	cout << "The second Rectangle:" << endl;
//	r2.show();
//	cout << "周长是：" << r2.Perimeter() << "\t面积是：" << r2.Area() << endl;
//	system("pause");
//	return 0;
//}
