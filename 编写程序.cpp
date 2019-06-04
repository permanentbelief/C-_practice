#define _CRT_SECURE_NO_WARNINGS 1 
//1．函数fc(str, ch)的功能是统计并返回字符ch在字符串str中出现的次数。
//例如：调用fc(“every”, ’e’)后返回2，因为在字符串”every”中字符’e’
//出现了2次。写出完整程序。
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


//2．定义一个Student类，在该类定义中包括：
//一个数据成员score（分数）、两个静态数据成员total（总分）、
//学生人数count、成员函数scoretotalcount(double s) 用于设置分数、
//求总分和累计学生人数。静态成员函数sum()用于返回总分，静态成员函数average()
//用于求平均值。在main()函数中，输入某班同学的成绩，并调用上述函数求全班学生
//的总分和平均分。
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
//	 cout << "请输入学生人数：" << endl;
//	 cin >> n;
//	 Student stu;
//	 for (i = 1; i <= n; i++)
//	 {
//		 cout << "请输入第" << i << "个学生的成绩";
//		 cin >> s;
//		 stu.scoretotalcount(s);
//	 }
//	 cout << "总分：" << Student::sum() << endl;
//	 cout << "平均分：" << Student::average() << endl;
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