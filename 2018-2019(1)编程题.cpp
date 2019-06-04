#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//10. 设计一个复数类Complex，并重载复数的乘和输出运算符：
//即operator *()和operator << ()，复数的输出格式为(a + bi)，
//复数的乘法规则为：(a + bi)*(c + di) = (ac - bd) + (ad + bc)i。
//在主函数中创建两个复数对象，并输出两个复数，然后输出两个复数的乘积。
//#include <iostream>
//using namespace std;
//class Complex
//{
//private:
//	int real;
//	int imag;
//public:
//	Complex(int r = 0, int i = 0)
//	{
//		real = r;
//		imag = i;
//	}
//	friend ostream&operator<<(ostream&out, Complex a)
//	{
//		if (a.imag!=0)
//		out << "(" << a.real << "," << a.imag << "i)" << endl;
//		else
//			out << "(" << a.real << " )" << endl;
//		return out;
//	}
//	Complex operator*( Complex b)//(ac - bd) + (ad + bc)i。
//	{
//		return Complex(real*b.real - imag*b.imag, real*b.imag + imag*b.real);
//	}
//};
//int main()
//{
//	Complex a,b(1,1),c(2,2);
//
//	cout << b;
//	cout << c;
//	a = b*c;
//	cout << a;
//	system("pause");
//}



//11. 定义一个Student类，包含学号、姓名、高数、英语、程序设计、总分等信息，
//要求总分由数学、英语、程序设计三门课成绩之和计算得来。在主函数中创建几个
//学生对象，并输出相关信息。
//class Student
//{
//private:
//	string no; //学号
//	string name;//名字
//	double math;
//	double English;
//	double design;
//	double total = 0;
//public:
//	Student(string n, string na, double m, double e, double d)
//		:no(n), name(na), math(m), English(e), design(d)
//	{}
//	void Settotal()
//	{
//		total = math + English + design;
//	}
//	void show()
//	{
//		cout << "名字" << name << endl;
//		cout << "学号" << no << endl;
//		cout << "数学" << math << endl;
//		cout << "英语" << English << endl;
//		cout << "设计" << design << endl;
//		cout << "总分" << total << endl;
//	}
//
//};
//int main()
//{
//	Student s1("201503411043", "姚志远",96,98,98);
//	//s1.Settotal();
//	s1.show();
//	system("pause");
//
//}

//12．定义一个银行账户Account类，包含账号、用户名、余额（balance）等信息，
//初始值余额必须大于等于0，还应包含存钱成员函数credit()和取钱成员函数debit()，
//如果取款金额大于余额，则balance保持不变，并输出出错提示信息“Debit amou
//nt exceeded account blance.”。在主函数中创建一个账户对象，初始账户余额为200元，
//输出原始信息，存入1000元，输出账户余额信息；取出800元，输出账户余额信息；再取出500元，
//输出账户余额信息。
//class Account
//{
//private:
//	string no;
//	string name;
//	double balance;
//public:
//	Account(string no, string name, double balance = 0)
//	{
//		this->no = no;
//		this->name = name;
//		if (balance < 0)
//			this->balance = 0;
//		else
//			this->balance = balance;
//	}
//	void credit(double c)
//	{
//		balance += c;
//	}
//	void debit(double c)
//	{
//		if (c > balance)
//			cerr << "Debit amount exceeded account blanc." << endl;
//		else
//		balance -= c;
//	}
//	void show()
//	{
//		cout << "AccountNo:" << no << endl;
//		cout << "AccountName:" << name << endl;
//		cout << "Balance:" << balance << endl;
//		
//
//	}
//};
//int main()
//{
//	Account a("20130046", "吴大雄", 200);
//	a.show();
//	a.credit(1000);
//	a.show();
//	a.debit(800);
//	a.show();
//	system("pause");
//}