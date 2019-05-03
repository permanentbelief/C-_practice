#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//class Base
//{
//public:
//	virtual void f(){ cout << "����Base::f()" << endl; }//�麯��
//};
////������
//class Derived : public Base
//{
//public:
//	void f(){ cout << "����Derived::f()" << endl; }
//};
//int main()
//{
//	Derived obj;//�������������
//	Base*p = &obj;//����ָ��
//	p->f();
//	system("pause");
//	return 0;
//}
//class Base
//{
//public:
//	virtual void Show() const { cout << "����Base::Show()" << endl; }
//};
////������
//class Derived : public Base
//{
//public:
//	void Show()const{ cout << "����Derived::Show()" << endl; }
//};
//void Refers(const Base &obj)//��������
//{
//	obj.Show();//���ú���Show()
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
//	int m;// ���ݳ�Ա
//public:
//	Base(int a) : m(a){}//���캯��
//	virtual void Show() const { cout << m << endl; }//�麯��
//};
////������
//class Derived : public Base
//{
//private:
//	int n;     //���ݳ�Ա
//public:
//	Derived(int a, int b) :Base(a), n(a){}//���캯��
//	void Show() const  //�麯��
//	{
//		cout << n << ","; //��ʾn��","
//		Base::Show(); // ���û����Show()
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
//	virtual void ShowB() const { cout << "����A" << endl; }
//};
////������
//class B : public A
//{
//public:
//	void ShowB() const{ cout << "������B" << endl; }
//};
//int main()
//{
//	B obj;
//	A* p = &obj;
//	p->ShowB();
//	system("pause");
//}
//6. ��ϰ��̬��
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
//����һ��Shape����״�����࣬�������������ࣺ
//Circle��Բ����Square�������Σ���Ҫ�����ö�̬
//�Եĸ���ֱ����麯������ʽ��ɶ�Բ��������
//���ܳ�������ļ��㡣
//Ҫ��Shape������ݳ�Ա�������ĵ������
//��Circle���Square���ʼֵ�ֱ������Բ��Բ�ĺͰ뾶��
//�����ε����ĺ�һ�����㡣
class Shape
{
public:
	Shape(){}
	~Shape(){}
	//���麯��
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
	//���ĵ�
	float cx;
	float cy;
	//����
	float px;
	float py;
};
//���������=�Խ��߳˻���һ��
float Square::GetArea()const
{
	return powf(2 * sqrt((cx - px)*(cx - px) + (cy - py)*(cy - py)), 2) / 2;
}
int main()
{
	Circle c(10.0);
	Square s(10.0, 10.0, 4.0, 4.0);
	cout << "Բ�������"<<c.GetArea();
	 cout << "�����ε������"<<s.GetArea();
	system("pause");
	return 0;
}