#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;
//动态一维数组的建立与撤销
//int main()
//{
//	int n = 0;
//	char *pc = 0;
//	cout << "请输入动态数组的元素个数" << endl;
//	cin >> n;//运行时确定，例如输入12
//	pc = new char[n];
//	strcpy(pc, "堆内存的动态分配");
//	cout << pc << endl;
//	delete[]pc;//释放pc所指向的n个字符的内存空间
//	system("pause");
//	return 0;
//}
// 动态创建和删除一个m*n个元素的数组
//采用二维数组的指针
//const int m = 4;//行数
//const int n = 6;//列数
//void desarray(double(*)[6]);//函数声明
//void desarray(double(*score)[n])
//{
//	delete[] score;
//}
//int main()
//{
//	double(*score)[n];//定义二级指针变量
//	score = new double[m][n];//一次分配全部数组单元
//	if (score == 0)
//	{
//		cout << "Could not allocate.";
//		exit(1);
//	}
//	for (int i = 0; i < m; i++)//初始化
//	{
//		for (int j = 0; j < n; j++)
//		{
//			score[i][j] = i*n + j;
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << score[i][j] << '\t';
//			
//		}
//		cout << endl;
//	}
//	desarray(score);//调用函数撤销数组
//	
//	
//	system("pause");
//}
//方法二：采用指针数组，二次分配
//const int m = 4;
//const int n = 6;
//void destory(double **data)
//{
//	for (int i = 0; i < m; i++)//注意撤销次序，于设置相反
//	{
//		delete[] data[i];
//		delete[] data;
//	}
//}
//int main()
//{
//	double **data;//定义指针数组 相当于*data[m]
//	data = new double *[m];//设置行指针
//	if ((data) == 0)
//	{
//		cout << "Could not allocate Bye ...";
//		exit(-1);
//	}
//	for (int j = 0; j < m; j++)
//	{
//		data[j] = new double[n];//分配一个一维数组为一行
//		if (data[j] == 0)
//		{
//			cout << "Could not allocate Bye ...";
//			exit(-1);
//		}
//	}
//		for (int i = 0; i < m; i++)//初始化
//		{
//			for (int j = 0; j < n; j++)
//			{
//				data[i][j] = i*n + j;
//			}
//		}
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << data[i][j] << '\t';
//				
//			}
//			cout << endl;
//		}
//		system("pause");
//	
//}