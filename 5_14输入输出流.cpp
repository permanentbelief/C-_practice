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
//	cin.getline(arr, SIZE,'\n'); //������ʵ������ ������Ĭ��ֵ'\n'
//	cout << "\nThe sentence entered is :" << endl
//		<< arr << endl;
//	system("pause");
//}
// cin.read cin.write cin.gcount
// istream��Ա����read
//��һ�������ֽ�д���ַ�����
//�����ȡ���ַ���������ָ������Ŀ�����Ա�־λfailbit
//istream��Ա����gcount
// �������һ����������ַ��������
//ostream��Ա����write
//��һ�������ֽڴ��ַ����������
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
// �����ݷ�
// hex 16����
// oct 8 ����
// dec 10����
// setbase ���������ݷ� ʹ��һ���������� 10 �� 8 �� 16��
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
// ���㾫��
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