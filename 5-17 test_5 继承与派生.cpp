#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

//class A
//{
//public:
//	A(){ cout << "构造A" << endl; }// 构造函数
//	~A() { cout << "析构A" << endl; }//析构函数
//};
//class B : public A
//{
//public:
//	B() { cout << "构造B" << endl; }
//	~B() { cout << "析构B" << endl; }
//};
//class C : public B
//{
//public:
//	C(){ cout << "构造C" << endl; }
//	~C(){ cout << "析构C" << endl; }
//};
//int main()
//{
//	C obj;
//	//构造函数 顺序 析构函数逆序
//	system("pause");
//	return 0;
//}

//class A
//{
//protected:
//	int a;
//public:
//	A(int x) :a(x){}
//	void Show() const { cout << a << endl; }
//};
//class B
//{
//protected:
//	int b;
//public:
//	B(int x) :b(x) {}
//	void Show() const { cout << b << endl; }
//};
//class C : public A, public B
//{
//public:
//	C(int x, int y) :A(x), B(y){}
//	void Show() const
//	{
//		cout << a << "," << b << endl;
//	}
//};
//int main()
//{
//	C obj(5, 18);
//	obj.Show(); //5 ,18
//	//obj.A::Show();// 5
//	//obj.B::Show();//18
//	obj.B::Show();
//	obj.A::Show();
//	system("pause");
//}

//class A
//{
//private:
//	int a; 
//public:
//	A(int x) : a(x){}
//	void Show() const
//	{
//		cout << "a:" << a << endl;
//	}
//};
//class B : public A
//{
//protected:
//	int b;
//public:
//	B(int x, int y) : A(x), b(y){}
//	void  Show() const
//	{
//		A::Show(); //调用基类A的成员函数Show
//		cout << "b:" << b << endl;
//	}
//};
//int main()
//{
//	A obj1(4);
//	obj1.Show();
//	B obj(5, 18);
//	obj.Show();
//	obj.A::Show();
//	system("pause");
//}
//class Base
//{
//private:
//	int m;
//public:
//	Base(int a) : m(a){}
//	Base(const Base &copy) :Base(copy){}
//	void Show() const
//	{
//		cout << "m:" << m << endl;
//	}
//};
//class Derived : private Base
//{
//protected:
//	int n;
//public:
//	Derived(int a, int b) : Base(a)
//	{
//		n = b;
//	}
//	void Show() const
//	{
//		Base::Show(); //调用基类Base的成员函数
//		cout << "n:" << n << endl;
//	}
//};
//int main()
//{
//	Derived obj(10, 18);
//	obj.Show();
//
//	system("pause");
//}

//5. person人 派生出teacher和cadre类
//class Person
//{
//private:
//	string name;
//	int age;
//	char sex;
//public:
//	Person(string abc, int a, char s)
//		: name(abc), age(a), sex(s){}
//	void display()
//	{
//		cout << "名字：" << " name "  <<  endl;
//		cout << "年龄：" << " age  "  <<  endl;
//		cout << "性别：" << " sex  "  <<  endl;
//	}
//};
//class Teacher : public Person
//{
//private:
//	string title;
//public:
//	Teacher(string abc, int a, char s, string bcd)
//		:Person(abc, a, s), title(bcd){}
//	void display()
//};
//int main()
//{
//	
//}