#define _CRT_SECURE_NO_WARNINGS 1 
//int * const p1 // p1 ����ָ�����
//const int * p2 // p2ָ������ 
//int const * p3 // p3ָ������ 
//1.this ָ�����ͣ� ������
//this ָ������ģ� this���Ƕ���ĵ�ַ�������ڶ����У�������ջ�У��൱���βΣ��Ż��İ汾���ڼĴ�����
//this ָ�����Ϊ����
// A a
// A*p = nullptr;
// p->Show; B
// p->print; C ��ָ����ʵı���
//A ����ͨ��
//B ����ͨ�� ���в�ͨ��
//C ��ͨ��


//D ���϶�����
#include <iostream>
using namespace std;
class Base
{
public:
	virtual void f(){
		cout << "����Base::f()" << endl;
	}
};
class Derived : public Base
{
public:
	void f()
	{
		cout << "����Derived::f()" << endl;
	}
};
int main()
{
	Derived obj;
	Base*p = &obj;
	p->f();
	system("pause");
}




