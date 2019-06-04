#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A(){ a = 0; b = 0; }
//	A(int i){ a = i; b = 0; }
//	A(int i, int j){ a = i, b = j; }
//	void display()
//	{
//		cout << "a =" << a << "b =" << b;
//	}
//private:
//	int a;
//	int b;
//};
//class B : public A
//{
//public:
//	B() :A(){ c = 0; }
//	B(int i) :A(i){ c = 0; }
//	B(int i, int j) :A(i, j){ c = 0; }
//	B(int i, int j, int k) :A(i, j){ c = k; }
//	void display1()
//	{
//		display();
//		cout << "c =" << c << endl;
//	}
//private:
//	int c;
//};
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
//
//}
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	static int n ;
//	A()
//	{
//		n++;
//	};
//	~A()
//	{
//		n--;
//	};
//};
//int A::n = 0;
//int main()
//{
//	A a;
//	A b[3];
//	A*c = new A;
//	cout << c->n << endl;
//	cout << A::n << endl;
//	system("pause");
//}
//#include <iostream>
//using namespace std;
////ÃÌº”¿‡A£¨B£¨C
//class B
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//};
//class A : public B
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//};
//class C : public A
//{
//public:
//	C()
//	{
//		cout << "C()" << endl;
//	}
//};
//
//int main()
//{
//	C c;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//class Complex
//{
//private:
//	double real;
//	double imag;
//public:
//	Complex(double real = 0, double imag = 0)
//	{
//		this->real = real;
//		this->imag = imag;
//	}
//	friend  Complex operator+(Complex a, Complex b)
//	{
//		return  Complex(b.real + a.real, b.imag + a.imag);
//	}
//	void showSum();
//};
//void Complex::showSum()
//{
//	cout << real;
//	if (imag > 0)
//		cout << "+";
//	if (imag != 0)
//	{
//		cout << imag << "i" << endl;
//	}
//}
//int main()
//{
//	Complex com1(10, 10), com2(20, -20), sum;
//	sum = com1 + com2;
//	sum.showSum();
//	getchar();
//	system("pause");
//}