#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//#include <string>
//using namespace std;
//class Account
//{
//private:
//	string no;//账号
//	string name;//用户名
//	double balance;//余额
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
//	Account a("20130046", "吴大雄", 200);	a.show();
//	a.credit(1000);	a.show();
//	a.debit(800);	a.show();
//	a.debit(500);	a.show();
//	system("pause");
//	return 0;
//
//}
//#include <iostream>					// 预处理命令
//using namespace std;					// 使用标准命名空间std
//// 直角坐标类
//class Point
//{
//private:
//	int x, y;							// 横坐标与纵坐标
//public:
//	Point(int a, int b) : x(a), y(b){ }		// 构造函数
//	void Set(int a, int b);				// 设置坐标值
//	int GetX() const{ return x; }		// 返回横坐标
//	int GetY() const{ return y; }		// 返回纵坐标
//};
//
//// 直角坐标类及相关函数的实现部分
//void Point::Set(int a, int b)				// 设置坐标值
//{
//	x = a;							// 横坐标
//	y = b;							// 纵坐标
//}
//void Show(const Point &pt)				// 显示坐标值
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