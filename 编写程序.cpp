#define _CRT_SECURE_NO_WARNINGS 1 
//1������fc(str, ch)�Ĺ�����ͳ�Ʋ������ַ�ch���ַ���str�г��ֵĴ�����
//���磺����fc(��every��, ��e��)�󷵻�2����Ϊ���ַ�����every�����ַ���e��
//������2�Ρ�д����������
//#include <iostream>
//#include <cassert>
//using namespace std;
//size_t fc(char * str, char ret)
//{
//	assert(str);
//	size_t count = 0;
//	while (*str)
//	{
//		if (*str == ret)
//		{
//			count++;
//		}
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char *arr = "exery";
//	cout << fc(arr,'e') << endl;
//	system("pause");
//}


//2������һ��Student�࣬�ڸ��ඨ���а�����
//һ�����ݳ�Աscore����������������̬���ݳ�Աtotal���ܷ֣���
//ѧ������count����Ա����scoretotalcount(double s) �������÷�����
//���ֺܷ��ۼ�ѧ����������̬��Ա����sum()���ڷ����ܷ֣���̬��Ա����average()
//������ƽ��ֵ����main()�����У�����ĳ��ͬѧ�ĳɼ�������������������ȫ��ѧ��
//���ֺܷ�ƽ���֡�
//#include <iostream>
//using namespace std;
//class Student
//{
//private:
//	double score;
//	static double total;
//	static int count;
//public:
//	//Student(double s, double t, int c)
//	//{
//
//	//}
//	void scoretotalcount(double s)
//	{
//		score = s;
//		count++;
//		total += score;
//	}
//	static double sum()
//	{
//		return total;
//	}
//	static double average()
//	{
//		return (total / count);
//	}
//};
// double Student::total = 0;
// int Student::count = 0;
// int main()
// {
//	 int i = 0;
//	 int n = 0;
//	 double s = 0;
//	 cout << "������ѧ��������" << endl;
//	 cin >> n;
//	 Student stu;
//	 for (i = 1; i <= n; i++)
//	 {
//		 cout << "�������" << i << "��ѧ���ĳɼ�";
//		 cin >> s;
//		 stu.scoretotalcount(s);
//	 }
//	 cout << "�ܷ֣�" << Student::sum() << endl;
//	 cout << "ƽ���֣�" << Student::average() << endl;
//	 
//	 
//	/* Student  s1,s2,s3;
//	 s1.scoretotalcount(89);
//	 s2.scoretotalcount(32);
//	 s3.scoretotalcount(32);
//	 s3.sum();
//	 s3.average();*/
//	 system("pause");
// }