#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
// 1��
using namespace std;
//class Base
//{
//public:
//	virtual void f() {cout << "����Base::f()" << endl;} //�麯��
//};
//class Derived : public Base
//{
//public:
//	void f() { cout << "����Derived::f()" << endl; }//�麯��
//};
//int main()
//{
//	Derived obj; //�������������
//	Base *p = &obj;//�������ָ�룬����ָ��ָ�����������
//	p->f(); // ���ú���f()
//	system("pause");
//	return 0;
//}
//class Base
//{
//public:
//	virtual void f()
//	{
//		cout << "����Base::f()" << endl; //�麯��
//	}
//};
//class Derived   : public Base
//{
//public:
//	void f() { cout << "����Derived::f()����" << endl; }
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
//	virtual void show() const { cout << "����Base::Show()" << endl; }//�麯��
//};
//class Derived : public Base
//{
//public:
//	void show() const { cout << "����Derived::show()" << endl; }//�麯��
//};
//void Refers(const Base &obj)//���������
//{
//	obj.show(); //����show��������
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
// ������
//class Base
//{
//private:
//	int m; //���ݳ�Ա
//public:
//	Base(int a) : m(a){} //���캯��
//	virtual void Show() const { cout << m << endl; }//�麯��
//};
////������
//class Derived : public Base
//{
//private:
//	int n;
//public:
//	Derived(int a, int b) :Base(a), n(a){}
//	void Show() const
//	{
//		cout << n << ",";
//		Base::Show(); // ���û����Show()
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
// ������
//class A
//{
//public:
//	//���к���
//	virtual void ShowB() const { cout << "����A" << endl; }
//};
////������
//class B : public A
//{
//public:
//	//���к���
//	virtual void ShowB() const{ cout << "������B" << endl; }
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
//��״��
class Shape
{
public:
	virtual void Show() const = 0;//���麯��
	static double sum;  // ��̬���ݳ�Ա
};
class Circle : public Shape
{
private:
	double radius; //�뾶
public:
	Circle(double r) :radius(r)
	{
		sum += PI *radius*radius;
	}
	void Show() const
	{
		cout << "Բ��" << endl;
		cout << "�뾶" << radius << endl;
		cout << "�����" << PI*radius*radius << endl;
	}
};
class Rectangle : public Shape
{
private:
	double height; // ��
	double width; // ��
public:
	Rectangle(double h, double w) :height(h), width(w)
	{
		sum += height*width;
	}
	void Show() const
	{
		cout << "���Σ�" << endl;
		cout << "�ߣ�" << height << endl;
		cout << "��" << width << endl;
		cout << "�����" << sum << endl;
	}
};
double Shape::sum = 0; //Ϊ��̬������ֵ
int main()
{
	char flag = 'Y';
	Shape *p;
	while (toupper(flag) == 'Y')
	{
		cout << "���������1.Բ�� 2.���Σ�";
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1:
			double r;
			cout << "������뾶��";
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