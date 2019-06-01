#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class teacher;
//class student
//{
//	const char *name;
//public:
//	student(const char *s)
//	{
//		name = s;
//	}
//	friend void print(student &, teacher &);
//};
//class teacher
//{
//	const char *name;
//public:
//	teacher(const char *s)
//	{
//		name = s;
//	}
//	// ERROR  **********found**********
//	friend void print(student &, teacher &);
//};
//// ERROR  **********found**********
//void print(student& a, teacher& b)
//{
//	cout << "the student is " << a.name << endl;
//	cout << "the teacher is " << b.name << endl;
//}
//int main()
//{
//	student s("Li Hu");
//	teacher t("Wan Ping");
//	// ERROR  **********found**********
//	print(s, t);
//}
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//class student
//{
//	char name[10];
//	int deg;
//public:
//	student(const char na[], int d)
//	{
//		strcpy(name, na);
//		//**********found**********
//		deg = d;
//
//	}
//	char *getname() { return name; }
//	//**********found**********
//	friend int compare(student s1, student s2)
//
//	{
//		if (s1.deg > s2.deg) return 1;
//		else if (s1.deg == s2.deg) return 0;
//		else return -1;
//	}
//};
//int main()
//{
//	student st[] = { student("王华", 78), student("李明", 92), student("张伟", 62), student("孙强", 88) };
//	int min = 0; // 存放最低分的位置
//	int max = 0; // 存放最高分的位置
//	for (int i = 1; i < 4; i++)
//	{
//		if (compare(st[max], st[i]) == -1)
//			//**********found**********
//			max=i;
//		else if (compare(st[min], st[i]) == 1)
//			//**********found**********
//			min = i ;
//	}
//	cout << "输出结果:" << endl;
//	cout << "  最高分者:" << st[max].getname() << endl;
//	cout << "  最低分者:" << st[min].getname() << endl;
//}
#include <iostream>
#include <cmath>
using namespace std;
class Line
{
private:
	int x1, y1, x2, y2;
	double length;
public:
	Line(Line &);
	Line(int x1 = 0, int y1 = 0, int x2 = 1, int y2 = 1);

	//加某函数的声明
	//重载插入运算符函数
	friend ostream& operator <<(ostream& out, Line&a)
	{
		out << "(" << a.x1 << "," << a.y1 << ")" << "---" << "(" << a.x2 << "," << a.y2 << ")" << endl;
	};
	Line::Line(int x1 = 0, int y1 = 0, int x2 = 1, int y2 = 1)
	{
		this->x1 = x1; this->y1 = y1;
		this->x2 = x2; this->y2 = y2;
		length = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	}
	//拷贝构造函数的实现
	Line::Line(Line &a)
	{
		this->x1 = a.x1;
		this->x2 = a.x2;
		this->y1 = a.y1;
		this->y2 = a.y2;

	}
	int main()
	{

		Line l1, l2(30, 40);
		cout << "l1:" << l1;
		cout << "l2:" << l2;
		Line l3(l2);
		cout << "l3:" << l3;
		Line l4(20, 20, 50, 40);
		cout << "l4:" << l4;
		system("pause");
		return 0;
	}
}
}；