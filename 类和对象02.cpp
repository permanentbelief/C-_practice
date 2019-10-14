#define _CRT_SECURE_NO_WARNINGS 1 
//int * const p1 // p1 修饰指针变量
//const int * p2 // p2指的内容 
//int const * p3 // p3指的内容 
//1.this 指针类型： 类类型
//this 指针存在哪？ this就是对象的地址，不存在对象中，存在在栈中，相当于形参，优化的版本放在寄存器中
//this 指针可以为空吗？
// A a
// A*p = nullptr;
// p->Show; B
// p->print; C 空指针访问的崩溃
//A 编译通过
//B 编译通过 运行不通过
//C 都通过


//D 以上都不对
#include <iostream>
using namespace std;
class Base
{
public:
	virtual void f(){
		cout << "调用Base::f()" << endl;
	}
};
class Derived : public Base
{
public:
	void f()
	{
		cout << "调用Derived::f()" << endl;
	}
};
int main()
{
	Derived obj;
	Base*p = &obj;
	p->f();
	system("pause");
}




