#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//
//class CClassA {
//public:
//	virtual  void fun_a() {
//		cout << "fun:cclassA,������A����ĺ���" << endl;
//	}
//};
//
//class CClassB :public CClassA {
//public:
//	 void fun_a() {
//		cout << "fun:cclassB,������B����ĺ���" << endl;
//	}
//};
//
//int main()
//{
//	CClassA objA, *pobjA;
//	CClassB objB;
//	pobjA = &objA;
//	pobjA->fun_a();
//	pobjA = &objB;//����ָ��ָ�����B,���������������B����Ķ���!!!
//	pobjA->fun_a();
//	
//	system("pause");
//	return 0;
//}
//class Base
//{
//public:
//	Base() {
//		printf("base ���๹��\n");
//
//	};
//	virtual ~Base() {                   //1th�ڴ��мӲ���virtual��һ�����𣬶�����һ���Ա���������������麯�����������ж�Ӧ�ĳ�Ա������һ������Ϊ�麯������Ϊ����̳��˸��� 
//		printf("Base ��������\n");
//	};
//	void fun() {                        //2th
//		printf("����base-fun\n");
//	};
//};
//class son :public Base
//{
//public:
//	son() {
//		printf("son ���๹��\n");
//	};
//	~son() {                                        //**
//		printf("son ��������\n");
//	}
//	void fun() {                         //3th
//		printf("����son-fun\n");
//	};
//};
//
//
//int main()
//{
//	Base *p; //����ָ��
//
//	son *pobj = new son; //�ߵ���һ��,���ȵ��ø��๹��,Ȼ���ٵ������๹��,new ���������ָ�룬�Ӷѿռ��з�������ģ�һ�㴴����������ջ�ռ�����
//
//	p = pobj;   //����ָ��ָ���������            
//	p->fun();          //ע��,����������溯�������麯��,���Ե��õĺ�����Ϊ��������ĺ���!!!!!
//	delete pobj; //ͨ������ָ���ͷ��������
//	system("pause");
//
//	return 0;
//}
class Base
{
public:
	Base() {
		printf("base ���๹��\n");

	};
	~Base() {                   //1th�ڴ��мӲ���virtual��һ�����𣬶�����һ���Ա���������������麯�����������ж�Ӧ�ĳ�Ա������һ������Ϊ�麯������Ϊ����̳��˸��� 
		printf("Base ��������\n");
	};
	void fun() {                        //2th
		printf("����base-fun\n");
	};
};
class son :public Base
{
public:
	son() {
		printf("son ���๹��\n");
	};
	~son() {                                        //**
		printf("son ��������\n");
	}
	void fun() {                         //3th
		printf("����son-fun\n");
	};
};


int main()
{
	Base *p; //����ָ��

	Base *pobj = new son; //�ߵ���һ��,���ȵ��ø��๹��,Ȼ���ٵ������๹��,new ���������ָ�룬�Ӷѿռ��з�������ģ�һ�㴴����������ջ�ռ�����

	p = pobj;   //����ָ��ָ���������            
	p->fun();          //ע��,����������溯�������麯��,���Ե��õĺ�����Ϊ��������ĺ���!!!!!
	delete pobj; //����û���ͷ��������,������Ϊ���û��������!
	system("pause");
	return 0;
}
