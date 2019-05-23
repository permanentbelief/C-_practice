#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//#include <string.h>
//using namespace std;
//class String
//{
//private:
//	char * str;
//	int length;
//public:
//	//添加无参构造函数、深拷贝构造函数
//	//添加字符串输出showString()函数
//	String()//无参构造函数
//	{
//		length = 0;
//		str = NULL;
//	}
//	String(const char *p)
//	{
//		length = strlen(p);
//		str = new char[length + 1];
//		strcpy(str, p);
//	}
//	//~String()
//	//{
//	//	if (str != NULL)
//	//	{
//	//		delete[]str;
//	//		str = NULL; length = 0;
//	//	}
//	//}
//	String(String &r)
//	{
//		length = r.length;
//		if (length != 0)
//		{
//			str = new char[length + 1];
//			strcpy(str, r.str);
//		}
//	}
//	~String()
//	{
//		if (str != NULL)
//		{
//			delete[] str;
//			str = NULL;
//			length = 0;
//		}
//	}
//	/*void showString()
//	{
//		cout << str << endl;
//	}*/
//	void showString()
//	{
//		for (int i = 0; i < this->length; i++)
//		{
//			cout << str[i];
//		}
//		cout << endl;
//	}
//};
//int main(int argc, char** argv)
//{
//	String s1("abcdefg"), s2("def"), s3;
//	cout << "s1=";	s1.showString();
//	cout << "s2=";	s2.showString();
//	s3 = s1;
//	cout << "s3=";	s3.showString();
//	String s4(s2);
//	cout << "s4=";	s4.showString();
//	system("pause");
//	return 0;
//}
//
//添加头文件及Time类的定义和实现
//#include <iostream>
//using namespace std;
//class Time
//{
//private:
//	int hour;
//	int min;
//	int sec;
//public:
//	Time(int h = 0, int m = 0, int s = 0)
//		: hour(h), min(m), sec(s)
//	{
//		hour = (h >= 0 && h < 24 ? h : h%24);
//		min =  (m >= 0 && m < 60 ? m : m%60);
//		sec =  (s >= 0 && s < 60 ? s : s%60);
//
//	}
//	
//	friend ostream&operator<<(ostream&output, Time& t)
//	{
//		if (t.hour <= 12)
//			output << "AM" << " ";
//		else
//			output << "PM" << " ";
//		output << t.hour << ":" << t.min << ":" << t.sec;
//		return output;
//	}
//
//	
//};
//int main() {
//	Time t1(8, 20, 34), t2(16, 12, 55);
//	cout << t1 << endl;
//	cout << t2 << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <string>
//#include <iomanip>
//using namespace std;
//class Person
//{
//private:
//	string name, sex, id, birthday;
//public:
//	Person(string name, string sex, string id, string birth)
//	{
//		this->name = name; this->sex = sex;
//		this->id = id; this->birthday = birth;
//	}
//	void display()
//	{
//		cout << setw(12) << "Name: " << name << endl;
//		cout << setw(12) << "Sex: " << sex << endl;
//		cout << setw(12) << "Id: " << id << endl;
//		cout << setw(12) << "birthday: " << birthday << endl;
//	}
//};
////定义并实现派生类Student
//class Student : public Person
//{
//private:
//	string tel;
//	string major;
//	string school;
//public:
//	Student(string name, string sex, string id, string birth, string tel, string major, string school)
//	:Person(name, sex, id, birth)
//	{
//		this->tel = tel;
//		this->major = major;
//		this->school = school;
//	}
//	void display()
//	{
//		Person::display();
//		cout << setw(12) << "Tel: " << tel << endl;
//		cout << setw(12) << "Major: " << major << endl;
//		cout << setw(12) << "School: " << school << endl;
//	}
//};
//int main() 
//{
//	Student st1("张三", "男", "60214127447142", "1993-04-23", "51743324210", "网络工程", "西安财经学院信息学院");
//	st1.display();
//	system("pause");
//}
//#include <iostream>
//using namespace std;
//class Shape
//{
//public:
//	virtual double area()const = 0;
//	virtual void   show() = 0;
//};
////根据Shape类定义一个Point派生类
////根据Point类定义一个Circle派生类
//class Point : public Shape
//{
//private:
//	int x;
//	int y;
//public:
//	Point();
//	
//}
//int main() {
//	Circle c1(100, 200, 50);
//	Point p1(20, 30);
//	Shape * p;
//	p = &c1;
//	p->show();
//	cout << "area:" << p->area() << endl;
//	p = &p1;
//	p->show();
//	cout << "area:" << p->area() << endl;
//}
//10. 设计一个复数类Complex，并重载复数的乘和输出运算符：即operator *()和operator << ()，
//复数的输出格式为(a + bi)，复数的乘法规则为：(a + bi)*(c + di) = (ac - bd) + (ad + bc)i。
//在主函数中创建两个复数对象，并输出两个复数，然后输出两个复数的乘积。
#include <iostream>
using namespace std;
class Complex
{
private:
	int 
	int ;

};