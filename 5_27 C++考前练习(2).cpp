#define _CRT_SECURE_NO_WARNINGS 1 
//1������fc(str, ch)�Ĺ�����ͳ�Ʋ������ַ�ch���ַ���str�г��ֵĴ�����
//���磺����fc(��every��, ��e��)�󷵻�2����Ϊ���ַ�����every�����ַ���e��
//������2�Ρ�д����������
//#include <iostream>
//#include <cassert>
//using namespace  std;
//int fc(char* str, char ret)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		if(*str == ret)
//		{
//			count++;
//		}
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "every";
//	cout << fc(arr, 'e') << endl;
//	system("pause");
//}


//2������һ��Student�࣬�ڸ��ඨ���а�����
//һ�����ݳ�Աscore����������������̬���ݳ�Աtotal���ܷ֣���
//ѧ������count����Ա����scoretotalcount(double s) �������÷�����
//���ֺܷ��ۼ�ѧ����������̬��Ա����sum()���ڷ����ܷ֣���̬��Ա����average()
//������ƽ��ֵ����main()�����У�����ĳ��ͬѧ�ĳɼ�������������������ȫ��ѧ�����ֺܷ�ƽ���֡�
//#include <iostream>
//using namespace std;
//class Student
//{
//private:
//	double score;
//	static double total ;//�ܷ�
//	static int count;
//public:
//	static double sum();
//	static double average();
//	void scoretotalcount(double s);
//
//	
//};
//double Student::total = 0;
//int Student::count = 0;
//void Student::scoretotalcount(double s)
//{
//	score = s;
//	total += score;
//	count++;
//}
//double Student::sum()
//{
//	return total;
//}
//double Student::average()
//{
//	return total / count;
//}
//int main()
//{
//	double s;
//	int n;
//	Student a[10];
//	cout << "����ѧ��������";
//	cin >> n;
//	cout << "����ѧ���ɼ���";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s;
//		a[i].scoretotalcount(s);
//	}
//	cout << "�༶�ܷ�Ϊ��";
//	cout << Student::sum() << endl;
//	cout << "�༶ƽ���֣�";
//	cout << Student::average() << endl;
//	system("pause");
//}