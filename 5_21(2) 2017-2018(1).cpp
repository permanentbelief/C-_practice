#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//#include <iostream>
//#include <cmath>
//using namespace std;
//class Line
//{
//private:
//	int x1, y1, x2, y2;
//	double length;
//public:
//	Line(int = 0, int b = 0, int  = 1, int  = 1);
//	Line(Line &);
//	//添加某函数的声明
//	
//	//重载插入运算符函数
//	friend ostream &operator<<( ostream & output, Line & p)
//	{
//		output << "start Point:(" << p.x1 << "," << p.y1 << ")\tend Point:(" << p.x2
//			<< "," << p.y2 << ")\tlength:" << p.length << endl;
//		return output;
//	}
//};
//Line::Line(int x1, int y1, int x2, int y2 )
//{
//	this->x1 = x1; this->y1 = y1;
//	this->x2 = x2; this->y2 = y2;
//	length = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
//}
////拷贝构造函数的实现
//Line::Line(Line&copy)
//{
//	x1 = copy.x1;
//	x2 = copy.x2;
//	y1 = copy.y1;
//	y2 = copy.y2;
//	length = copy.length;
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
// 
//8.设计一个能够表示年月日的Date类，并且要保证月份在1 - 12之间，
//否则为1，日在1 - 31之间，否则为1，输出年月日按“xxxx - xx - xx”
//格式。参考输出结果如下：
//#include <iostream>
//using namespace std;
//class Date
//{
//private:
//	int year, month, day;
//public:
//	Date(int y = 2018, int m = 1, int d = 1)
//	{
//		year = y;
//		month = (m>12 || m<1) ? 1 : m;
//		day = (d>31 || d<1) ? 1 : d;
//	}
//	void show()
//	{ cout << year << "-" << month << "-" << day << endl; }
//};
//
//int main() {
//	Date d1, d2(2017, 15, 23);
//	cout << "d1:";
//	d1.show();
//	cout << "d2:";
//	d2.show();
//	system("pause");
//	return 0;
//}
// 方法二：
//#include <iostream>
//using namespace std;
//class Date
//{
//private:
//	int year;
//	int month;
//	int day;
//public:
//	Date(int y, int m, int d)
//		:year(y), month(m), day(d){}
//	void Setyear(int y)
//	{
//		year = y;
//		
//	}
//	void  Setmonth(int m)
//	{
//		month = ((m >= 1 && m <= 12) ? m : 1);
//	
//	}
//	void  Setday(int d)
//	{
//		day = ((d >= 1 && d <= 31) ? d : 1);
//	}
//	int Getyear()
//	{
//		return year;
//	}
//	int Getmonth()
//	{
//		return month;
//	}
//	int Getday()
//	{
//		return day;
//	}
//	friend ostream&operator <<(ostream&output, Date&p)
//	{
//		output << p.Getyear() << "-" << p.Getmonth() << "-" << p.Getday() << endl;
//		return output;
//	}
//
//};
//int main()
//{
//	Date r1(10, 21, 90);
//	cout << r1;
//	system("pause");
//}
//9．设计一个分数Fraction，可以实现分数的加、减、乘法运算，并重载插入运算符operator << ()，
//分数输出格式为b / a，分数的乘法规则为：(b / a)*(d / c) = (bd / ac)，不需要化简。在主函数
//中创建两个分数对象，先输出这两个分数，然后分别输出两个分数的加、减、乘运算结果。
//参考输出结果：
//class Fraction
//{
//private:
//	int a;
//	int b;
//public:
//	Fraction(int x1 = 0, int x2 = 1)
//   {
//		this->a = x1;
//		this->b = x2;
//	} 
//	friend ostream&operator<<(ostream&out, Fraction & p)
//	{
//		out << p.a << "/" << p.b << endl;
//		return out;
//	}
//	//Fraction operator+(Fraction &p)
//	//{ return Fraction(a*p.b + p.a*b, b*p.b); }
//	Fraction operator-(Fraction &p)
//	{ return Fraction(a*p.b - p.a*b, a*p.b); }
//	Fraction operator*(Fraction &p)
//	{ return Fraction(a*p.a, b*p.b); }
//	friend  Fraction operator+(Fraction&x1, Fraction&x2)
//	{
//		Fraction p;
//		p.a = x1.a + x2.a;
//		p.b = x1.b + x2.b;
//		return p;
//	}
//};
//int main()
//{
//	Fraction a(10, 20);
//	Fraction b(20, 10);
//	Fraction c;
//	c = a + b;
//	cout << a;
//	cout << b;
//	cout << "a+b:" << c << endl;
//	system("pause");
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
//	
//	{
//		this->tor = tor;
//		this->demon = demon;
//	}
//	/*{ if (demon != 0)
//	{
//		this->tor = tor; this->demon = demon;
//	}
//	else
//		cout << "This is an invalid number!" << endl;
//	}*/
//	Fraction operator+(Fraction &a)
//	{ return Fraction(tor*a.demon + a.tor*demon, demon*a.demon); }
//	Fraction operator-(Fraction &a)
//	{ return Fraction(tor*a.demon - a.tor*demon, demon*a.demon); }
//	Fraction operator*(Fraction &a)
//	{ return Fraction(tor*a.tor, demon*a.demon); }
//	friend ostream& operator<<(ostream& out, Fraction& a)
//	{
//		out << a.tor << "/" << a.demon;
//		return out;
//	}
//};
//
//int main() {
//	
//	Fraction f1(3, 5), f2(2, 7), f3;
//	cout << "f1=" << f1 << "\tf2=" << f2 << endl;
//	f3 = f1 + f2;	 cout << "f1+f2=" << f3 << endl;
//	f3 = f1 - f2;  cout << "f1-f2=" << f3 << endl;
//	f3 = f1*f2;  cout << "f1xf2=" << f3 << endl;
//	system("pause");
//	return 0;
//}
//10．定义一个Student类模板，包含学号、姓名、高数、英语、程序设计、总分等信息，学号、姓名和各分数都为可变类型，
//总分 = 数学 + 英语 + 程序设计。在主函数中创建一个学号为int型，姓名为string型，各分数为int型的学生对象
//，并输该学生信息，再创建一个学号和姓名都是string型，各分数都是double型的学生对象，并输出该学生信息。
//参考输出结果：
