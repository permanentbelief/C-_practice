#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//10. ���һ��������Complex�������ظ����ĳ˺�����������
//��operator *()��operator << ()�������������ʽΪ(a + bi)��
//�����ĳ˷�����Ϊ��(a + bi)*(c + di) = (ac - bd) + (ad + bc)i��
//���������д��������������󣬲��������������Ȼ��������������ĳ˻���
//#include <iostream>
//using namespace std;
//class Complex
//{
//private:
//	int real;
//	int imag;
//public:
//	Complex(int r = 0, int i = 0)
//	{
//		real = r;
//		imag = i;
//	}
//	friend ostream&operator<<(ostream&out, Complex a)
//	{
//		if (a.imag!=0)
//		out << "(" << a.real << "," << a.imag << "i)" << endl;
//		else
//			out << "(" << a.real << " )" << endl;
//		return out;
//	}
//	Complex operator*( Complex b)//(ac - bd) + (ad + bc)i��
//	{
//		return Complex(real*b.real - imag*b.imag, real*b.imag + imag*b.real);
//	}
//};
//int main()
//{
//	Complex a,b(1,1),c(2,2);
//
//	cout << b;
//	cout << c;
//	a = b*c;
//	cout << a;
//	system("pause");
//}



//11. ����һ��Student�࣬����ѧ�š�������������Ӣ�������ơ��ֵܷ���Ϣ��
//Ҫ���ܷ�����ѧ��Ӣ�����������ſγɼ�֮�ͼ�����������������д�������
//ѧ�����󣬲���������Ϣ��
//class Student
//{
//private:
//	string no; //ѧ��
//	string name;//����
//	double math;
//	double English;
//	double design;
//	double total = 0;
//public:
//	Student(string n, string na, double m, double e, double d)
//		:no(n), name(na), math(m), English(e), design(d)
//	{}
//	void Settotal()
//	{
//		total = math + English + design;
//	}
//	void show()
//	{
//		cout << "����" << name << endl;
//		cout << "ѧ��" << no << endl;
//		cout << "��ѧ" << math << endl;
//		cout << "Ӣ��" << English << endl;
//		cout << "���" << design << endl;
//		cout << "�ܷ�" << total << endl;
//	}
//
//};
//int main()
//{
//	Student s1("201503411043", "Ҧ־Զ",96,98,98);
//	//s1.Settotal();
//	s1.show();
//	system("pause");
//
//}

//12������һ�������˻�Account�࣬�����˺š��û�������balance������Ϣ��
//��ʼֵ��������ڵ���0����Ӧ������Ǯ��Ա����credit()��ȡǮ��Ա����debit()��
//���ȡ�����������balance���ֲ��䣬�����������ʾ��Ϣ��Debit amou
//nt exceeded account blance.�������������д���һ���˻����󣬳�ʼ�˻����Ϊ200Ԫ��
//���ԭʼ��Ϣ������1000Ԫ������˻������Ϣ��ȡ��800Ԫ������˻������Ϣ����ȡ��500Ԫ��
//����˻������Ϣ��
//class Account
//{
//private:
//	string no;
//	string name;
//	double balance;
//public:
//	Account(string no, string name, double balance = 0)
//	{
//		this->no = no;
//		this->name = name;
//		if (balance < 0)
//			this->balance = 0;
//		else
//			this->balance = balance;
//	}
//	void credit(double c)
//	{
//		balance += c;
//	}
//	void debit(double c)
//	{
//		if (c > balance)
//			cerr << "Debit amount exceeded account blanc." << endl;
//		else
//		balance -= c;
//	}
//	void show()
//	{
//		cout << "AccountNo:" << no << endl;
//		cout << "AccountName:" << name << endl;
//		cout << "Balance:" << balance << endl;
//		
//
//	}
//};
//int main()
//{
//	Account a("20130046", "�����", 200);
//	a.show();
//	a.credit(1000);
//	a.show();
//	a.debit(800);
//	a.show();
//	system("pause");
//}