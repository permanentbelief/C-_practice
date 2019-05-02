#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//
//class CClassA {
//public:
//	virtual  void fun_a() {
//		cout << "fun:cclassA,这是类A里面的函数" << endl;
//	}
//};
//
//class CClassB :public CClassA {
//public:
//	 void fun_a() {
//		cout << "fun:cclassB,这是类B里面的函数" << endl;
//	}
//};
//
//int main()
//{
//	CClassA objA, *pobjA;
//	CClassB objB;
//	pobjA = &objA;
//	pobjA->fun_a();
//	pobjA = &objB;//父类指针指向对象B,下面这个函数就是B里面的对象!!!
//	pobjA->fun_a();
//	
//	system("pause");
//	return 0;
//}
//class Base
//{
//public:
//	Base() {
//		printf("base 父类构造\n");
//
//	};
//	virtual ~Base() {                   //1th在此行加不加virtual有一定区别，而对于一般成员函数，基类中有虚函数，则子类中对应的成员函数不一定声明为虚函数，因为子类继承了父类 
//		printf("Base 父类析构\n");
//	};
//	void fun() {                        //2th
//		printf("父类base-fun\n");
//	};
//};
//class son :public Base
//{
//public:
//	son() {
//		printf("son 子类构造\n");
//	};
//	~son() {                                        //**
//		printf("son 子类析构\n");
//	}
//	void fun() {                         //3th
//		printf("子类son-fun\n");
//	};
//};
//
//
//int main()
//{
//	Base *p; //父类指针
//
//	son *pobj = new son; //走到这一步,会先调用父类构造,然后再调用子类构造,new 出子类对象指针，从堆空间中分配出来的，一般创建对象是在栈空间里面
//
//	p = pobj;   //父类指针指向子类对象            
//	p->fun();          //注意,这个例子里面函数不是虚函数,所以调用的函数皆为父类里面的函数!!!!!
//	delete pobj; //通过父类指针释放子类对象
//	system("pause");
//
//	return 0;
//}
class Base
{
public:
	Base() {
		printf("base 父类构造\n");

	};
	~Base() {                   //1th在此行加不加virtual有一定区别，而对于一般成员函数，基类中有虚函数，则子类中对应的成员函数不一定声明为虚函数，因为子类继承了父类 
		printf("Base 父类析构\n");
	};
	void fun() {                        //2th
		printf("父类base-fun\n");
	};
};
class son :public Base
{
public:
	son() {
		printf("son 子类构造\n");
	};
	~son() {                                        //**
		printf("son 子类析构\n");
	}
	void fun() {                         //3th
		printf("子类son-fun\n");
	};
};


int main()
{
	Base *p; //父类指针

	Base *pobj = new son; //走到这一步,会先调用父类构造,然后再调用子类构造,new 出子类对象指针，从堆空间中分配出来的，一般创建对象是在栈空间里面

	p = pobj;   //父类指针指向子类对象            
	p->fun();          //注意,这个例子里面函数不是虚函数,所以调用的函数皆为父类里面的函数!!!!!
	delete pobj; //这里没有释放子类对象,就是因为这个没有虚析构!
	system("pause");
	return 0;
}
