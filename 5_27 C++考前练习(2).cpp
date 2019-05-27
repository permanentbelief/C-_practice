#define _CRT_SECURE_NO_WARNINGS 1 
//1．函数fc(str, ch)的功能是统计并返回字符ch在字符串str中出现的次数。
//例如：调用fc(“every”, ’e’)后返回2，因为在字符串”every”中字符’e’
//出现了2次。写出完整程序。
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


//2．定义一个Student类，在该类定义中包括：
//一个数据成员score（分数）、两个静态数据成员total（总分）、
//学生人数count、成员函数scoretotalcount(double s) 用于设置分数、
//求总分和累计学生人数。静态成员函数sum()用于返回总分，静态成员函数average()
//用于求平均值。在main()函数中，输入某班同学的成绩，并调用上述函数求全班学生的总分和平均分。
//#include <iostream>
//using namespace std;
//class Student
//{
//private:
//	double score;
//	static double total ;//总分
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
//	cout << "输入学生个数：";
//	cin >> n;
//	cout << "输入学生成绩：";
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s;
//		a[i].scoretotalcount(s);
//	}
//	cout << "班级总分为：";
//	cout << Student::sum() << endl;
//	cout << "班级平均分：";
//	cout << Student::average() << endl;
//	system("pause");
//}