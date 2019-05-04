#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//class Complex
//{
//	friend ostream & operator <<(ostream &output, const Complex &obj)
//	{
//		cout << "(" << obj.real << "," << obj.imag << "i)" << endl;
//		return output;
//	}
//public:
//	Complex(){ real = 0; imag = 0; }
//	Complex(double r, double i){ real = r; imag = i; }
//	Complex operator+(Complex &c2);
//	void display();
//private:
//	double real;
//	double imag;
//
//};
//Complex Complex::operator+(Complex &c2)
//{
//	Complex c3;
//	c3.real = real + c2.real;
//	c3.imag = imag + c2.imag;
//	return c3;
//}
//void Complex::display()
//{
//	cout << "(" << real << "," << imag << "i)" << endl;
//}
//int main()
//{
//	Complex c1(3,4);
//	Complex c2(5,-10);
//	cout << "c1="; c1.display();
//	
//	cout << "c2="; c2.display();
//	
//	cout << "c1+c2="; (c1 + c2).display();
//	
//	//Ê¹ÓÃÖØÔØ
//	cout << c1;
//	cout << c2;
//	cout << (c1 + c2);
//	system("pause");
//}