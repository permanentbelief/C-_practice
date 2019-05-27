//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//void strcopy(char *string1, char *string2)
//{
//	for (char *temp = string1; *temp != ' ';temp++)
//	{
//		*string2 = *temp;
//		string2++;
//	}
//	*string2 = '\0';
//}
//int main()
//{
//	char str1[] = { "Tomato Studio" };
//	char *str2;
//	int size = 14;
//	str2 = new char[size];
//	cout << "str1的内容是" << str1 << endl;
//	strcopy(str1, str2);
//	cout << "String Copied..." << endl;
//	cout << "str2的内容是" << str2 << endl;
//	delete[] str2;
//	system("pause");
//	return 0;
//}
//#include <cstring>
//using namespace std;
//class A
//{
//public:
//	char name[80];
//	A(const char *n)
//	{
//		strcpy(name,n);
//	}
//};
//class B : public A
//{
//public:
//	B(const char *n) :A(n)
//	{
//	}
//	void PrintName()
//	{
//		cout << "name:" << name << endl;
//
//	}
//};
//int main()
//{
//	B b1 = ("Ling li");
//	b1.PrintName();
//	system("pause");
//}
//class Cpolygon
//{
//protected:
//	int width;
//	int height;
//public:
//	void set_values(int a, int b)
//	{
//		width = a;
//		height = b;
//	}
//      area()
//	{
//	  
//	}
//
//};
//class CRectanle : public Cpolygon
//{
//public:
//
//{
//	return (width*height);
//}
//};
//class CRectangle : public Cpolygon
//{
//public:
//{
//	ret
//}
//}
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A(){ a = 0; b = 0; }
//	A(int i){ a = i; b = 0; }
//	A(int i, int j){ a = i; b = j; }
//	void display(){ cout << "a=" << a << " b=" << b; }
//private:
//	int a;
//	int b;
//};
//
//class B : public A
//{
//public:
//	B() :A(){ c = 0; }
//	B(int i) :A(i){ c = 0; }
//	B(int i, int j) :A(i, j){ c = 0; }
//	//添加多行代码
//	B(int i, int j, int k) :A(i, j){ c = k; }
//	/*B(int i) :A(i) { c = 0; }
//	B(int i, int j) { c = 0; }
//	B(int i, int j,int c) : A(i, j){ c = 0; }*/
//	void display1()
//	{
//		display();
//		cout << " c=" << c << endl;
//	}
//private:
//	int c;
//};
//
//int main()
//{
//	B b1;
//	B b2(1);
//	B b3(1, 3);
//	B b4(1, 3, 5);
//	b1.display1();
//	b2.display1();
//	b3.display1();
//	b4.display1();
//	system("pause");
//	return 0;
//}
// 为啥是5？
//#include<iostream> 
//using namespace std;
//class A
//{
//public:
//	static int n;
//	A()
//	{
//		n++;
//	};
//	~A()
//	{
//		n--;
//	};
//};
//int  A::n =0;
//int main()
//{
//	A a;
//	A b[3];
//	A *c = new A;
//	cout << c->n << endl;
//	cout << A::n << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class B
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//};
//class A: public B
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//};
//class C: public A
//{
//public:
//	C()
//	{
//		cout << "C()" << endl;
//	}
//};
//int main()
//{
//	C c;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Complex
//{
//private:
//	double imag;
//	double real;
//public:
//	Complex(double real = 0, double imag = 0)
//	{
//		this->real = real;
//		this->imag = imag;
//	}
//	friend  Complex operator+( Complex b,Complex a)
//	{
//		Complex c;
//		c.real = a.real +  b.real;
//		c.imag = a.imag +   b.imag;
//		return  c;
//	}
//	void showSum();
//
//};
//void Complex::showSum()
//{
//	cout << real;
//	if (imag > 0)
//	{
//		cout << "+";
//
//	}
//	if (imag!=0)
//		cout << imag << "i" << endl;
//}
//
//int main()
//{
//	Complex com1(10, 10), com2(20, -20), sum;
//	sum = com1 + com2;
//	sum.showSum();
//	getchar();
//	system("pause");
//	return 0;
//}