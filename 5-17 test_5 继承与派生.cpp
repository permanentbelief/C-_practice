#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

//class A
//{
//public:
//	A(){ cout << "����A" << endl; }// ���캯��
//	~A() { cout << "����A" << endl; }//��������
//};
//class B : public A
//{
//public:
//	B() { cout << "����B" << endl; }
//	~B() { cout << "����B" << endl; }
//};
//class C : public B
//{
//public:
//	C(){ cout << "����C" << endl; }
//	~C(){ cout << "����C" << endl; }
//};
//int main()
//{
//	C obj;
//	//���캯�� ˳�� ������������
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
//		A::Show(); //���û���A�ĳ�Ա����Show
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
//		Base::Show(); //���û���Base�ĳ�Ա����
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

//5. person�� ������teacher��cadre��
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
//		cout << "���֣�" << " name "  <<  endl;
//		cout << "���䣺" << " age  "  <<  endl;
//		cout << "�Ա�" << " sex  "  <<  endl;
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