#define _CRT_SECURE_NO_WARNINGS 1 
//7����д����׳�n!�ĳ���
//8����д������쳲��������еĵ�n���ǰn��֮�͡�
//#include <iostream>
//using namespace std;
//int Fac(int n)
//{
//	if ()
//	{
//		return n;
//	}
//	return Fac(n-1)
//}
//int main()
//{
	/*int n;
	int count = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		count *= i;
	}
	cout << count << endl;*/
//	system("pause");
//}
//#include<iostream>
//using namespace std;
//class Student
//{
//public:
//	void scoretotalcount(double s)
//	{
//		score = s;
//		total += score;
//		count++;
//	}
//	static double sum()
//	{
//		return  total;
//	}
//	static double average()
//	{
//		return total / count;
//	}
//private:
//	double score;
//	static double total;
//	static double count;
//};
//double Student::total = 0;
//double Student::count = 0;
//
//int main()
//{
//	Student stu;
//	double n, s;
//	cout << "����ͬѧ������" << endl;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//			cout << "��" << i << "��ͬѧ�ĳɼ���" << endl;
//			cin >> s;
//		stu.scoretotalcount(s);
//	}
//	cout << "�ܷ֣�" << Student::sum() << endl;
//	cout << "ƽ���֣�" << Student::average() << endl;
//	system("pause");
//}
//int Fac(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//
//		}
//	}
//}
char * mytrim(char * string)
{
	//assert(string);
	char * temp = string;
	while (*string)
	{
		if (*string == ' ')
		{
			*string = '\0';
		}
		string++;
	}
	return temp;
}
int  main()
{
	char arr[] = " hellow";
	char arr1[] = "  hellow";
	char arr2[] = "hellow";
	char arr3[] = "hellow   ";
	//printf("%s\n", arr1);

	//printf("%s\n", arr2);
	
	printf("%s\n", mytrim(arr3));
	printf("%s", arr3);
	///*int n = 0;
	//scanf("%d", &n);*/
	////printf("�������i���쳲���������");
	////scanf("%d", &n);
	////int a = 1;
	////int b = 1;
	////int c = 1;
	////for (int i = 3; i <= n; i++)  //1 1 2 3 5 8
	////{
	////	c = a + b;
	////	a = b; 
	////	b = c;
	////}
	///*printf("%d", Fac(n));*/
	//int a[10][10] = { 0 };
	//int i = 0;
	//int j = 0;
	//for (i = 1 ; i <= 10; i++)
	//{
	//	//a[i][i] = 1;
	//	a[0][i] = 1;
	//}
	//for (i = 1; i <= 10; i++)
	//{
	//	//a[0][i] = 1;
	//	for (j = 1; j <= i; j++)
	//	{
	//		a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	//	}
	//}
	//for (i = 1; i <= 10; i++)
	//{
	//	for (j = 1; j <=  i ; j++)
	//	{
	//		printf("%d ", a[i][j]);
	//	}
	//	printf("\n");
	//}


	system("pause");
}
//#include <stdio.h>
//int main()
//{
//	int a[100][100] = { 0 };
//	int n = 0;
//	printf("��������Ҫ��ӡ��������ε�����\n");
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		a[i][i] = 1;
//	}
//	for (i = 1; i <= n; i++)
//	{
//		a[0][i] = 1;
//		for (j = 1; j <= i; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//}