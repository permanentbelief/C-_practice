#define _CRT_SECURE_NO_WARNINGS 1 
//ģ����ػ�
#include <iostream>
using namespace std;
//template<class T>
//bool IsEqual(T& left, T&right)
//{
//	return left == right;
//}
//template<>
//bool IsEqual<char*>(char*&left, char*&right)
//{
//	if (strcmp(left, right) == 0)
//		return true;
//	return false;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	cout << IsEqual(a, b) << endl;
//	//char* p1 = "hello";
//	//char* p2 = "hello";
//	char* p1 = new char [6];
//	char* p2 = new char [6];
//	strcpy(p1, "hello");
//	strcpy(p2, "hello");//��ַ��һ��
//	/*if (IsEqual(p1, p2))
//		cout << p1 << endl;
//	else
//		cout << p2 << endl;*/
//	cout << IsEqual(p1, p2) << endl;
//	system("pause");
//}
//����ģ����ػ�
// ԭ�� �� template<>

//
////��ģ����ػ� �ػ��ı������� �� 
////ģ��
//template <class T1 ,class T2>
//class Date
//{
//public:
//	Date() { cout << "Data<T1,T2>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//// ȫ�ػ�
//template<>
//class Date<int, int>
//{
//public:
//	Date() { cout << "Data<int,int>" << endl; }
//private:
//	int _d1;
//	char _d2;
//};
//// ƫ�ػ� ���ػ����ֲ���
//template <class T1>
//class Date<T1, int>
//{
//public:
//	Date() { cout << "Data<T1,int>" << endl; }
//private:
//	T1 _d1;
//	char _d2;
//};
////
////ƫ�ػ�����ģ�������һ������
//template <class T1, class T2>
//class Date<T1*,T2*>//�˴�Ҳ�ܸ�����
//{
//public:
//	Date() { cout << "Data<T1*,T2*>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//int main()
//{
//	Date<int, char> d1;
//	Date<int, int> d2;
//	Date<char, int> d3;
//	Date<char*, int*>d4;
//	system("pause");
//}
//��1+2+3+4+...+n Ҫ����ʹ�ó˳� for��while��if��else��switch��case���ȹؼ����ж�
//template <size_t N>
//class Sum
//{
//public:
//	enum{Ret = N + Sum<N-1>::Ret};//����ö�� ֱ��ȡRet,����ʱ����
//
//};
//template <>
//class Sum<1>
//{
//public:
//	enum{ Ret = 1 };
//
//};
//int main()
//{
//	cout << Sum<10>::Ret << endl;
//	system("pause");
//}
//������ȡ
//template<class T>
//T*Copy(T*dst, const T*src, size_t size)
//{
//	memcpy(dst, src, sizeof(T)*size);
//	return dst;
//}
//template<>
//string*Copy(string*dst, const string*src, size_t size)
//{
//
//	for (size_t i = 0; i < size; i++)
//	{
//		dst[i] = src[i];
//	}
//	return dst;
//}
//int main()
//{
//	string a1[3] = { "111", "222", "333" };
//	string a2[3];
//	Copy(a2, a1, 3);
//	for (auto:)
//
//}