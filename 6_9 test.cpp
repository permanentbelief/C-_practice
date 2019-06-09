#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
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
//Date:: Date (int y = 2018 ,int m = 1 ,int d = 1)
//{	year = y; month = m; day = d; }
//
//int age(Date &a, Date& b)
//{
//	return a.year - b.year;
//}
//int main() {
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
//class Fraction
//{
//private:
//	int tor;
//	int demon;
//public:
//	Fraction(int tor = 0, int demon = 1)
//	{
//		if (demon != 0)
//		{
//			this->tor = tor;
//			this->demon = demon;
//		}
//		else
//		{
//			cout << "This is an invalid number!" << endl;
//		}
//	}
//	void show()
//	{
//		cout << tor << "/" << demon << endl;
//	}
//	Fraction operator +(Fraction &f)
//	{
//		return Fraction(tor*f.demon + f.tor*demon, demon * f.demon);
//	}
//};
//int main()
//{
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
//		n = 0; str = "";
//	}
//	Set(string s)
//	{ 
//		n = s.length();
//		cout << n << endl;
//	if (n != 0)
//	{
//		str = s;
//	}
//	}
//	void showSet()const
//	{
//		if (n>0)
//		{
//			cout << "{";
//			for (int i = 0; i< n; i++)
//				cout << str[i] << ",";
//			cout << "}" << endl;
//		}
//	}
//};
//int main(int argc, char** argv) {
//	Set s1("abcdefg");
//	cout << "s1:";
//	s1.showSet();
//	system("pause");
//	return 0;
//}
//class Time
//{
//private:
//	int h;
//	int m;
//	int s;
//public:
//	Time(int h = 0, int m = 0, int s = 0)
//	{
//		this->h = h;
//		this->m = m;
//		this->s = s;
//	}
//	friend ostream &operator<<(ostream &out, Time & t1)
//	{
//		if (t1.h < 12)
//			out << "AM";
//		else
//			out << "PM";
//		out <<t1.h << ":" << t1.m << ":" << t1.s;
//		return out;
//
//	}
//};
//int main()
//{
//	Time t1(8, 20, 34);
//	Time t2(16, 12, 55);
//	cout << t1 << endl;
//	cout << t2 << endl;
//	system("pause");
//}
//#include <iostream>
//#include <string>
//using namespace std;
//class Account
//{
//private:
//	string no, name;
//	double balance;
//public:
//	Account(string no, string name, double balance = 0)
//	{
//		this->no = no;
//		this->name = name;
//		if (balance < 0)
//			this->balance = 0;
//		else
//			this->balance = balance;
//	}
//	void credit(double c)
//	{
//		balance += c;
//	}
//	void debit(double d)
//	{
//		if (d > balance)
//			cerr << "Debit amount exceeded  account balance";
//		else  balance -= d;
//	}
//	void show()
//	{
//		cout << "AccountNo:" << no << endl;
//		cout << "AccountName:" << name << endl;
//		cout << "Balance:" << balance << endl << endl;
//	}
//};
//int main()
//{
//	Account a("20130046", "吴大雄", 200);
//	a.show();
//	a.credit(1000);
//	a.show();
//	a.debit(800);
//	a.show();
//	a.debit(500);
//	a.show();
//	system("pause");
//}
//#include<iostream>
//using namespace std;
//void strcopy(char *string1, char *string2)
//{
//	for (char *temp = string1; *temp != '\0'; *temp = (*++string1) )
//	{
//		*string2 = *temp;
//		string2++;
//	}
//	*string2 = '\0';
//}
//
//int main()
//{
//	char str1[] = { "Tomato Studio" };
//	char *str2;
//	int size = 14;
//	str2 = new char[size];
//	cout << "STR1的内容是" << str1 << endl;
//	strcopy(str1, str2);
//	cout << "String Copied..." << endl;
//	cout << "STR2的内容是" << str2 << endl;
//	delete[] str2;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include<cstring>
//using namespace std;
//class A
//{
//public:
//	char name[80];
//	A(const char *n) { strcpy(name, n); }
//};
//
//class B :public A
//{
//public:
//	B(const char*n) : A(n)  {}
//	void PrintName() { cout << "name:" << name << endl; };
//};
//int main()
//{
//	B b1("Ling Li");
//	b1.PrintName();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class CPolygon {
//protected:
//int width, height;
//  public:
//	  void set_values(int a, int b)
//	  {
//		  width = a;
//		  height = b;
//	  }
//	  virtual int  area() = 0;
//  };
//
//  class CRectangle : public CPolygon {
//  public:
//	  int area()
//	  {
//			return (width * height);
//  }
//  };
//  class CTriangle : public CPolygon
//  {
//  public:
//	  int area()
//	  {
//			return (width * height / 2);
//  }
//  };
//  int main()
//  {
//	  CRectangle rect;
//	  CTriangle trgl;
//	  CPolygon * ppoly1 = &rect;
//	  CPolygon * ppoly2 = &trgl;
//	  ppoly1->set_values(4, 5);
//	  ppoly2->set_values(6, 5);
//	  cout << ppoly1->area() << endl;
//	  cout << ppoly2->area() << endl;
//	  system("pause");
//	  return 0;
//  }
//