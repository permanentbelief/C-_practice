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
//	//����޲ι��캯����������캯��
//	//����ַ������showString()����
//	String()//�޲ι��캯��
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
//���ͷ�ļ���Time��Ķ����ʵ��
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
////���岢ʵ��������Student
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
//	Student st1("����", "��", "60214127447142", "1993-04-23", "51743324210", "���繤��", "�����ƾ�ѧԺ��ϢѧԺ");
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
////����Shape�ඨ��һ��Point������
////����Point�ඨ��һ��Circle������
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
//10. ���һ��������Complex�������ظ����ĳ˺�������������operator *()��operator << ()��
//�����������ʽΪ(a + bi)�������ĳ˷�����Ϊ��(a + bi)*(c + di) = (ac - bd) + (ad + bc)i��
//���������д��������������󣬲��������������Ȼ��������������ĳ˻���
#include <iostream>
using namespace std;
class Complex
{
private:
	int 
	int ;

};