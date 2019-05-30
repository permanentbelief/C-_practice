#define _CRT_SECURE_NO_WARNINGS 1 
////// proj1.cpp
////#include <iostream>
////using namespace std;
////
////class MyClass {
////public:
////	MyClass(int len)
////	{
////		array = new int[len];
////		arraySize = len;
////		for (int i = 0; i < arraySize; i++)
////			array[i] = i + 1;
////	}
////
////	~MyClass()
////	{
////		// ERROR   **********found**********
////		delete array[];
////	}
////
////	void Print() const
////	{
////		for (int i = 0; i < arraySize; i++)
////			// ERROR   **********found**********
////			cin << array[i] << ' ';
////
////		cout << endl;
////	}
////private:
////	int *array;
////	int arraySize;
////};
////
////int main()
////{
////	// ERROR   **********found**********
////	MyClass obj;
////
////	obj.Print();
////	return 0;
////}
////
////// proj2.cpp
////#include <iostream>
////using namespace std;
////
////const int MAXNUM = 100;
////
////class Set {
////private:
////	int num;                 // 元素个数
////	char setdata[MAXNUM];    // 字符数组，用于存储集合元素
////public:
////	Set(char *s);            // 构造函数，用字符串s构造一个集合对象
////	bool InSet(char c);      // 判断一个字符c是否在集合中，若在，返回true，否则返回false
////	void Print() const;      // 输出集合中所有元素
////};
////
////Set::Set(char *s)
////{
////	num = 0;
////	while (*s){
////		//**********found**********
////		if (______________________)         // TODO: 添加代码，测试元素在集合中不存在
////			//**********found**********
////			______________________;           // TODO: 添加一条语句，加入元素至集合中
////		s++;
////	}
////}
////
////bool Set::InSet(char c)
////{
////	for (int i = 0; i < num; i++)
////		//**********found**********
////	if (______________________)   // TODO: 添加代码，测试元素c是否与集合中某元素相同
////		//**********found**********
////		______________________;         // TODO: 添加一条语句，进行相应处理
////
////	return false;
////}
////
////void Set::Print() const
////{
////	cout << "Set elements: " << endl;
////	for (int i = 0; i < num; i++)
////		cout << setdata[i] << ' ';
////	cout << endl;
////}
////
////int main()
////{
////	char s[MAXNUM];
////	cin.getline(s, MAXNUM - 1);   // 从标准输入中读入一行
////	Set setobj(s);              // 构造对象setobj
////	setobj.Print();             // 显示对象setobj中内容
////	return 0;
////}
////#include <iostream>
////#include <fstream>
////using namespace std;
////#define Max 200
////class Sample
////{
////	int A[Max];
////public:
////	Sample() {}
////	int getNumber(Sample s, int k) { return s.A[k]; }
////	void getdata(Sample &s);  // 读数据函数
////	void funSort(Sample &s);  // 要求考生编写的函数
////	void putdata(Sample &s);  // 写结果函数
////};
////void Sample::funSort(Sample &s)
////{
////
////
////}
////int main()
////{
////	int i;
////	Sample s;
////	s.getdata(s);
////	cout << "读取的数据如下:" << endl;
////	for (int i = 0; i < Max; i++) {
////		cout << s.getNumber(s, i) << " ";
////		if ((i + 1) % 10 == 0) cout << endl;
////	}
////	cout << endl;
////	s.funSort(s);
////	s.putdata(s);
////	cout << "输出结果:" << endl;
////	for (i = 0; i < 10; i++)
////		cout << s.getNumber(s, i) << " ";
////	cout << endl;
////}
//////***********以下请考生不要修改************
////void Sample::getdata(Sample &s)  // 从数据文件中读取数据
////{
////	fstream fp;
////	fp.open(".\\in.dat", ios::in);
////	for (int i = 0; i < Max; i++) fp >> s.A[i];
////	fp.close();
////}
////void Sample::putdata(Sample &s)  // 写结果文件
////{
////	fstream fp;
////	fp.open(".\\out.dat", ios::out);
////	for (int i = 0; i < 10; i++) fp << s.A[i] << endl;
////	fp.close();
////}
//
//// 指针的燃点1.
//// 同为单目，右边亲 结合法 一层一层结合
//// int (*(*p[5]）
////定义一个拥有5个元素的数组，每个元素都是一个指向含有5个返回值为int,参数为两个int的函数指针的数组的指针
////int(*(*a[5])[5])(int,int)
//
//// 所有函数指针 遇到* 解引用符等于 不存在！！！！！！！！！！！！！！
//// 函数指针只存在 形式上的指针           不存在二级指针、、
//
//
////几级指针 几个p
//
//
////链表 结构体的自引用
//struct list {
//	int data;
//	struct list * next;//*不能去掉
//};
//struct list a;
////a.next;//全局变量会qing0 不能自引用自己的变量
////遍历链表 当成数组来使
//for (cur = head; cur; cur = cur->next);//对链表的遍历 ，完成了对链表节点的遍历
//for (i = a; i < b;i++)// i完成了[a,b]之间的遍历
//for (i = 0; i < size; i++)// i完成了数组之间的遍历
//for (i = n; i; i/=s)// 数位遍历：i完成了数字n在s进制下每一位的遍历
//for (i = 0; str[i]; i++) //字符串的遍历
//for (p = v.begin(); p != v.end; p++)//C++容器遍历：迭代器p完成了
//
//// 迭代法解题
////
////
////
////
////
////
////
//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int(*pfunc)(int, int) = add;
//
//}
// proj1.cpp
//#include <iostream>
//using namespace std;
//
//class MyClass {
//public:
//	// ERROR  **********found**********
//	 MyClass(int i)
//	{
//		value = i; cout << "Constructor called." << endl;
//	}
//	int Max(int x, int y) { return x>y ? x : y; }     // 求两个整数的最大值
//	// ERROR  **********found**********
//	int Max(int x, int y, int z = 0)                  // 求三个整数的最大值
//	{
//		if (x > y)
//			return x>z ? x : z;
//		else
//			return y>z ? y : z;
//	}
//	int GetValue() const { return value; }
//	~MyClass() { cout << "Destructor called." << endl; }
//private:
//	int value;
//};
//
//int main()
//{
//	MyClass obj(10);
//
//	// ERROR  **********found**********
//	cout << "The value is " << value() << endl;
//
//	cout << "Max number is " << obj.Max(10, 20) << endl;
//	return 0;
//}
// proj2.cpp
//#include <iostream>
//using namespace std;
//
//class Day {
//private:
//	int year;
//	int month;
//	int day;
//public:
//	Day(int y = 2000, int m = 1, int d = 1);  // 构造函数
//	int operator - (const Day &d);      // 重载运算符 -
//	void Print() const;                 // 输出日期
//};
//
//Day::Day(int y, int m, int d)
//{
//	year = y;
//	month = m;
//	day = d;
//}
//
//int Day::operator - (const Day &d)    // 实现运算符函数 -
//{
//	int diffs, m;
//	int monthday[13] = {  // 存放每月的天数
//		0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
//	};
//
//	if (year == d.year && month == d.month) {    // 若两日期在同年同月内, 则计算其相差的天数
//		//**********found**********
//		diffs = day - d.day;                    // TODO: 在此增加代码
//		//**********found**********
//		return diffs;                    // TODO: 在此增加一条语句
//	}
//	diffs = monthday[d.month] - d.day + day;      // 计算除整月以外相差的天数
//	for (m = d.month + 1; m < month; m++)
//		//**********found**********
//		diffs += monthday[m] ;                    // TODO: 在此增加一条语句, 依次计算两个日期间相差的整月天数
//	return diffs;
//}
//
//void Day::Print() const
//{
//	cout << "Year = " << year << ", Month = " << month << " , Day = " << day << endl;
//}
//
//int main()
//{
//	int y, m, d;
//	cin >> y >> m >> d;
//	Day d1(y, m, d);
//	cin >> y >> m >> d;
//	Day d2(y, m, d);
//	int diff_days;
//	d1.Print();
//	d2.Print();
//	diff_days = d1 - d2;  // 计算d1和d2相差天数
//	cout << "Difference days: " << diff_days << endl;
//	system("pause");
//	return 0;
//}
//#include <iostream>
//#include <fstream>
//using namespace std;
//#define Max 200
//class Sample
//{
//	int A[Max];
//public:
//	Sample() {}
//	int getNumber(Sample s, int k) { return s.A[k]; }
//	void getdata(Sample &s);  // 读数据函数
//	void funSort(Sample &s);  // 要求考生编写的函数
//	void putdata(Sample &s);  // 写结果函数
//};
//void Sample::funSort(Sample &s)
//{
//
//
//}
//int main()
//{
//	int i;
//	Sample s;
//	s.getdata(s);
//	cout << "读取的数据如下:" << endl;
//	for (int i = 0; i < Max; i++) {
//		cout << s.getNumber(s, i) << " ";
//		if ((i + 1) % 10 == 0) cout << endl;
//	}
//	cout << endl;
//	s.funSort(s);
//	s.putdata(s);
//	cout << "输出结果:" << endl;
//	for (i = 0; i < 10; i++)
//		cout << s.getNumber(s, i) << " ";
//	cout << endl;
//}
////***********以下请考生不要修改************
//void Sample::getdata(Sample &s)  // 从数据文件中读取数据
//{
//	fstream fp;
//	fp.open(".\\in.dat", ios::in);
//	for (int i = 0; i < Max; i++) fp >> s.A[i];
//	fp.close();
//}
//void Sample::putdata(Sample &s)  // 写结果文件
//{
//	fstream fp;
//	fp.open(".\\out.dat", ios::out);
//	for (int i = 0; i < 10; i++) fp << s.A[i] << endl;
//	fp.close();
//}
//#include <iostream>
//using namespace std;
//class teacher;
//class student
//{
//	const char *name;
//public:
//	student(const char *s)
//	{
//		name = s;
//	}
//	friend void print(student &, teacher &);
//};
//class teacher
//{
//	const char *name;
//public:
//	teacher(const char *s)
//	{
//		name = s;
//	}
//	// ERROR  **********found**********
//	friend void print(student &, teacher &);
//};
//// ERROR  **********found**********
//void print(student&a, teacher &b)
//{
//	cout << "the student is " << a.name << endl;
//	cout << "the teacher is " << b.name << endl;
//}
//int main()
//{
//	student s("Li Hu");
//	teacher t("Wan Ping");
//	// ERROR  **********found**********
//	print(s,t);
//	system("pause");
//}
//#include <iostream>
//#include <string.h>
//using namespace std;
//class student
//{
//	char name[10];
//	int deg;
//public:
//	student(const char na[], int d)
//	{
//		strcpy(name, na);
//		//**********found**********
//		deg = d;
//
//	}
//	char *getname() { return name; }
//	//**********found**********
//	friend int compare(student &s1, student &s2)
//
//	{
//		if (s1.deg > s2.deg) return 1;
//		else if (s1.deg == s2.deg) return 0;
//		else return -1;
//	}
//};
//int main()
//{
//	student st[] = { student("王华", 78), student("李明", 92), student("张伟", 62), student("孙强", 88) };
//	int min = 0; // 存放最低分的位置
//	int max = 0; // 存放最高分的位置
//	for (int i = 1; i < 4; i++)
//	{
//		if (compare(st[max], st[i]) == -1)
//			//**********found**********
//			st[max] = st[i];
//		else if (compare(st[min], st[i]) == 1)
//			//**********found**********
//			st[min] = st[i];
//	}
//	cout << "输出结果:" << endl;
//	cout << "  最高分者:" << st[max].getname() << endl;
//	cout << "  最低分者:" << st[min].getname() << endl;
//	system("pause");
//}
// proj3.cpp
//#include<iostream>
//#include<fstream>
//#include<cstring>
//using namespace std;
//
//class intArray
//{
//private:
//	int *array;
//	int length;
//public:
//	intArray(const char *filename);
//	intArray();
//	intArray & operator=(const intArray & src);
//	~intArray();
//	void writeToFile(const char *filename);
//};
//
//intArray::intArray()
//{
//	length = 10;
//	array = new int[length];
//}
//
//intArray::intArray(const char *filename)
//{
//	ifstream myFile(filename);
//	array = new int[300];
//	length = 0;
//	while (myFile >> array[length++]);
//	length--;
//	myFile.close();
//}
//
////*************333***********
//intArray & intArray::operator=(const intArray & src)
//{
//	if (array != NULL)
//		delete[] array;
//	length = src.length;
//	array = new int[length];
//	return *this;
//
//}
//
////**********666*********
//
//intArray::~intArray()
//{
//	delete[] array;
//}
//
//void intArray::writeToFile(const char *filename)
//{
//	int step = 0;
//	ofstream outFile(filename);
//	for (int i = 0; i<length; i = i + step)
//	{
//		outFile << array[i] << endl;
//		step++;
//	}
//	outFile.close();
//}
//
//int main()
//{
//	intArray *arrayP = new intArray(".\\in.dat");
//	intArray myArray;
//	myArray = *arrayP;
//	delete arrayP;
//	myArray.writeToFile(".\\out.dat");
//	system("pause");
//}
//
//#include <iostream>
//#include <fstream>
//using namespace std;
//#define Max 200
//class Sample
//{
//	int A[Max];
//	double B[10];
//public:
//	Sample()
//	{
//		for (int i = 0; i < 10; i++) B[i] = 0;
//	}
//	int getNumberA(Sample s, int k) { return s.A[k]; }
//	double getNumberB(Sample s, int k) { return s.B[k]; }
//	void getdata(Sample &s);  // 读数据函数
//	void funSort(Sample &s);  // 要求考生编写的函数
//	void putdata(Sample &s);  // 写结果函数
//};
//void Sample::funSort(Sample &s)
//{
//
//
//}
//int main()
//{
//	int i;
//	Sample s;
//	s.getdata(s);
//	cout << "读取的数据如下:" << endl;
//	for (int i = 0; i < Max; i++) {
//		cout << s.getNumberA(s, i) << " ";
//		if ((i + 1) % 10 == 0) cout << endl;
//	}
//	cout << endl;
//	s.funSort(s);
//	s.putdata(s);
//	cout << "输出结果:" << endl;
//	for (i = 0; i < 10; i++)
//		cout << s.getNumberB(s, i) << " ";
//	cout << endl;
//}
////***********以下请考生不要修改************
//void Sample::getdata(Sample &s)  // 从数据文件中读取数据
//{
//	fstream fp;
//	fp.open(".\\in.dat", ios::in);
//	for (int i = 0; i < Max; i++) fp >> s.A[i];
//	fp.close();
//}
//void Sample::putdata(Sample &s)  // 写结果文件
//{
//	fstream fp;
//	fp.open(".\\out.dat", ios::out);
//	for (int i = 0; i < 10; i++) fp << s.B[i] << endl;
//	fp.close();
//}
//#include <iostream>
//#include <fstream>
//using namespace std;
//#define Max 200
//class Sample
//{
//	int A[Max];
//	double B[10];
//public:
//	Sample()
//	{
//		for (int i = 0; i < 10; i++) B[i] = 0;
//	}
//	int getNumberA(Sample s, int k) { return s.A[k]; }
//	double getNumberB(Sample s, int k) { return s.B[k]; }
//	void getdata(Sample &s);  // 读数据函数
//	void funSort(Sample &s);  // 要求考生编写的函数
//	void putdata(Sample &s);  // 写结果函数
//};
//void Sample::funSort(Sample &s)
//{
//	int sum = 0;
//	int j = 0;
//	int i = 0;
//	for (i = 1; i < Max + 1; i++)
//	{
//		sum += s.A[i - 1];
//		if (i % 20 == 0)
//		{
//			s.B[j] = sum / 20;
//			sum = 0;
//			j++;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <9 - i; j++)
//		{
//			if (s.B[j] > s.B[j + 1])
//			{
//				int temp = s.B[j];
//				s.B[j] = s.B[j + 1];
//				s.B[j + 1] = temp;
//			}
//		}
//
//
//
//	}
//}
//int main()
//	{
//		int i;
//		Sample s;
//		s.getdata(s);
//		cout << "读取的数据如下:" << endl;
//		for (int i = 0; i < Max; i++) {
//			cout << s.getNumberA(s, i) << " ";
//			if ((i + 1) % 10 == 0) cout << endl;
//		}
//		cout << endl;
//		s.funSort(s);
//		s.putdata(s);
//		cout << "输出结果:" << endl;
//		for (i = 0; i < 10; i++)
//			cout << s.getNumberB(s, i) << " ";
//		cout << endl;
//		system("pause");
//	}
//	//***********以下请考生不要修改************
//	void Sample::getdata(Sample &s)  // 从数据文件中读取数据
//	{
//		fstream fp;
//		fp.open(".\\in.dat", ios::in);
//		for (int i = 0; i < Max; i++) fp >> s.A[i];
//		fp.close();
//	}
//	void Sample::putdata(Sample &s)  // 写结果文件
//	{
//		fstream fp;
//		fp.open(".\\out.dat", ios::out);
//		for (int i = 0; i < 10; i++) fp << s.B[i] << endl;
//		fp.close();
//	
//	}
	// proj2.cpp
