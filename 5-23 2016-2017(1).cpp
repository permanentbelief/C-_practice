#define _CRT_SECURE_NO_WARNINGS 1 
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
//		delete[]a;
//	}
//	void display()
//	{
//		cout << *a << endl;
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
//{ 
//	b = j; c = k;
//}
//
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
//	friend	int age(Date , Date );
//};
//Date::Date(int y =2000, int m = 1, int d = 1)
//{	year = y; month = m; day = d; }
//int age(Date a, Date b)
//{
//	Date c;
//	c.year = a.year - b.year;
//	return c.year;
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
//		Fraction c3;
//		c3.demon = this->demon * f.demon;
//		c3.tor = this->demon*f.tor + f.demon*this->tor;
//		return c3;
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
//		n = 0; str = "";
//	}
//	Set(string s)
//	{ 
//		n = s.length();
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
//			for (int i = 0;  i < n - 1; i++)
//				cout << str[i] << ",";
//			cout << str[n - 1] << "}" << endl;
//		}
//	}
//};
//int main(int argc, char** argv) 
//{
//	Set s1("abcdefg");
//	cout << "s1:";
//	s1.showSet() ;
//	system("pause");
//	return 0;
//}