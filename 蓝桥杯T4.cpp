//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//
//using namespace std;
//
//int helper(int n, int r) //把n转化成r进制
//{
//	//vector<int> v;
//	if (n == 0)
//		return 0;
//	int temp = 0;
//	int sum = 0;
//	while (n > 0)
//	{
//		temp = n % r;
//		sum = sum*10 + temp;
//		n /= r;
//	}
//	int result = 0;
//	int sum_ = sum;
//	while (sum_ > 0)
//	{
//		
//		result = result*10 + sum_ % 10;
//		sum_ /= 10;
//	}
//	return result;
//}
//int main()
//{
//	int num = 0;
//	int r = 0;
//	cout << "输入你要转化的十进制非负数" << endl;
//	cin >> num;
//	cout << "输入你要转化的进制（2<=R<=9)" << endl;
//	cin >> r;
//	cout << "对应的数字为" << endl;
//	cout << helper(num, r) << endl;
//	system("pause");
//
//}