//#include <iostream>
//using namespace std;
//
//const int MAXNUM = 100;
//
//class Bag {
//private:
//	int num;
//	int bag[MAXNUM];
//public:
//	Bag(int m[], int n = 0); 		// 构造函数
//	bool operator == (Bag &b);	// 重载运算符==
//	int InBag(int ball);		// 某一小球在袋子内的出现次数,返回0表示不存在
//};
//
//Bag::Bag(int m[], int n)
//{
//	if (n > MAXNUM) {
//		cerr << "Too many members\n";
//		exit(-1);
//	}
//	for (int i = 0; i < n; i++)
//		bag[i] = m[i];
//	num = n;
//}
//
//bool Bag::operator == (Bag &b)	// 实现运算符函数==
//{
//	if (num != b.num)	// 元素个数不同
//		return false;
//	for (int i = 0; i < num; i++)
//		//**********found**********
//	if (bag[i] != b.bag[i])	// TODO: 加入条件, 判断当前袋子中每个元素在当前袋子和袋子b中是否出现次数不同
//		//**********found**********
//		return false;		// TODO: 加入一条语句
//	return true;
//}
//
//int Bag::InBag(int ball)
//{
//	int count = 0;
//	for (int i = 0; i < num; i++)
//		//**********found**********
//	if (ball == bag[i])	// TODO: 加入条件, 判断小球ball是否与当前袋子中某一元素相同
//		//**********found**********
//		count++;	// TODO: 加入一条语句
//	return count;
//}
//
//int main()
//{
//	int data[MAXNUM], n, i;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		cin >> data[i];
//	Bag b1(data, n);		// 创建袋子对象b1
//	cin >> n;
//	for (i = 0; i < n; i++)
//		cin >> data[i];
//	Bag b2(data, n);		// 创建袋子对象b2
//	if (b1 == b2)			// 测试b1和b2是否相同
//		cout << "Bag b1 is same with Bag b2\n";
//	else
//		cout << "Bag b1 is not same with Bag b2\n";
//	return 0;
//}
