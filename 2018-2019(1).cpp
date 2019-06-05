#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class Point
//{
//private:
//	int x;
//	int y;
//public:
//	Point(int a = 0, int b =0) :x(a), y(b)
//	{}
//	void show()
//	{
//		cout << "<" << x << "," << y << ">" << endl;
//	}
//};
//const double PI = 3.14159;
//class Circle :public Point
//{
//private:
//	double radius;
//public:
//	Circle(int a, int b,double r) :Point(a, b)
//	{
//		radius = r;
//	}
//	void show()
//	{
//		cout << "Centre of circle:";
//		Point::show();
//		cout << "radius:" << radius << endl;
//	}
//};
//int main()
//{
//	Point p1, p2(10, 20);
//	p1.show();
//	p2.show();
//	Circle Cirl(20, 30, 10);
//	Cirl.show();
//	system("pause");
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
//	friend ostream& operator<<(ostream&out, Vector c)
//	{
//		cout << "<" << c.x << "," << c.y << ">" << endl;
//		return out;
//	}
//	Vector operator-( Vector b)
//	{
//		return Vector(x - b.x, y - b.y);
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
//#include <iomanip>
//#include <string>
//using namespace std;
//class Time
//{
//private:
//	int hour;
//	int minute;
//	int second;
//public:
//	Time(int h = 0, int m = 0, int s = 0) :hour(h), minute(m), second(s)
//	{
//		Set_time(h, m, s);
//	}
//	void Set_time(int h, int m, int s)
//	{
//		hour = (h >= 0 && h <= 12) ? h : h % 12;
//		minute = (m >= 0 && m <= 59) ? m : m % 60;
//		second = (s >= 0 && s <= 59) ? s : s % 60;
//
//	}
//	int Get_hour()
//	{
//		return hour;
//	}
//	int Get_minute()
//	{
//		return minute;
//	}
//	int Get_second()
//	{
//		return second;
//	}
//	friend ostream& operator<<(ostream& out, Time t)
//	{
//		out << setfill('0') << setw(2) << t.Get_hour() << ":" << setfill('0') << setw(2)
//			<< t.Get_minute() << ":" << setfill('0') << setw(2) << t.Get_second() << endl;
//		return out;
//	}
//	Time &operator-(Time a)
//	{
//		Time c;
//		c.hour = this->hour - a.hour;
//		c.minute = this->minute - a.minute;
//		c.second = this->second - a.second;
//		return c;
//	}
//	Time &operator+(Time a)
//	{
//		Time c;
//		c.hour = this->hour + a.hour;
//		c.minute = this->minute + a.minute;
//		c.second = this->second + a.second;
//		return c;
//	}
//};
//class Train:public Time 
//{
//private:
//	string train_nums;
//	//string start_time;
//	//string end_time;
//public:
//	Train(string no) :train_nums(no)
//	{
//		cout << "火车号 :"<< train_nums << endl;
//	}
//	void start_time()
//	{
//
//	}
//	void end_time()
//	{
//
//	}
//}
//int main()
//
//{
//	Time t1, t2(10, 89, 61);
//	Time t3(10, 90, 62);
//	cout << t2;
//	cout << t1;
//	cout << t3 - t2;
//	system("pause");
//}