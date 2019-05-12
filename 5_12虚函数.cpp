#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
// 1题
using namespace std;
//class Base
//{
//public:
//	virtual void f() {cout << "调用Base::f()" << endl;} //虚函数
//};
//class Derived : public Base
//{
//public:
//	void f() { cout << "调用Derived::f()" << endl; }//虚函数
//};
//int main()
//{
//	Derived obj; //定义派生类对象
//	Base *p = &obj;//定义基类指针，基类指针指向派生类对象
//	p->f(); // 调用函数f()
//	system("pause");
//	return 0;
//}
//class Base
//{
//public:
//	virtual void f()
//	{
//		cout << "调用Base::f()" << endl; //虚函数
//	}
//};
//class Derived   : public Base
//{
//public:
//	void f() { cout << "调用Derived::f()函数" << endl; }
//	
//};
//int main()
//{
//	Derived obj;
//	Base*p = &obj;
//	p->f();
//	system("pause");
//}
//class Base
//{
//public:
//	virtual void show() const { cout << "调用Base::Show()" << endl; }//虚函数
//};
//class Derived : public Base
//{
//public:
//	void show() const { cout << "调用Derived::show()" << endl; }//虚函数
//};
//void Refers(const Base &obj)//基类的引用
//{
//	obj.show(); //调用show（）函数
//}
//int main()
//{
//	Base obj1;
//	Derived obj2;
//	Refers(obj1);
//	Refers(obj2);
//	system("pause");
//	return 
//}
// 第三题
//class Base
//{
//private:
//	int m; //数据成员
//public:
//	Base(int a) : m(a){} //构造函数
//	virtual void Show() const { cout << m << endl; }//虚函数
//};
////派生类
//class Derived : public Base
//{
//private:
//	int n;
//public:
//	Derived(int a, int b) :Base(a), n(a){}
//	void Show() const
//	{
//		cout << n << ",";
//		Base::Show(); // 调用基类的Show()
//	}
//};
//int main()
//{
//	Base obj1(168);
//	Derived obj2(158, 98);
//	Base *p;
//	p = &obj1;
//	p->Show();
//	p = &obj2;
//	p->Show();
//	p->Base::Show();
//	system("pause");
//}
// 第四题
//class A
//{
//public:
//	//共有函数
//	virtual void ShowB() const { cout << "基类A" << endl; }
//};
////派生类
//class B : public A
//{
//public:
//	//共有函数
//	virtual void ShowB() const{ cout << "派生类B" << endl; }
//};
//int main()
//{
//	B obj;
//	A*p = &obj;
//	p->ShowB();
//	system("pause");
//	return 0;
//}
//5 
const double PI = 3.1415926;
//形状类
class Shape
{
public:
	virtual void Show() const = 0;//纯虚函数
	static double sum;  // 静态数据成员
};
class Circle : public Shape
{
private:
	double radius; //半径
public:
	Circle(double r) :radius(r)
	{
		sum += PI *radius*radius;
	}
	void Show() const
	{
		cout << "圆形" << endl;
		cout << "半径" << radius << endl;
		cout << "面积：" << PI*radius*radius << endl;
	}
};
class Rectangle : public Shape
{
private:
	double height; // 高
	double width; // 宽
public:
	Rectangle(double h, double w) :height(h), width(w)
	{
		sum += height*width;
	}
	void Show() const
	{
		cout << "矩形：" << endl;
		cout << "高：" << height << endl;
		cout << "宽：" << width << endl;
		cout << "面积：" << sum << endl;
	}
};
double Shape::sum = 0; //为静态变量赋值
int main()
{
	char flag = 'Y';
	Shape *p;
	while (toupper(flag) == 'Y')
	{
		cout << "请输入类别（1.圆形 2.矩形）";
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1:
			double r;
			cout << "请输入半径：";
			cin >> r;
			p = new Circle(r);
			p->Show();
			delete p;
			break;
		case 2:
			double h, w;
			cout << "shu ru gao:";
			cin >> h;
			cout << "shu ru kuan:";
			cin >> w;
			p = new Rectangle(h, w);
			p->Show();
			delete p;
			break;
		}
	}
	//cout << Shape::sum << endl;
	system("pause");
}