#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;
//��̬һά����Ľ����볷��
//int main()
//{
//	int n = 0;
//	char *pc = 0;
//	cout << "�����붯̬�����Ԫ�ظ���" << endl;
//	cin >> n;//����ʱȷ������������12
//	pc = new char[n];
//	strcpy(pc, "���ڴ�Ķ�̬����");
//	cout << pc << endl;
//	delete[]pc;//�ͷ�pc��ָ���n���ַ����ڴ�ռ�
//	system("pause");
//	return 0;
//}
// ��̬������ɾ��һ��m*n��Ԫ�ص�����
//���ö�ά�����ָ��
//const int m = 4;//����
//const int n = 6;//����
//void desarray(double(*)[6]);//��������
//void desarray(double(*score)[n])
//{
//	delete[] score;
//}
//int main()
//{
//	double(*score)[n];//�������ָ�����
//	score = new double[m][n];//һ�η���ȫ�����鵥Ԫ
//	if (score == 0)
//	{
//		cout << "Could not allocate.";
//		exit(1);
//	}
//	for (int i = 0; i < m; i++)//��ʼ��
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
//	desarray(score);//���ú�����������
//	
//	
//	system("pause");
//}
//������������ָ�����飬���η���
//const int m = 4;
//const int n = 6;
//void destory(double **data)
//{
//	for (int i = 0; i < m; i++)//ע�⳷�������������෴
//	{
//		delete[] data[i];
//		delete[] data;
//	}
//}
//int main()
//{
//	double **data;//����ָ������ �൱��*data[m]
//	data = new double *[m];//������ָ��
//	if ((data) == 0)
//	{
//		cout << "Could not allocate Bye ...";
//		exit(-1);
//	}
//	for (int j = 0; j < m; j++)
//	{
//		data[j] = new double[n];//����һ��һά����Ϊһ��
//		if (data[j] == 0)
//		{
//			cout << "Could not allocate Bye ...";
//			exit(-1);
//		}
//	}
//		for (int i = 0; i < m; i++)//��ʼ��
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