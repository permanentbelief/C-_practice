#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class Point{
//private:
//	int x, y;
//public:
//	Point(int x = 0,int y = 0 )
//	{
//		  this->x = x; this->y = y;
//	}
//	void show()
//	{
//		cout << "<" << x << "," <<  y << ">" << endl;
//	}
//};
//const double PI = 3.14159;
//class Circle :public Point
//{
//private:
//	double radius;
//public:
//	Circle(int x, int y, double r)
//		:Point(x,y)
//	{
//		  radius = r;
//}
//	void show()
//	{
//		cout << "Centre of circle:";
//		Point::show();
//		cout << "radius:" << radius << endl;
//	}
//};
//int main(){
//	Point p1, p2(10, 20);
//	p1.show();
//	p2.show();
//	Circle Cir1(20, 30, 10);
//	Cir1.show();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Vector
//{
//private:
//	int x, y;
//public:
//	Vector(int a = 0, int b = 0)
//	{
//		x = a;
//		y = b;
//	}
//	//添加Vector类的重载减运算符函数
//	//添加重载插入运算符函数
//	friend Vector operator-(Vector c ,Vector b)
//	{
//		Vector a;
//		a.x = c.x - b.x;
//		a.y = c.y - b.y;
//		return a;
//	}
//	friend ostream&operator<<(ostream& output, Vector c)
//	{
//		output << "<" << c.x << "," << c.y << ">" << endl;
//		return output;
//	}
//};
//int main() {
//	Vector v1, v2(12, 3), v3(5, 6);
//	v1 = v2 - v3;
//	cout << "v2=" << v2;
//	cout << "v3=" << v3;
//	cout << "v2-v3=" << v1;
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class A
//{
//private:
//	int *a;
//public:
//	A(int aa = 0)
//	{
//		a = new int(aa);
//	}
//	~A()
//	{
//		delete [] a;
//	}
//	void display()
//	{
//		cout ;
//	}
//};
//int main()
//{
//	A a1;
//	A a2(20);
//	a1.display();
//	a2.display();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class A
//{
//private:
//	int a;
//public:
//	A()	{ a = 0; }
//	A(int aa)	{ a = aa; }
//	void print()
//	{
//		cout << a << ",";
//	}
//	int geta()
//	{
//		return a;
//	}
//};
//class B :public A
//{
//private:
//	int b, c;
//public:
//	B(int, int, int);
//	void print()
//	{
//		A::print();
//		cout << b << "," << c << ",";
//	}
//	int getb()	{ return b; }
//	int getc()	{ return c; }
//};
//B::B(int i, int j, int k) :A(i)
//{ b = j; c = k; }
//int main() {
//	A a1;
//	A a2(20);
//	a1.print();
//	cout << a2.geta() << endl;
//	B b2(5, 3, 4);
//	b2.print();
//	cout << b2.getb() << b2.getc() << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Date
//{
//private:
//	int year, month, day;
//public:
//	Date(int, int, int);
//	void show()
//	{
//		cout << year << "-" << month << "-" << day << endl;
//	}
//	friend	int age(Date &, Date &);
//};
//Date::Date(int y = 2000, int m = 1, int d = 1)
//{	year = y; month = m; day = d; }
//int age(Date &a, Date& b)
//{
//	return (b.year-a.year);
//}
//int main() 
//{
//	Date d1, birth(1997, 8, 23), now(2017, 1, 8);
//	d1.show();
//	cout << "出生日期：";
//	birth.show();
//	cout << "现在日期：";
//	now.show();
//	cout << "年龄是：" << age(now, birth) << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class  Fraction
//{
//private:
//	int tor;
//	int demon;
//public:
//	Fraction(int tor = 0, int demon = 1)
//	{
//		if (demon != 0)
//		{
//			this->tor = tor; this->demon = demon;
//		}
//		else
//			cout << "This is an invalid number!" << endl;;
//	}
//	void show()
//	{
//		cout << tor << "/" << demon << endl;
//	}
//	Fraction operator+(Fraction &f)
//	{
//		return Fraction((this->demon*f.tor+this->tor*f.demon),(this->demon*f.demon));
//	}
//};
//int main() {
//	Fraction f1(3, 5), f2(2, 7), f3;
//	cout << "f1=";
//	f1.show();
//	cout << "f2=";
//	f2.show();
//	f3 = f1 + f2;
//	cout << "f1+f2=";
//	f3.show();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class Set
//{
//private:
//	int n;
//	string str;
//public:
//	Set()
//	{
//		n = 0; str = " ";
//	}
//	Set(string s)
//	{ n = s.length();
//	if (n != 0)
//	{
//		str = s;
//	}
//	}
//	void showSet() const
//	{
//		if (n>0)
//		{
//			cout << "{";
//			for (int i = 0; i<n - 1; i++)
//				cout << str[i] << ",";
//			cout << str[n - 1] << "}" << endl;
//		}
//	}
//};
//int main(int argc, char** argv) {
//	Set s1( "abcdefg" );
//	cout << "s1:";
//	s1.showSet();
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <string.h>
using namespace std;
class String
{
private:
	char * str;
	int length;
public:
	String()
	{
		length = 0;
		str = NULL;
	}
	String(String &r)
	{
		length = r.length;
		if (length != 0)
		{
			str = new char[length + 1];
			strcpy(str, r.str);
		}
	}
	//字符串输出showString()函数
	void showString()
	{
		cout << str << endl;
	}
	String(const char *p)
	{
		length = strlen(p);
		str = new char[length + 1];
		strcpy(str, p);
	}
	~String()
	{
		if (str != NULL)
		{
			delete[]str;
			str = NULL; length = 0;
		}
	}
};

int main(int argc, char** argv)
{
	String s1("abcdefg"), s2("def"), s3;
	cout << "s1=";	s1.showString();
	cout << "s2=";	s2.showString();
	s3 = s1;
	cout << "s3=";	s3.showString();
	String s4(s2);
	cout << "s4=";	s4.showString();
	system("pause");
	return 0;
}