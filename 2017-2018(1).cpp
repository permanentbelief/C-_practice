#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class Shape
//{
//public:
//	virtual double Area() = 0;  
//		virtual double Perimeter() = 0;
//	virtual void show() = 0;
//};
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int a, int b)
//	{		x = a; y = b;		}
//	void show();
//	{			cout << "(" << x << "," << y << ")" << endl;		}
//};
//class Rectangle :public Shape, public Point
//{
//private:
//	int length, height;
//public:
//	double Area();
//	double Perimeter();
//	Rectangle(int a = 0, int b = 0, int l = 1, int h = 1);
//		void Rectangle::show(); 
//};
//Rectangle::Rectangle(int a, int b, int l, int h) :Point(a, b)
//{
//	length = l; height = h;
//}
//void Rectangle::show()
//{
//	cout << "The Rectangle's left top point is:";
//	Point::show();
//	cout << "Length=" << length << "\tHeight=" << height << endl;
//}
//double Rectangle::Area()
//{ return length*height; }
//double Rectangle::Perimeter()
//{ return 2 * (length + height); }
//int main() {
//	Rectangle r1(20, 20), r2(30, 30, 45, 60);
//	cout << "The first Rectangle:" << endl;
//	r1.show();
//	cout << "周长是：" << r1.Perimeter() << ",面积是：" << r1.Area() << endl;
//	cout << "===================================================" << endl;
//	cout << "The second Rectangle:" << endl;
//	r2.show();
//	cout << "周长是：" << r2.Perimeter() << "\t面积是：" << r2.Area() << endl;
//	return 0;
//}
#include <iostream>
#include <iomanip>
using namespace std;
//class Base
//{
//private:
//	int a;
//public:
//	Base() { a = 0; }
//	Base(int a){ this->a = a; }
//	void show()
//	{
//		cout << setw(5) << "a =" << a;
//	}
//};
//class Dreve : public Base
//{
//private:
//	int b, c;
//public:
//	Dreve(int, int, int);
//	void show();
//};
//Dreve::Dreve(int a, int b, int c) :Base(a)
//{
//	this->b = b;
//	this->c = c;
//}
//void Dreve::show()
//{
//	Base::show();
//	cout << setw(5) << "b=" << b;
//	cout << setw(5) << "c=" << c;
//}

