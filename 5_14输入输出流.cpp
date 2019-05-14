#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;
//int main()
//{
//	char* word = "again";
//	cout << "Value of word is:" << word << endl
//		<< "Value of static_cast_cast<void*>(word) is:"
//		<< static_cast<void*>(word) << endl;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int character ;
//	cout << "Before input , cin.eof() is " <<cin.eof() << endl
//	 << "Enter a sentence followed by end-of-file:" << endl;
//	system("pause");
//	while ((character = cin.get()) != EOF)
//		cout.put(character);
//	cout << "\nEOF in this system is :" <<character << endl;
//	cout << "After inp() isut of EOF, cin.eof " << cin.eof() << endl;
//	
//	system("pause");
//}
// cin.get
//int main()
//{
//	const int SIZE = 80;
//	char arr1[SIZE];
//	char arr2[SIZE];
//	cout << "Enter a sentence:" << endl;
//	cin >> arr1;
//	cout << "\nThe string read with cin was:" << endl
//		<< arr1 << endl << endl;
//	cin.get(arr2, SIZE);
//	cout << "\nThe string read with cin was:" << endl <<
//		arr2 << endl;
//	system("pause");
//}
//int main()
//{
//	const int SIZE = 80;
//	char arr[SIZE];
//	cout << "Enter a sentence:" << endl;
//	cin.getline(arr, SIZE,'\n'); //参数其实有三个 第三个默认值'\n'
//	cout << "\nThe sentence entered is :" << endl
//		<< arr << endl;
//	system("pause");
//}
// cin.read cin.write cin.gcount
// istream成员函数read
//把一定量的字节写入字符数组
//如果读取的字符个数少于指定的数目，可以标志位failbit
//istream成员函数gcount
// 返回最近一次输入操作字符读入个数
//ostream成员函数write
//把一定量的字节从字符数组中输出
//int main()
//{
//	const int SIZE = 80;
//	char arr[SIZE];
//	cout << "Enter a sentence:" << endl;
//	cin.read(arr, 20);
//	cout << endl;
//	cout.write(arr, cin.gcount());
//	system("pause");
//	return 0;
//}
// 流操纵符
// hex 16进制
// oct 8 进制
// dec 10进制
// setbase 参数化操纵符 使用一个整数设置 10 ， 8 ， 16；
#include <iomanip>
//int main()
//{
//	int number = 0;
//	cin >> number;
//	cout << number << "in hexadecimal is :" <<
//		hex << number << endl;
//	cout << dec << number << "in octal  is :" <<
//		oct << number << endl;
//	system("pause");
//}
// 浮点精度
//#include <cmath>
//int main()
//{
//	double root2 = sqrt(2.0);
//	int a;
//	cout << fixed;
//	for (a= 0; a <= 9; a++)
//	{
//		cout.precision(a);
//		cout << root2 << endl;
//	}
//	cout << endl;
//	for (a = 0; a <= 9; a++)
//	{
//		cout << setprecision(a) << root2 << endl;
//	}
//	system("pause");
//}