#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//int main()
//{
//	char s[20], *p, *q;
//	p = s;
//	q = s;
//
//	cin >> s;
//	q += 6;
//	cout << *p - *q << endl;
//	system("pause");
//}
//class AA
//{
//public:
//	AA()
//	{
//		cout << "AA" ;
//	}
//	//virtual void f(){ cout << "AA"; }
//};
//class BB : public AA
//{
//public:
//	BB() { cout << "BB"; }
//};
//class CC : public BB
//{
//public:
//	virtual void f()
//	{
//		//BB::f(); cout << "CC";
//	}
//};
//int main()
//{
//	//AA aa, *p;
//	BB bb;
//	//CC cc;
//	system("pause");
//}
// proj3.cpp
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class intArray
{
private:
	int *array;  //���������׵�ַ
public:
	int length;  //�����е���������
	//���캯�������ļ��ж�ȡ�������ڳ�ʼ���¶��󡣲������ļ�����
	intArray(const char *filename);
	int & operator[](int i); //�����������ʵ�ֶ���ֵ��
	~intArray();
};

//*************333***********
//intArray::intArray(const char* filename)
//{
//
//
//	ifstream myFile(filename);
//	int len = 300;
//	array = new int[len];
//	length = 0;
//	while (myFile >> array[length++]);
//	length--;
//	myFile.close();
//}
//
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
//	system("pause");
//}
