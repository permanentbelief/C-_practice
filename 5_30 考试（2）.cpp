#define _CRT_SECURE_NO_WARNINGS 1 
//// proj2.cpp
//#include <iostream>
//using namespace std;
//
////���ڸò��ֲ���insert����ģ���ʵ��
//template <typename T>
//void insert(T setdata[], int &size, T item)
//{
//	for (int i = 0; i < size; i++)
//		//**********found**********
//	if (setdata[i] >item) {    // TODO: ��Ӵ��룬�жϲ���Ԫ�صĲ���λ��
//		for (int j = i; j < size; j++)
//			//**********found**********
//			setdata[size-j+i] = setdata[size+i-j-1]; // TODO: ���һ����䣬������λ�ú������Ԫ�������ƶ�һ��λ�� 
//		// ��ʾ���ƶ�Ԫ��Ӧ�����һ��Ԫ�ؿ�ʼ�ƶ� 
//		setdata[i] = item;    // �����Ԫ��
//		size++;
//		return;
//	}
//	//**********found**********
//	setdata[size - 1] = item;	// TODO: ���һ����䣬��Ԫ�ؼӵ����һ��λ����
//	size++;
//	return;
//}
//
//int main()
//{
//	int idata[10] = { 22, 35, 56, 128 }, iitem, isize = 4, dsize = 4, i;
//	double ddata[10] = { 25.1, 33.5, 48.9, 75.3 }, ditem;
//	cout << "Please input one integer number for inserting:";
//	cin >> iitem;
//	insert(idata, isize, iitem);
//	for (i = 0; i< isize; i++)
//		cout << idata[i] << ' ';
//	cout << endl;
//	cout << "Please input one double number for inserting:";
//	cin >> ditem;
//	insert(ddata, dsize, ditem);
//	for (i = 0; i < dsize; i++)
//		cout << ddata[i] << ' ';
//	cout << endl;
//	system("pause");
//	return 0;
//}
//{
//	int count = 0;
//	int persum = 0;
//	int i = 0;
//	for (i = 0; i< Max; i++)
//	{
//		while (s.A[i])
//		{
//			persum += s.A[i] % 10;
//			s.A[i] /= 10;
//		}
//		if (persum % 2 == 0)
//		{
//			count++;
//			s.totCnt += persum;
//			persum = 0;
//		}
//	}
//	s.totPjz = s.totCnt / count;
#include <iostream>
using namespace std;
class Vector
{
	int x, y;
public:
	Vector() {}
	Vector(int i, int j) { x = i; y = j; }
	void display()
	{
		cout << "(" << x << "," << y << ")";
	}
	//**********found**********
	friend Vector add(Vector& v1, Vector& v2)
	{
		Vector v;
		v.x = v1.x + v2.x;
		v.y = v1.y + v2.y;
		return v;
	}
	//**********found**********
	friend Vector sub(Vector& v1, Vector& v2)
	{
		Vector v;
		v.x = v1.x - v2.x;
		v.y = v1.y - v2.y;
		return v;
	}
};
int main()
{
	Vector v1(10, 20), v2(4, 5), v3;
	//**********found**********
	v3 = add(v1, v2);
	cout << "������:" << endl;
	cout << " "; v1.display(); cout << "+"; v2.display();
	cout << "="; v3.display(); cout << endl;
	//**********found********** 
	v3 = sub(v1, v2);
	cout << " "; v1.display(); cout << "-"; v2.display();
	cout << "="; v3.display(); cout << endl;
	system("pause");
}
