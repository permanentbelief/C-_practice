//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int n;  // 一共n个数
//	int k; //  找第k大的值
//	while (cin >> n >> k) // 一共输入n个数
//	{
//		vector<int> v;
//		for (int i = 0; i < n; i++)
//		{
//			int k = 0;
//			cin >> k;
//			v.push_back(k);
//		}
//		
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n - i - 1; j++)
//			{
//				if (v[j] >= v[j + 1])
//				{
//					swap(v[j+1], v[j]);
//				}
//			}
//		}
//		int flag = 0;
//		int count = 1;
//		for (int i = 0; i < v.size()-1; i++) // 1 3 3 7 2 5 1 2 4 6
//		{									//  1 1 2 2 3   
//			
//			if (v[i] != v[i + 1])
//			{ 
//				count++;
//			}
//			if (count == k)
//			{
//				
//				flag = i+1;
//				break;
//			}
//		}
//		if (count < k)
//		{
//			cout << "NO RESULT" << endl;
//		}
//		else
//		cout << v[flag] << endl;
//	}
//	system("pause");
//}
