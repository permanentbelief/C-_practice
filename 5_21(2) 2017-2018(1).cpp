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
//	//���ĳ����������
//	
//	//���ز������������
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
////�������캯����ʵ��
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
//8.���һ���ܹ���ʾ�����յ�Date�࣬����Ҫ��֤�·���1 - 12֮�䣬
//����Ϊ1������1 - 31֮�䣬����Ϊ1����������հ���xxxx - xx - xx��
//��ʽ���ο����������£�
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
// ��������
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
//9�����һ������Fraction������ʵ�ַ����ļӡ������˷����㣬�����ز��������operator << ()��
//���������ʽΪb / a�������ĳ˷�����Ϊ��(b / a)*(d / c) = (bd / ac)������Ҫ������������
//�д��������������������������������Ȼ��ֱ�������������ļӡ���������������
//�ο���������
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
//10������һ��Student��ģ�壬����ѧ�š�������������Ӣ�������ơ��ֵܷ���Ϣ��ѧ�š������͸�������Ϊ�ɱ����ͣ�
//�ܷ� = ��ѧ + Ӣ�� + ������ơ����������д���һ��ѧ��Ϊint�ͣ�����Ϊstring�ͣ�������Ϊint�͵�ѧ������
//�������ѧ����Ϣ���ٴ���һ��ѧ�ź���������string�ͣ�����������double�͵�ѧ�����󣬲������ѧ����Ϣ��
//�ο���������
