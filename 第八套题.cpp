//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class Sample
//{
//	int x, y;
//public:
//	// ERROR  **********found**********
//	void Sample()
//
//	{
//		x = y = 0;
//	}
//	Sample(int i, int j)
//	{
//		x = i; y = j;
//	}
//	void copy(Sample &s)
//	{
//		x = s.x; y = s.y;
//	}
//	void setxy(int i, int j)
//	{
//		x = i; y = j;
//	}
//	void print()
//	{
//		cout << "x=" << x << ",y=" << y << endl;
//	}
//};
//// ERROR  **********found**********
//void func(Sample s1, Sample s2)
//{
//	s1.setxy(10, 20);
//	s2.setxy(30, 40);
//}
//int main()
//{
//	Sample p(1, 2), q;
//	// ERROR  **********found**********
//	p.copy(q);
//	func(p, q);
//	p.print();
//	q.print();
//}
//
//#include <iostream>
//using namespace std;
//#include <string.h>
//class object
//{
//	char name[20];
//	int  no;
//public:
//	object() {}
//	object(const char na[], int n)
//	{
//		strcpy(name, na); no = n;
//	}
//	void show()
//	{
//		cout << name << "(" << no << ")";
//	}
//};
//class book :public object
//{
//	char author[10];
//public:
//	book() {}
//	//**********found**********
//	book(const char na[], int n, const char auth[]) :_____________
//	{
//		strcpy(author, auth);
//	}
//	void showbook()
//	{
//		show();
//		cout << "  作者:" << author;
//	}
//};
//class reader :public object
//{
//	book rent[5];
//	int top;
//public:
//	//**********found**********
//	reader(const char na[], int n) :_____________
//	{ top = 0; }
//	void rentbook(book &b)
//	{
//		//**********found**********
//		_____________;
//		top++;
//	}
//	void showreader()
//	{
//		cout << "读者:"; show();
//		cout << endl << "所借图书:" << endl;
//		for (int i = 0; i < top; i++)
//		{
//			cout << " " << i + 1 << ":";
//			//**********found**********
//			______________;
//			cout << endl;
//		}
//	}
//};
//int main()
//{
//	book b1("C语言", 100, "谭浩强"), b2("数据结构", 110, "严蔚敏");
//	reader r1("王华", 1234);
//	r1.rentbook(b1);
//	r1.rentbook(b2);
//	r1.showreader();
//}
//// proj3.cpp
//#include<iostream>
//#include<fstream>
//#include<cstring>
//using namespace std;
//
//class intArray
//{
//private:
//	int *array;  //整数序列首地址
//public:
//	int length;  //序列中的整数个数
//	//构造函数，从文件中读取数据用于初始化新对象。参数是文件名。
//	intArray(const char *filename);
//	int & operator[](int i); //重载运算符，实现对象赋值。
//	~intArray();
//};
//
////*************333***********
//intArray::intArray(const char* filename)
//{
//	ifstream myFile(filename);
//	int len = 301, tmp;
//	array = new int[len];
//	length = 0;
//	while (tmp = myFile.get() != EOF)
//	{
//		array[length++] = tmp;
//	}
//	array[length] = '\0';
//	myFile.close();
//}
//
//
//
////*************666***********
//
//int& intArray::operator[](int i)
//{
//	return array[i];
//}
//
//intArray::~intArray()
//{
//	delete[] array;
//}
//
//void writeToFile(const char *filename, intArray& myArray)
//{
//	int step = 0;
//	ofstream outFile(filename);
//	for (int i = 0; i<myArray.length; i = i + step)
//	{
//		outFile << myArray[i] << '\n';
//		step++;
//	}
//	outFile.close();
//}
//
//int main()
//{
//	intArray myArray(".\\in.dat");
//	writeToFile(".\\out.dat", myArray);
//}