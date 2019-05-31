#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class Sample
//{
//	// ERROR  **********found**********
//	int n = 0;
//
//	static int sum;
//public:
//	// ERROR  **********found**********
//	void  Sample(int x)
//
//	{
//		n = x;
//	}
//	void add()
//	{
//		sum += n;
//	}
//	void display()
//	{
//		cout << "n=" << n << ",sum=" << sum << endl;
//	}
//};
//// ERROR  **********found**********
//int sum = 0;
//int main()
//{
//	Sample a(2), b(3), c(5);
//	a.add();
//	a.display();
//	b.add();
//	b.display();
//	c.add();
//	c.display();
//}

//#include <iostream>
//#include <math.h>
//using namespace std;
//class Triangle
//{
//	int x, y, z;
//	double area;
//public:
//	Triangle(int i, int j, int k)
//	{
//		double s;
//		x = i; y = j; z = k;
//		s = (x + y + z) / 2.0;
//		//**********found**********
//		area = sqrt(s * (s - x) * (s - y) * (s - z));
//
//	}
//	void display()
//	{
//		cout << "Area=" << area << endl;
//	}
//	//**********found**********
//	friend double operator+(Triangle t1, Triangle t2)
//	{
//		//**********found**********
//		return _______________;
//
//	}
//};
//int main()
//{
//	Triangle t1(3, 4, 5), t2(4, 5, 6);
//	double s;
//	cout << "t1:"; t1.display();
//	cout << "t2:"; t2.display();
//	//**********found**********
//	s = t1.display() + t2.display();
//
//	cout << "×ÜÃæ»ý=" << s << endl;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int i = 4;
//	int count = 0;
//	while (1)
//	{
//		i--;        //4 1 3 2 2 3 
//		if (i == 0)
//			break;
//		count++;
//	}
//	cout << count;
//	system("pause");
//}