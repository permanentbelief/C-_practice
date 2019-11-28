//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//#include <vector>
//using namespace std;
//int heaper(int n)
//{
//	if (n == 0)
//		return 0;
//	vector <int> v(n+1);
//	v[0] = 0;
//	v[1] = 1;
//	v[2] = 2;
//	for (int i = 3; i <= n; i++)
//	{
//		v[i] = v[i - 1] + v[i - 2];
//	}
//	return v[n];
//}
//int main()
//{
//	int n;
//	cout << "请输入n阶楼梯" << endl;
//	cin >> n;
//	
//	cout <<"你有的办法数" << heaper(n) << endl;
//	system("pause");
//}