#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//#include <string>
//using namespace std;
//class Account
//{
//private:
//	string no;//�˺�
//	string name;//�û���
//	double balance;//���
//public:
//	Account(string no, string name, double balance = 0)
//	{
//		this->no = no;
//		this->name = name;
//		if (balance < 0)
//		{
//			this->balance = 0;
//		}
//		else
//			this->balance = balance;
//	}
//	void credit(double c)
//	{
//		balance += c;
//	}
//	void debit(double d)
//	{
//		if (d > balance)
//			cerr << "Debit amount exceeded account blance." << endl;
//		else
//			balance = d;
//	}
//	void show()
//	{
//		cout << "AccountNo:" << no << endl;
//		cout << "AccountName:" << name << endl;
//		cout << "Balance:" << balance << endl << endl;
//	}
//};
//int main()
//{
//	Account a("20130046", "�����", 200);	a.show();
//	a.credit(1000);	a.show();
//	a.debit(800);	a.show();
//	a.debit(500);	a.show();
//	system("pause");
//	return 0;
//
//}
//#include <iostream>					// Ԥ��������
//using namespace std;					// ʹ�ñ�׼�����ռ�std
//// ֱ��������
//class Point
//{
//private:
//	int x, y;							// ��������������
//public:
//	Point(int a, int b) : x(a), y(b){ }		// ���캯��
//	void Set(int a, int b);				// ��������ֵ
//	int GetX() const{ return x; }		// ���غ�����
//	int GetY() const{ return y; }		// ����������
//};
//
//// ֱ�������༰��غ�����ʵ�ֲ���
//void Point::Set(int a, int b)				// ��������ֵ
//{
//	x = a;							// ������
//	y = b;							// ������
//}
//void Show(const Point &pt)				// ��ʾ����ֵ
//{
//	cout << pt.GetX() << "  " << pt.GetY() << endl;
//}
//int main()
//{
//	Point a[5] = { Point(0, 0), Point(1, 1), Point(2, 2), Point(3, 3), Point(4, 4) };
//	Point *p = a;
//	p->Set(5, 9);
//	a[3].Set(6, 8);
//	for (int i = 0; i < 5; i++)
//	{
//		Show(*p++);
//	}
//	system("pause");
//}
//#include <iostream>
//using namespace std;
//class Array
//{
//private:
//	int *elem;
//	int size;
//public:
//	Array(int a[], int sz) :elem(a), size(sz){}
//	int GetSize() { return size; }
//	int &operator[](int pos){ return elem[pos - 1]; }
//
//};
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//	Array obj(a, 5);
//	obj[1] = 8;
//	for (int i = 0; i < obj.GetSize(); i++)
//	{
//		cout << obj[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//}