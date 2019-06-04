#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using  namespace std;
//void strcopy(char* string1, char*string2)
//{
//	for (char* temp = string1; *temp != '\0'&&*temp!=' ';temp++)
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
//	cout << "Str1 的内容是 " << str1 << endl;
//	strcopy(str1, str2);
//	cout << "String Copied..." << endl;
//	cout << "Str2 的内容是 " << str2 << endl;
//	delete[] str2;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <cstring>
//using namespace std;
//class A
//{
//
//
//public:
//	char name[80];
//	A(const char *n)
//	{ strcpy(name,n); }
//};
//class B : public A
//{
//public:
//	B(const char* n) :A(n){}
//	void PrintName()
//	{
//		cout << "name: " << name << endl;
//	}
//};
//int main()
//{
//	B b1("Ling li");
//	b1.PrintName();
//	system("pause");
//}
//#include <iostream>
//using namespace std;
//class CPolygon
//{
//protected:
//	int width, height;
//public:
//	void set_values(int a, int b)
//	{
//		width = a;
//		height = b;
//	}
//	virtual int area() = 0;
//};
//class CRectangle : public CPolygon
//{
//public:
//	int area()
//	{
//		return (width*height);
//	}
//};
//class CTriangle : public CPolygon
//{
//public:
//	int area()
//	{
//		return (width*height / 2);
//	}
//};
//int main()
//{
//	CRectangle rect;
//	CTriangle trgl;
//	CPolygon* ppoly1 = &rect;
//	CPolygon* ppoly2 = &trgl;
//	ppoly1->set_values(4, 5);
//	ppoly2->set_values(6, 5);
//	cout << ppoly1->area() << endl;
//	cout << ppoly2->area() << endl;
//	system("Pause");
//}
//#include <iostream>
//using namespace std;
//class Boy;
//class Girl
//{
//public:
//	Girl(int no = 1, int a = 18)
//	{
//		number = no;
//		age = a;
//	}
//private:
//	int number;
//	int age;
//	friend Boy;
//};
//class Boy
//{
//public:
//	void disp(Girl &x)
//	{
//		cout << "name:" << x.number << endl << "age:" << x.age << endl;
//	}
//};
//int main()
//{
//	Boy b;
//	Girl g;
//	b.disp(g);
//	system("pause");
//	return 0;
//}
//	
