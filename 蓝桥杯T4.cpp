//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//
//using namespace std;
//
//int helper(int n, int r) //��nת����r����
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
//	cout << "������Ҫת����ʮ���ƷǸ���" << endl;
//	cin >> num;
//	cout << "������Ҫת���Ľ��ƣ�2<=R<=9)" << endl;
//	cin >> r;
//	cout << "��Ӧ������Ϊ" << endl;
//	cout << helper(num, r) << endl;
//	system("pause");
//
//}