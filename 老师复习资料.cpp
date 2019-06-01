#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class Complex
//{
//private:
//	int real;
//	int imag;
//public:
//	Complex(int r, int i);
//	friend Complex operator+(Complex&a, Complex&b);
//	void operator=(Complex &a);
//	void show();
//};
//Complex::Complex(int r, int i) 
//{
//	this->real = r;
//	this->imag = i;
//}
//Complex operator+(Complex &a, Complex&b)
//{
//	return Complex(a.real + b.real, a.imag + b.imag);
//}
//void Complex::operator=(Complex&a)
//{
//	imag = a.imag;
//	real = a.real;
//}
//void Complex::show()
//{
//	cout << "(" << real << "," << imag << "  )";
//	cout << endl;
//}
//int main()
//{
//	Complex c1(12, 5), c2(8, 6);
//	Complex c3 = c1 + c2;
//	cout << "c1=";
//	c1.show();
//	cout << "c2=";
//	c2.show();
//	cout << "c1+c2=";
//	c3.show();
//	system("pause");
//}
//#include <iostream>
//using namespace std;
//class Time
//{
//private:
//	int hour, minute, second;
//public:
//	Time(int h, int m, int s);
//	Time operator-(Time & t);
//	friend ostream& operator<< (ostream& out, Time& t);
//};
//Time::Time(int h = 0, int m  = 0,int s = 0)
//{
//	hour = (h>0 && h<24) ? h : 0;
//	minute = (m>0 && m<60) ? m : 0;
//	second = (s>0 && s<60) ? s : 0;
//}
//Time Time:: operator-(Time & t)
//{
//	Time temp;
//	int flag = 0;
//	temp.second = second - t.second;
//	temp.second >= 0 ? flag = 0 : (temp.second += 60, flag = 1);
//	temp.minute = minute - t.minute - flag;
//	temp.minute>0 ? flag = 0 : (temp.minute += 60, flag = 1);
//	temp.hour = hour - t.hour - flag;
//	(temp.hour > 0) ? ( temp.hour= temp.hour % 12) : ( temp.hour =(0-temp.hour % 12));
//		return temp;
//}
//ostream& operator<< (ostream& out, Time& t)
//{
//	out << t.hour << ":" << t.minute << ":" << t.second ;
//		return out;
//}
//int main(){
//	Time t1(3, 15, 6), t2(27, -20, 45), t3(12, 25, 20), t4(18, 45, 40), temp;
//	cout << "t1: " << t1 << "\tt2: " << t2 << "\nt3: " << t3 << "\tt4: " << t4 << endl;
//	cout << "temp=" << temp << endl;
//	temp = t1 - t2;
//	cout << "t1-t2=" << temp << endl;
//		temp = t3 - t4;
//	cout << "t3-t4=" << temp << endl;
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
//	Date(int year = 2000 , int month  = 1 ,int day = 1)
//	{
//		this->year = year; this->month = month; this->day = day;
//	}
//	friend ostream& operator<<(ostream& out , Date a)
//	{
//		out << a.year << "Äê" << a.month << "ÔÂ" << a.day << "ÈÕ";
//		return out;
//	}
//};
//int main() {
//	Date a1(2018, 12, 10), a2;
//	cout << a1 << endl;
//	cout << a2 << endl;
//	system("pause");
//	return 0;
//}
