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
////	int num;                 // Ԫ�ظ���
////	char setdata[MAXNUM];    // �ַ����飬���ڴ洢����Ԫ��
////public:
////	Set(char *s);            // ���캯�������ַ���s����һ�����϶���
////	bool InSet(char c);      // �ж�һ���ַ�c�Ƿ��ڼ����У����ڣ�����true�����򷵻�false
////	void Print() const;      // �������������Ԫ��
////};
////
////Set::Set(char *s)
////{
////	num = 0;
////	while (*s){
////		//**********found**********
////		if (______________________)         // TODO: ��Ӵ��룬����Ԫ���ڼ����в�����
////			//**********found**********
////			______________________;           // TODO: ���һ����䣬����Ԫ����������
////		s++;
////	}
////}
////
////bool Set::InSet(char c)
////{
////	for (int i = 0; i < num; i++)
////		//**********found**********
////	if (______________________)   // TODO: ��Ӵ��룬����Ԫ��c�Ƿ��뼯����ĳԪ����ͬ
////		//**********found**********
////		______________________;         // TODO: ���һ����䣬������Ӧ����
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
////	cin.getline(s, MAXNUM - 1);   // �ӱ�׼�����ж���һ��
////	Set setobj(s);              // �������setobj
////	setobj.Print();             // ��ʾ����setobj������
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
////	void getdata(Sample &s);  // �����ݺ���
////	void funSort(Sample &s);  // Ҫ������д�ĺ���
////	void putdata(Sample &s);  // д�������
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
////	cout << "��ȡ����������:" << endl;
////	for (int i = 0; i < Max; i++) {
////		cout << s.getNumber(s, i) << " ";
////		if ((i + 1) % 10 == 0) cout << endl;
////	}
////	cout << endl;
////	s.funSort(s);
////	s.putdata(s);
////	cout << "������:" << endl;
////	for (i = 0; i < 10; i++)
////		cout << s.getNumber(s, i) << " ";
////	cout << endl;
////}
//////***********�����뿼����Ҫ�޸�************
////void Sample::getdata(Sample &s)  // �������ļ��ж�ȡ����
////{
////	fstream fp;
////	fp.open(".\\in.dat", ios::in);
////	for (int i = 0; i < Max; i++) fp >> s.A[i];
////	fp.close();
////}
////void Sample::putdata(Sample &s)  // д����ļ�
////{
////	fstream fp;
////	fp.open(".\\out.dat", ios::out);
////	for (int i = 0; i < 10; i++) fp << s.A[i] << endl;
////	fp.close();
////}
//
//// ָ���ȼ��1.
//// ͬΪ��Ŀ���ұ��� ��Ϸ� һ��һ����
//// int (*(*p[5]��
////����һ��ӵ��5��Ԫ�ص����飬ÿ��Ԫ�ض���һ��ָ����5������ֵΪint,����Ϊ����int�ĺ���ָ��������ָ��
////int(*(*a[5])[5])(int,int)
//
//// ���к���ָ�� ����* �����÷����� �����ڣ���������������������������
//// ����ָ��ֻ���� ��ʽ�ϵ�ָ��           �����ڶ���ָ�롢��
//
//
////����ָ�� ����p
//
//
////���� �ṹ���������
//struct list {
//	int data;
//	struct list * next;//*����ȥ��
//};
//struct list a;
////a.next;//ȫ�ֱ�����qing0 �����������Լ��ı���
////�������� ����������ʹ
//for (cur = head; cur; cur = cur->next);//������ı��� ������˶�����ڵ�ı���
//for (i = a; i < b;i++)// i�����[a,b]֮��ı���
//for (i = 0; i < size; i++)// i���������֮��ı���
//for (i = n; i; i/=s)// ��λ������i���������n��s������ÿһλ�ı���
//for (i = 0; str[i]; i++) //�ַ����ı���
//for (p = v.begin(); p != v.end; p++)//C++����������������p�����
//
//// ����������
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
//	int Max(int x, int y) { return x>y ? x : y; }     // ���������������ֵ
//	// ERROR  **********found**********
//	int Max(int x, int y, int z = 0)                  // ���������������ֵ
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
//	Day(int y = 2000, int m = 1, int d = 1);  // ���캯��
//	int operator - (const Day &d);      // ��������� -
//	void Print() const;                 // �������
//};
//
//Day::Day(int y, int m, int d)
//{
//	year = y;
//	month = m;
//	day = d;
//}
//
//int Day::operator - (const Day &d)    // ʵ����������� -
//{
//	int diffs, m;
//	int monthday[13] = {  // ���ÿ�µ�����
//		0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
//	};
//
//	if (year == d.year && month == d.month) {    // ����������ͬ��ͬ����, ���������������
//		//**********found**********
//		diffs = day - d.day;                    // TODO: �ڴ����Ӵ���
//		//**********found**********
//		return diffs;                    // TODO: �ڴ�����һ�����
//	}
//	diffs = monthday[d.month] - d.day + day;      // ���������������������
//	for (m = d.month + 1; m < month; m++)
//		//**********found**********
//		diffs += monthday[m] ;                    // TODO: �ڴ�����һ�����, ���μ����������ڼ�������������
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
//	diff_days = d1 - d2;  // ����d1��d2�������
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
//	void getdata(Sample &s);  // �����ݺ���
//	void funSort(Sample &s);  // Ҫ������д�ĺ���
//	void putdata(Sample &s);  // д�������
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
//	cout << "��ȡ����������:" << endl;
//	for (int i = 0; i < Max; i++) {
//		cout << s.getNumber(s, i) << " ";
//		if ((i + 1) % 10 == 0) cout << endl;
//	}
//	cout << endl;
//	s.funSort(s);
//	s.putdata(s);
//	cout << "������:" << endl;
//	for (i = 0; i < 10; i++)
//		cout << s.getNumber(s, i) << " ";
//	cout << endl;
//}
////***********�����뿼����Ҫ�޸�************
//void Sample::getdata(Sample &s)  // �������ļ��ж�ȡ����
//{
//	fstream fp;
//	fp.open(".\\in.dat", ios::in);
//	for (int i = 0; i < Max; i++) fp >> s.A[i];
//	fp.close();
//}
//void Sample::putdata(Sample &s)  // д����ļ�
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
//	student st[] = { student("����", 78), student("����", 92), student("��ΰ", 62), student("��ǿ", 88) };
//	int min = 0; // �����ͷֵ�λ��
//	int max = 0; // �����߷ֵ�λ��
//	for (int i = 1; i < 4; i++)
//	{
//		if (compare(st[max], st[i]) == -1)
//			//**********found**********
//			st[max] = st[i];
//		else if (compare(st[min], st[i]) == 1)
//			//**********found**********
//			st[min] = st[i];
//	}
//	cout << "������:" << endl;
//	cout << "  ��߷���:" << st[max].getname() << endl;
//	cout << "  ��ͷ���:" << st[min].getname() << endl;
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
//	void getdata(Sample &s);  // �����ݺ���
//	void funSort(Sample &s);  // Ҫ������д�ĺ���
//	void putdata(Sample &s);  // д�������
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
//	cout << "��ȡ����������:" << endl;
//	for (int i = 0; i < Max; i++) {
//		cout << s.getNumberA(s, i) << " ";
//		if ((i + 1) % 10 == 0) cout << endl;
//	}
//	cout << endl;
//	s.funSort(s);
//	s.putdata(s);
//	cout << "������:" << endl;
//	for (i = 0; i < 10; i++)
//		cout << s.getNumberB(s, i) << " ";
//	cout << endl;
//}
////***********�����뿼����Ҫ�޸�************
//void Sample::getdata(Sample &s)  // �������ļ��ж�ȡ����
//{
//	fstream fp;
//	fp.open(".\\in.dat", ios::in);
//	for (int i = 0; i < Max; i++) fp >> s.A[i];
//	fp.close();
//}
//void Sample::putdata(Sample &s)  // д����ļ�
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
//	void getdata(Sample &s);  // �����ݺ���
//	void funSort(Sample &s);  // Ҫ������д�ĺ���
//	void putdata(Sample &s);  // д�������
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
//		cout << "��ȡ����������:" << endl;
//		for (int i = 0; i < Max; i++) {
//			cout << s.getNumberA(s, i) << " ";
//			if ((i + 1) % 10 == 0) cout << endl;
//		}
//		cout << endl;
//		s.funSort(s);
//		s.putdata(s);
//		cout << "������:" << endl;
//		for (i = 0; i < 10; i++)
//			cout << s.getNumberB(s, i) << " ";
//		cout << endl;
//		system("pause");
//	}
//	//***********�����뿼����Ҫ�޸�************
//	void Sample::getdata(Sample &s)  // �������ļ��ж�ȡ����
//	{
//		fstream fp;
//		fp.open(".\\in.dat", ios::in);
//		for (int i = 0; i < Max; i++) fp >> s.A[i];
//		fp.close();
//	}
//	void Sample::putdata(Sample &s)  // д����ļ�
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
//	Bag(int m[], int n = 0); 		// ���캯��
//	bool operator == (Bag &b);	// ���������==
//	int InBag(int ball);		// ĳһС���ڴ����ڵĳ��ִ���,����0��ʾ������
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
//bool Bag::operator == (Bag &b)	// ʵ�����������==
//{
//	if (num != b.num)	// Ԫ�ظ�����ͬ
//		return false;
//	for (int i = 0; i < num; i++)
//		//**********found**********
//	if (bag[i] != b.bag[i])	// TODO: ��������, �жϵ�ǰ������ÿ��Ԫ���ڵ�ǰ���Ӻʹ���b���Ƿ���ִ�����ͬ
//		//**********found**********
//		return false;		// TODO: ����һ�����
//	return true;
//}
//
//int Bag::InBag(int ball)
//{
//	int count = 0;
//	for (int i = 0; i < num; i++)
//		//**********found**********
//	if (ball == bag[i])	// TODO: ��������, �ж�С��ball�Ƿ��뵱ǰ������ĳһԪ����ͬ
//		//**********found**********
//		count++;	// TODO: ����һ�����
//	return count;
//}
//
//int main()
//{
//	int data[MAXNUM], n, i;
//	cin >> n;
//	for (i = 0; i < n; i++)
//		cin >> data[i];
//	Bag b1(data, n);		// �������Ӷ���b1
//	cin >> n;
//	for (i = 0; i < n; i++)
//		cin >> data[i];
//	Bag b2(data, n);		// �������Ӷ���b2
//	if (b1 == b2)			// ����b1��b2�Ƿ���ͬ
//		cout << "Bag b1 is same with Bag b2\n";
//	else
//		cout << "Bag b1 is not same with Bag b2\n";
//	return 0;
//}
