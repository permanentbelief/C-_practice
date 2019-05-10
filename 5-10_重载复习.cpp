#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>

using namespace std;

class Complex
{

	friend ostream &operator<<(ostream &output, const Complex &obj)
	{
		cout << "(" << obj.real << "," << obj.imag << "i" << ")" << endl;
		return output;
	}
public:
	Complex() { real = 0; imag = 0; }
	Complex(double r, double i){ real = r; imag = i; }
	Complex operator+(Complex &c2);//声明重载运算符的函数
	void display();
private:
	double real;
	double imag;
};
Complex Complex::operator+(Complex &c2)//定义重载函数
{
	/*real += c2.real;
	imag += c2.imag;
	return *this;*/
	Complex c3;
	c3.real = real + c2.real;
	c3.imag = imag + c2.imag;
	return c3;
}
void Complex::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}
int main()
{
	Complex c1(3, 4);
	Complex c2(5, -10);
	//c1.display();
	//c2.display();
	cout << c1;
	cout << c2;
	cout << c1 + c2;
	system("pause");
}