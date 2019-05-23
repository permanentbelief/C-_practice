//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class Point{
//private:
//	int x, y;
//public:
//	Point(int x = 0, int y = 0)
//	{
//		  this->x = x; this->y = y;
//}
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
//	Circle(int x, int y, double r):Point(x,y)
//	{
//		  radius = r;
//}
//	void show()
//	{
//		cout << "Centre of circle:";
//		Point::show();
//			cout << "radius:" << radius << endl;
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
//	Vector operator-(Vector& a)
//	{
//		Vector c3;
//		c3.x = this->x - a.x;
//		c3.y = this->y - a.y;
//		return c3;
//	}
//	friend ostream&operator<<(ostream&out, Vector &obj)
//	{
//		cout << "<" << obj.x << "," << obj.y << ">" << endl;
//		return out;
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
//class Time
//{
//	int HH;
//	int MM;
//	int SS;
//public:
//	Time(int hh =0, int mm =0,int ss=0)
//		:HH(hh), MM(mm), SS(ss)
//	{}
//	void SetTime(int hh, int mm, int ss)
//	{
//		HH =(( hh > 0 && hh < 12) ? hh : 0);
//		MM =((mm > 0 && mm < 60 )? mm : 0);
//		SS = ((ss > 0 && ss < 60 )? ss : 0);
//
//	}
//	/*int get_H()
//	{
//		return HH;
//	}
//	int get_M()
//	{
//		return MM;
//	}
//	int get_S()
//	{
//		return SS;
//	}*/
//	friend ostream&operator <<(ostream&output, Time&a)
//	{
//		output << a.HH << ":" << a.MM << ":" << a.SS<< endl;
//		return output;
//	}
//	Time operator+(Time&a)
//	{
//		Time c;
//		c.HH = this->HH + c.HH;
//		c.MM = this->MM + c.MM;
//		c.SS = this->SS + c.SS;
//		return c;
//
//	}
//};
//int main()
//{
//	Time obj( 1, 3, 46);
//	obj.SetTime(1, 3, 46);
//	cout << obj;
//	Time obj1(11, 3, 4);
//	obj1.SetTime(11, 3, 4);
//	cout << obj1;
//	Time c3;
//	c3 = obj1 + obj;
//	cout << c3;
//	
//	system("pause");
//}