//
//int main()
//{
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
//}
//#include <cmath>
//class Line
//{
//private:
//	int x1, y1, x2, y2;
//	double length;
//public:
//	Line(Line &);
//	Line(int = 0, int = 0, int = 1, int = 1);
//	friend ostream& operator<<(ostream&out, Line line)
//	{
//		out << "start point :" << "<" << line.x1 << "," << line.y1 << ">"
//			<< "\t" << "end point:" << "<" << line.x2 << "," << line.y2 << ">"
//			<< "\t"<<"length:"<< line.length <<endl;
//		return out;
//	}
//
//};
//Line::Line(int x1, int y1, int x2, int y2)
//{
//		 this->x1 = x1;
//		 this->x2 = x2;
//		 this->y1 = y1;
//		 this->y2 = y2;
//		 length = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
//}
//Line::Line(Line &a)
//{
//	x1 = a.x1;
//	x2 = a.x2;
//	y1 = a.y1;
//	y2 = a.y2;
//	length = a.length;
//}
//int main() {
//	Line l1, l2(30, 40);
//	cout << "l1:" << l1;
//	cout << "l2:" << l2;
//	Line l3(l2);
//	cout << "l3:" << l3;
//	Line l4(20, 20, 20, 40);
//	cout << "l4:" << l4;
//	system("pause");
//	return 0;
//}
//#include <algorithm>     
//#include <iterator> 
//#include <stdexcept>
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	cout << "Vector v1 contains element: ";
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << "";
//	}
//	cout << "\First element of v1: " << v1.front() << endl;
//	cout << "Last element of v1:" << v1.back() << endl;
//	cout << "\nv1's size is:" << v1.size() << endl;
//	v1.push_back(9);
//	v1.insert(v1.begin() + 2, 0);
//	v1.erase(v1.begin());
//	ostream_iterator< int > output(cout, " ");
//	copy(v1.begin(), v1.end(), output);
//	cout << "\nv1's size is:" << v1.size() << endl;
//	system("pause");
//}
//class Date
//{
//	int year;
//	int month;
//	int day;
//public:
//	Date(int y = 2018, int m = 1 , int d = 1)
//
//	{
//		year = y;
//		month = m >= 0 && m <= 12 ? m : 1;
//		day = d >= 1 && d <= 31 ? d : 1;
//	}
//	void show()
//	{
//		cout << year << "---" << month << "---" << day <<  endl;
//	}
//};
//int main()
//{
//	Date t;
//	Date t1(3, 14, 34);
//
//	t.show();
//	t1.show();
//	system("pause");
//}
//9．设计一个分数Fraction，可以实现分数的加、减、乘法运算，
//并重载插入运算符operator << ()，分数输出格式为b / a，分数
//的乘法规则为：(b / a)*(d / c) = (bd / ac)，不需要化简。在
//主函数中创建两个分数对象，先输出这两个分数，然后分别输出两
//个分数的加、减、乘运算结果。
//参考输出结果：
#include <iostream>
using namespace std;
//class Fraction
//{
//private:
//	int tor;
//	int demon;
//public:
//	Fraction(int t = 1, int d = 1)
//		:tor(t), demon(d)
//	{
//		if (demon == 0)
//		{
//			cerr << "no valid ;" << endl;
//			exit(-1);
//		}
//	}
//	friend ostream& operator <<(ostream&out, Fraction a)
//	{
//		out << a.tor << "/" << a.demon << endl;
//		return out;
//	}
//	Fraction operator+(Fraction& a)
//	{
//		return Fraction(a.tor*demon + a.demon*tor, a.demon*demon);
//	}
//	Fraction operator-(Fraction& a)
//	{
//		return Fraction(a.tor*demon - a.demon*tor, a.demon*demon);
//	}
//	Fraction operator*(Fraction& a)
//	{
//		return Fraction(a.tor*tor, a.demon*demon);
//	}
//};
//int main()
//{
//	Fraction a(2, 3), b(3,2), c;
//	c = a*b;
//	cout << c;
//	system("pause");
//}
/*10．定义一个Student类模板，包含学号、姓名、高数、英语、程序设计、总分等信息，
学号、姓名和各分数都为可变类型，总分 = 数学 + 英语 + 程序设计。在主函数中创
建一个学号为int型，姓名为string型，各分数为int型的学生对象，并输该学生信息，
再创建一个学号和姓名都是string型，各分数都是double型的学生对象，并输出该学生
信息。
参考输出结果*/
//#include <vector>
//#include <string>
//template <class T1, class T2 ,class T3>
//class Student
//{
//private:
//	T1 no;
//	T2 name;
//	T3 math;
//	T3 english;
//	T3 program;
//	T3 total;
//public:
//	Student(T1 no, T2 n, T3 m, T3 e, T3 p)
//		:no(no), name(n), math(m), english(e), program(p)
//	{}
//	T3 get_total()
//	{
//		return  math + english + program;
//	}
//	void show()
//	{
//		cout << "姓名：" << name << endl;
//		cout << "学号：" << no << endl;
//		cout << "数学：" << math << endl;
//		cout << "英语：" << english << endl;
//		cout << "程序：" << program << endl;
//		cout << "总分：" << get_total() << endl;
//		
//
//	}
//};
//int main()
//{
//	Student<string, string, double> t1("3424525", "wangfang", 45, 54, 42);
//	Student<int, string, double> t2(3424525, "wangfang", 45, 54, 42);
//
//	t1.show();
//	t2.show();
//
//	system("pause");
//}