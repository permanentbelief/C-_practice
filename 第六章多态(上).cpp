#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//class Base
//{
//public:
//	virtual void f(){ cout << "调用Base::f()" << endl; }//虚函数
//};
////派生类
//class Derived : public Base
//{
//public:
//	void f(){ cout << "调用Derived::f()" << endl; }
//};
//int main()
//{
//	Derived obj;//定义派生类对象
//	Base*p = &obj;//基类指针
//	p->f();
//	system("pause");
//	return 0;
//}
//class Base
//{
//public:
//	virtual void Show() const { cout << "调用Base::Show()" << endl; }
//};
////派生类
//class Derived : public Base
//{
//public:
//	void Show()const{ cout << "调用Derived::Show()" << endl; }
//};
//void Refers(const Base &obj)//基类引用
//{
//	obj.Show();//调用函数Show()
//}
//int main()
//{
//	Base obj1;
//	Derived obj2;
//	Refers(obj1);
//	Refers(obj2);
//	system("pause");
//	return 0;
//}
//class Base
//{
//private:
//	int m;// 数据成员
//public:
//	Base(int a) : m(a){}//构造函数
//	virtual void Show() const { cout << m << endl; }//虚函数
//};
////派生类
//class Derived : public Base
//{
//private:
//	int n;     //数据成员
//public:
//	Derived(int a, int b) :Base(a), n(a){}//构造函数
//	void Show() const  //虚函数
//	{
//		cout << n << ","; //显示n及","
//		Base::Show(); // 调用基类的Show()
//	}
//};
//int main()
//{
//	Base obj1(168);
//	Derived obj2(158, 98);
//	Base*p;
//	p = &obj1;
//	p->Show();
//	p = &obj2;
//	p->Show();
//	p->Base::Show();
//	system("pause");
//}
//class A
//{
//public:
//	virtual void ShowB() const { cout << "基类A" << endl; }
//};
////衍生类
//class B : public A
//{
//public:
//	void ShowB() const{ cout << "派生类B" << endl; }
//};
//int main()
//{
//	B obj;
//	A* p = &obj;
//	p->ShowB();
//	system("pause");
//}
//6. 练习动态绑定
//class Base
//{
//public:
//	virtual void display() const{ cout << "Base::display()" << endl; }
//};
//class FirstB : public Base
//{
//public:
//	void display() { cout << "FirstB::display()" << endl; }
//
//};
//class SecondB : public FirstB
//{
//	void display(){ cout << "SecondB::display()" << endl; }
//};
//int main()
//{
//	SecondB obj;
//	FirstB *p = &obj;
//	p-> display();
//	system("pause");
//}
//声明一个Shape（形状）基类，它有两个派生类：
//Circle（圆）和Square（正方形），要求利用多态
//性的概念，分别以虚函数的形式完成对圆和正方形
//的周长及面积的计算。
//要求：Shape类的数据成员包括中心点的坐标
//，Circle类和Square类初始值分别给出：圆的圆心和半径；
//正方形的中心和一个顶点。
class Shape
{
public:
	Shape(){}
	~Shape(){}
	//纯虚函数
	virtual float GetArea() const = 0;
};
class Circle : public Shape
{
public:
	Circle(float sz) :r(sz)
	{}
	~Circle(){}
	float GetArea() const;
private:
	float r;
};
float Circle::GetArea() const
{
	const float pi = 3.1415926f;
	return pi*r*r;
}
class Square : public Shape
{
public:
	Square(float x1, float x2, float y1, float y2)
	{
		cx = x1;
		cy = y1;
		px = x2;
		py = y2;
	}
	~Square(){}
	float GetArea() const;
private:
	//中心点
	float cx;
	float cy;
	//顶点
	float px;
	float py;
};
//正方形面积=对角线乘机的一半
float Square::GetArea()const
{
	return powf(2 * sqrt((cx - px)*(cx - px) + (cy - py)*(cy - py)), 2) / 2;
}
int main()
{
	Circle c(10.0);
	Square s(10.0, 10.0, 4.0, 4.0);
	cout << "圆的面积："<<c.GetArea();
	 cout << "正方形的面积："<<s.GetArea();
	system("pause");
	return 0;
}