//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//using namespace std;
//class Point
//{
//public:
//	Point(){ X = Y = 0; }
//	Point(unsigned x, unsigned y){ X = x; Y = y; }
//	unsigned getx(){ return X; }
//	unsigned gety(){ return Y; }
//	void Print(){ cout << "Point(" << X << "," << Y << ")" << endl; }
//
//	friend Point operator+(Point &pt, int nOffset);
//	friend Point operator+(int nOffest, Point&pt);
//	friend Point operator+(Point &pt1, Point& pt2);
//
//private:
//	unsigned X;
//	unsigned Y;
//};
//Point operator+(Point&pt, int nOffset)
//{
//	Point ptTemp = pt;
//	ptTemp.X += nOffset;
//	ptTemp.Y += nOffset;
//	return ptTemp;
//}
//Point operator+(Point&pt1, Point&pt2)
//{
//	Point ptTemp = pt1;
//	ptTemp.X += pt2.X;
//	ptTemp.Y += pt2.Y;
//	return ptTemp;
//}
//int main()
//{
//	Point pt1(10, 10);
//	Point pt2(3, 5);
//	pt1.Print();
//	pt1 = pt1 + 5;
//	pt1.Print();
//	pt1 = pt1 + pt2;
//	pt1.Print();
//	system("pause");
//}