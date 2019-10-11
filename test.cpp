#define _CRT_SECURE_NO_WARNINGS 1 



#define Max_reader 100    //���Ķ�����
#define Max_book  100   //����ͼ����
#define Max_bookor 5    //ÿλ�����������

#include<iostream>
#include<conio.h> //����̨������������ĺ���
#include<fstream>//�ļ���
#include<iomanip> //�������������ʽ
#include<string.h>

using namespace std;



//class Time // ʱ����


class Book


{//ͼ���࣬ʵ�ֶ�ͼ���������ͼ��ı�ţ����������������ȹ���
private:
	int tag;                //ɾ����� 1:��ɾ 0:δɾ
	int no;                 //ͼ����
	char book_name[20];     //ͼ������  
	char author_name[20];   //ͼ������
	char classify_num[20];  //ͼ�����
	char public_unit[20];   //ͼ�����
	int public_time;		//����ʱ��
	double book_price;		//ͼ��۸�
	int onshelf;			//�Ƿ��ټ� 1:�ټ� 2:�ѽ�
public:
	Book(){ ; }
	char *Get_book_name()   //��ȡ����
	{
		return book_name;
	}
	char *Get_author_name() //��ȡ������
	{
		return author_name;
	}

	char *Get_classify_num() //��ȡ�����
	{
		return classify_num;
	}
	char *Get_public_unit() //��ȡ��������
	{
		return public_unit;
	}
	int Get_public_time()    //��ȡ����ʱ��
	{
		return public_time;
	}
	double Get_book_price()	 //��ȡͼ��۸� 
	{
		return book_price;
	}
	int Get_no()	          //��ȡͼ����
	{
		return no;
	}
	int Get_tag()			 //��ȡɾ�����
	{
		return tag;
	}

	void setbook_name(char na[])  //��������
	{
		strcpy(book_name, na);
	}
	void setauthor_namebook_name(char aa[]) //����������
	{
		strcpy(author_name, aa);
	}
	void setclassify_num(char fe[])    //���÷����
	{
		strcpy(classify_num, fe);
	}
	void setpublic_unit(char ca[])     //���ó�����
	{
		strcpy(public_unit, ca);
	}

	void setpublic_time(int time)      //����ʱ��
	{
		public_time = time;
	}
	void setbook_price(double price)    //����ͼ��۸�
	{
		book_price = price;
	}
	void setonshelf(int oa)
	{
		onshelf = oa;
	}
	void Delete_book()					//ɾ��ͼ��
	{
		char i;
		cout << "ȷ��ɾ���� Y/N ?" << endl;
		cin >> i;
		if (i == 'y' || i == 'Y')
			tag = 1;
	}
	void addbook(int n, char *na, char *aa, char *fe, char *ca, int time, double price, int oa)   //����ͼ��
	{
		tag = 0;
		no = n;
		strcpy(book_name, na);
		strcpy(author_name, aa);
		strcpy(public_unit, ca);
		strcpy(classify_num, fe);
		public_time = time;
		book_price = price;
		onshelf = oa;
	}
	int Borrow_book()   //�������
	{
		if (onshelf>0)
		{
			onshelf--;
			return 1;
		}
		return 0;
	}
	void retbook()    //�������
	{
		onshelf++;
	}
	void disp() //���ͼ��
	{
		cout << setw(3) << no << setw(10) << book_name << setw(10) << author_name << setw(10) << classify_num << setw(15) << public_unit << setw(10) << public_time << setw(10) << book_price << setw(10) << onshelf << endl;
	}
};


class Manager   //ͼ����࣬ʵ�ֶ�ͼ���ά�������ң�ɾ����
{
private:
	int top;                        //ͼ���¼ָ��
	Book book[Max_book];            //ͼ���¼
public:
	Manager()					//���캯������book.txt����book[]��
	{
		Book b;
		top = -1;
		fstream file("book.txt", ios::in);
		while (1)
		{
			file.read((char *)&b, sizeof(b));
			if (!file)
				break;
			top++;
			book[top] = b;
		}
		file.close();
	}
	void clear()							//ȫɾ
	{
		char i;
		cout << "ȷ��ȫ��ɾ����Y/N ?" << endl;
		cin >> i;
		if (i == 'y' || i == 'Y')
			top = -1;
	}
	int addbook(int n, char *na, char *aa, char *fe, char *ca, int time, double price, int oa) //����ͼ��
	{
		Book *p = option1(n);
		if (NULL == p)
		{
			top++;
			book[top].addbook(n, na, aa, fe, ca, time, price, oa);
			return 1;
		}
		return 0;
	}
	Book *option1(int bookid)     //����Ų���ͼ��
	{
		for (int i = 0; i <= top; i++)
		if (book[i].Get_no() == bookid &&book[i].Get_tag() == 0)
		{
			return &book[i];
		}
		return NULL;
	}
	Book *option2(char a[])   //����������ͼ��
	{
		Book *e;
		int r = 0;
		for (int i = 0; i <= top; i++)
		if (strcmp(book[i].Get_book_name(), a) == 0 && book[i].Get_tag() == 0)
		{
			if (r == 0)
				cout << setw(3) << "���" << setw(10) << "����" << setw(10) << "����" << setw(10) << "�����" << setw(15) << "������" << setw(10) << "����ʱ��" << setw(10) << "ͼ��۸�" << setw(10) << "����" << endl;
			e = &book[i];
			e->disp();
			r++;
		}
		if (r == 0)
			cout << "�Ҳ�������!" << endl;
		return NULL;
	}
	Book *option3(char a[])           //�����߲���ͼ��
	{
		Book *e;
		int r = 0;
		for (int i = 0; i <= top; i++)
		if (strcmp(book[i].Get_author_name(), a) == 0 && book[i].Get_tag() == 0)
		{
			if (r == 0)
				cout << setw(3) << "���" << setw(10) << "����" << setw(10) << "����" << setw(10) << "�����" << setw(15) << "������" << setw(10) << "����ʱ��" << setw(10) << "ͼ��۸�" << setw(10) << "����" << endl;
			e = &book[i];
			e->disp();
			r++;
		}
		if (r == 0)
			cout << "�Ҳ�������!" << endl;
		return NULL;
	}
	Book *option4(char a[])    //�����������ͼ��
	{
		Book *e;
		int r = 0;
		for (int i = 0; i <= top; i++)
		if (strcmp(book[i].Get_public_unit(), a) == 0 && book[i].Get_tag() == 0)
		{
			if (r == 0)cout << setw(3) << "���" << setw(10) << "����" << setw(10) << "����" << setw(10) << "�����" << setw(15) << "������" << setw(10) << "����ʱ��" << setw(10) << "ͼ��۸�" << setw(10) << "����" << endl;
			e = &book[i];
			e->disp();
			r++;
		}
		if (r == 0)
			cout << "�Ҳ�������!" << endl;
		return NULL;
	}
	void bookdata(); //ͼ�����Ϣ
	void disp()
	{
		for (int i = 0; i <= top; i++)
		if (book[i].Get_tag() == 0)
			book[i].disp();
	}
	~Manager()
	{//������������book[]д��book.txt�ļ���
		fstream file("book.txt", ios::out);
		for (int i = 0; i <= top; i++)
		if (book[i].Get_tag() == 0)
			file.write((char *)&book[i], sizeof(book[i]));
		file.close();
	}
};
void Manager::bookdata()
{
	char choice3;
	char bbook_name[40];//����
	char aubook_name[40];//������
	char bclassify_num[40];//�����
	char cbook_name[40];//������
	int time;//����ʱ��
	double price;//�۸�
	char ch;
	int choice4;
	int bookid;
	int bookod;
	Book *b;
	while (choice3 != '0')
	{
		cout << "\n\t\t\t              --- ͼ �� �� Ϣ ---\n" << endl;
		cout << "\t\t\t              --- 1.��  �� ---" << endl;
		cout << "\t\t\t              --- 2.��  �� ---" << endl;
		cout << "\t\t\t              --- 3.ɾ  �� ---" << endl;
		cout << "\t\t\t              --- 4.��  �� ---" << endl;
		cout << "\t\t\t              --- 5.��  ʾ ---" << endl;
		cout << "\t\t\t              --- 6.ȫ  ɾ ---" << endl;
		cout << "\t\t\t              --- 0.��  �� ---" << endl;
		cout << "\t\t\t ��ѡ��";
		cin >> choice3;
		switch (choice3)
		{
		case '1':
			cout << "\t\t\t������������:";
			cin >> bookid;
			b = option1(bookid);
			if (b != NULL)
			{
				cout << "\t\t\t�ñ���Ѿ����ڣ��������!" << endl;
				break;
			}
			cout << "\t\t\t��������������:";
			cin >> bbook_name;
			cout << "����������������:";
			cin >> aubook_name;
			cout << "��������������:";
			cin >> bclassify_num;
			cout << "���������������:";
			cin >> cbook_name;
			cout << "�������������ʱ��:";
			cin >> time;
			cout << "������ͼ��۸�:";
			cin >> price;

			cout << "��������������:";
			cin >> bookod;
			addbook(bookid, bbook_name, aubook_name, bclassify_num, cbook_name, time, price, bookod);

			char input;
			{
				cout << "\n\t\t\t** �� �� �� �� Y/N ?**\n" << endl;
				cout << "\t\t\t** 1. Y �� �� **" << endl;
				cout << "\t\t\t** 0. N �� �� �� **" << endl;
				cout << "\t\t\t �� ѡ ��: ";
				cin >> input;
				switch (input)
				{
				case '1':

					cout << "���ͼ��ɹ�!";
					break;
				case '0':
					break;
				}
			}
			getch();
			break;
		case '2':                                                    //����
			cout << "������ͼ����:";
			cin >> bookid;
			b = option1(bookid);
			if (b == NULL)
			{
				cout << "��ͼ�鲻����! " << endl;
				break;
			}
			cout << "��ͼ�����Ϣ�ǣ�" << endl;
			cout << setw(3) << "���" << setw(10) << "����" << setw(10) << "����" << setw(10) << "�����" << setw(15) << "������" << setw(10) << "����ʱ��" << setw(10) << "ͼ��۸�" << setw(10) << "����" << endl;
			b->disp();
			cout << "�Ƿ��޸�?( y/n ):";
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				int a;
				cout << "\n\t\t\t** ͼ �� �� �� **\n" << endl;
				cout << "\t\t\t** 1.�� �� �� ��  **" << endl;
				cout << "\t\t\t** 2.�� �� �� ��  **" << endl;
				cout << "\t\t\t** 3.�� �� �� �� �� **" << endl;
				cout << "\t\t\t** 4.�� �� �� �� �� **" << endl;
				cout << "\t\t\t** 5.�� �� �� �� ʱ ��**" << endl;
				cout << "\t\t\t** 6.�� �� ͼ �� �� ��**" << endl;
				cout << "\t\t\t** 7.�� �� ͼ �� �� ��**" << endl;
				cout << "\t\t\t** 0.��  �� **" << endl;
				cout << "\t\t\t ��ѡ��";
				cin >> a;
				switch (a)
				{
				case 1: cout << "�������µ�����:";
					cin >> bbook_name; b->setbook_name(bbook_name); break;
				case 2: cout << "�������µ�����:";
					cin >> aubook_name; b->setauthor_namebook_name(aubook_name); break;
				case 3: cout << "�������µķ����:";
					cin >> bclassify_num; b->setclassify_num(bclassify_num); break;
				case 4: cout << "���������������:";
					cin >> cbook_name; b->setpublic_unit(cbook_name); break;
				case 5: cout << "�������������ʱ��:";
					cin >> time; b->setpublic_time(time); break;
				case 6: cout << "������ͼ��۸�:";
					cin >> price; b->setbook_price(price); break;
				case 7: cout << "�������µĴ���:";
					cin >> bookod; b->setonshelf(bookod); break;
				case 0: break;
				}
			}
			cout << "�޸�ͼ��ɹ�!";
			getch();
			break;
		case '3':
			cout << "������ͼ����:";
			cin >> bookid;
			b = option1(bookid);
			if (b == NULL)
			{
				cout << "��ͼ�鲻���ڣ��޷�ɾ��!" << endl;
				break;
			}
			b->Delete_book();
			cout << "ɾ���ɹ�!";
			getch();
			break;
		case '4':
			cout << "\n\t\t\t** 1.��ͼ���Ų��� **" << endl;
			cout << "\t\t\t** 2.��ͼ���������� **" << endl;
			cout << "\t\t\t** 3.��ͼ�����߲��� **" << endl;
			cout << "\t\t\t** 4.��ͼ����������**" << endl;
			cout << "\t\t\t** 0. ��  �� **" << endl;
			cout << "\t\t\t ��ѡ��:";
			cin >> choice4;
			switch (choice4)
			{
			case 1:
				cout << "������ͼ����:";
				cin >> bookid;
				b = option1(bookid);
				if (b == NULL)
				{
					cout << "��ͼ�鲻����!";
					break;
				}
				cout << setw(3) << "���" << setw(10) << "����" << setw(10) << "����" << setw(10) << "�����" << setw(15) << "������" << setw(10) << "����ʱ��" << setw(10) << "ͼ��۸�" << setw(10) << "����" << endl;
				b->disp();
				break;
			case 2:
				cout << "������ͼ������:";
				cin >> bbook_name;
				b = option2(bbook_name);
				break;
			case 3:
				cout << "������ͼ������:";
				cin >> aubook_name;
				b = option3(aubook_name);
				break;
			case 4:
				cout << "������ͼ�������:";
				cin >> cbook_name;
				b = option4(cbook_name);
				break;
			case 0:
				break;
			}
			break;
		case '5':
			cout << setw(3) << "���" << setw(10) << "����" << setw(10) << "����" << setw(10) << "�����" << setw(15) << "������" << setw(10) << "����ʱ��" << setw(10) << "ͼ��۸�" << setw(10) << "����" << endl;
			disp();
			getch();
			break;
		case '6':
			clear();
			break;
		default:
			break;
		}
	}
}



class Manage						//���ߵ���Ϣ����
{
private:
	int tag;  						//ɾ����� 1��ʾ��ɾ 0��ʾδɾ
	int no; 						//���߱��
	char book_name[20];				 //��������
	int borbook[Max_bookor];		 //����ͼ��
public:
	Reader() 						//���캯��
	{
		;
	}
	friend ostream &operator<<(ostream &output, Manage&rd)
	{
		output << rd.no;
		output << " ";
		output << endl;
		return output;
	}
	char *Get_book_name()//��ȡ����
	{
		return book_name;

	}
	int Get_tag()//��ȡɾ�����
	{
		return tag;
	}
	int Get_no()//��ȡ���߱��
	{
		return no;
	}
	void setbook_name(char na[])//��������
	{
		strcpy(book_name, na);
	}
	void Delete_book()//����ɾ����� 1:��ɾ 0:δɾ
	{
		char i;
		cout << "ȷ��ɾ����Y/N ?" << endl;
		cin >> i;
		if (i == 'y' || i == 'Y')
			tag = 1;
	}
	void addreader(int n, char *na)//���Ӷ���
	{
		tag = 0;
		no = n;
		strcpy(book_name, na);
		for (int i = 0; i<Max_bookor; i++)
			borbook[i] = 0;
	}
	void Borrow_book(int bookid)//�������
	{
		for (int i = 0; i<Max_bookor; i++)
		{
			if (borbook[i] == 0)
			{
				borbook[i] = bookid;
				return;
			}
		}
	}
	int retbook(int bookid)
	{//�������
		for (int i = 0; i<Max_bookor; i++)
		{
			if (borbook[i] == bookid)
			{
				borbook[i] = 0;
				cout << "����ɹ�!" << endl;
				return 1;
			}
		}
		cout << "δ����飬����ʧ��!" << endl;
		return 0;
	}
	void disp()
	{//����������Ϣ
		int have = 0;
		int bz = 0;
		cout << setw(5) << no << setw(21) << book_name << setw(15);
		for (int i = 0; i<Max_bookor; i++)
		if (borbook[i] != 0)
		{
			if (bz == 0)
			{
				have = 1;
				cout << "[" << borbook[i] << "]\t\t" << endl;
				bz++;
			}
			else
			{
				cout << "\r\t\t\t\t\t""[" << borbook[i] << "]\t\t" << setw(15) << endl;
			}
		}
		if (have == 0)
			cout << "\t  ��δ����" << endl;
	}
};

class RDatabase             //������⣬ʵ�ֽ������ߵĸ�������
{
private:
	int top; //���߼�¼ָ��
	Manage read[Max_reader]; //���߼�¼
public:
	RDatabase() //���캯������reader.txt����read[]��
	{
		Manage s;
		top = -1;
		fstream file("reader.txt", ios::in); //��һ�������ļ�
		while (1)
		{
			file.read((char *)&s, sizeof(s));
			if (!file)
				break;
			top++;
			read[top] = s;
		}
		file.close(); //�ر� reader.txt �ļ�
	}
	void clear()     //ɾ�����ж�����Ϣ
	{
		char i;
		cout << "ȷ��ȫ��ɾ����Y/N ?" << endl;
		cin >> i;
		if (i == 'y' || i == 'Y')
			top = -1;
	}
	int addreader(int n, char *na)		//��Ӷ���ʱ�Ȳ����Ƿ����
	{
		Manage *p = queryid(n);
		if (p == NULL)
		{
			top++;
			read[top].addreader(n, na);
			return 1;
		}
		else
			cout << "�ñ���Ѿ�����!";
		return 0;
	}
	Manage *queryid(int readerid)   //�����߱�Ų���
	{
		for (int i = 0; i <= top; i++)
		if (read[i].Get_no() == readerid&&read[i].Get_tag() == 0)
		{
			return &read[i];
		}
		return NULL;
	}
	Manage *querybook_name(char readerbook_name[10])  //��������������
	{
		for (int i = 0; i <= top; i++)
		if (strcmp(read[i].Get_book_name(), readerbook_name) == 0 && read[i].Get_tag() == 0)
		{
			return &read[i];
		}
		return NULL;
	}
	void disp()						 //������ж�����Ϣ
	{
		for (int i = 0; i <= top; i++)
		if (read[i].Get_tag() == 0)
			read[i].disp();
	}
	void readerdata();				 //���߿���Ϣ
	~RDatabase()                     //������������read[]д��reader.txt�ļ���
	{											
		fstream file("reader.txt", ios::out);
		for (int i = 0; i <= top; i++)
		if (read[i].Get_tag() == 0)
			file.write((char *)&read[i], sizeof(read[i]));
		file.close();
	}
};

void RDatabase::readerdata()
{
	char choice1;
	char rbook_name[20];
	int readerid;
	char readerbook_name[10];
	int input;
	Manage*r;
	while (choice1 != '0')
	{
		cout << "\n\t\t\t** �� �� �� Ϣ **\n" << endl;
		cout << "\t\t\t** 1. ��  �� **" << endl;
		cout << "\t\t\t** 2. ��  �� **" << endl;
		cout << "\t\t\t** 3. ɾ  �� **" << endl;
		cout << "\t\t\t** 4. ��  �� **" << endl;
		cout << "\t\t\t** 5. ��  ʾ **" << endl;
		cout << "\t\t\t** 6. ȫ  ɾ **" << endl;
		cout << "\t\t\t** 0. ��  �� **" << endl;
		cout << "\t\t\t ��ѡ��";
		cin >> choice1;
		switch (choice1)
		{
		case '1':
			cout << "��������߱��:";
			cin >> readerid;
			cout << "�������������:";
			cin >> rbook_name;
			addreader(readerid, rbook_name);
			cout << "��Ӷ��߳ɹ�!" << endl;
			getch();
			break;
		case '2':
			cout << "��������߱��:";
			cin >> readerid;
			r = queryid(readerid);
			if (r == NULL)
			{
				cout << "�ö��߲�����! " << endl;
				break;
			}
			cout << "�������µ�����:";
			cin >> rbook_name;
			r->setbook_name(rbook_name);
			cout << "�޸Ķ��߳ɹ�!" << endl;
			getch();
			break;
		case '3':
			cout << "��������߱��:";
			cin >> readerid;
			r = queryid(readerid);
			if (r == NULL)
			{
				cout << "�ö��߲�����!" << endl;
				break;
			}
			r->Delete_book();
			cout << "ɾ���ɹ�!" << endl;
			getch();
			break;
		case '4':
			cout << "\n\t\t\t** 1.�����߱�Ų��� **" << endl;
			cout << "\t\t\t** 2.�������������� **" << endl;
			cout << "\t\t\t** 0.��   �� **" << endl;
			cout << "\t\t\t ��ѡ��:";
			cin >> input;
			switch (input)
			{
			case 1:
				cout << "��������߱��:";
				cin >> readerid;
				r = queryid(readerid);
				if (r == NULL)
				{
					cout << "�ö��߲�����!" << endl;
					break;
				}
				cout << setw(10) << "���߱��" << setw(17) << "��������" << setw(20) << "�ѽ�����" << endl;
				r->disp();
				break;
			case 2:
				cout << "�������������:";
				cin >> readerbook_name;
				r = querybook_name(readerbook_name);
				if (r == NULL)
				{
					cout << "�ö��߲�����!" << endl;
					break;
				}
				cout << setw(10) << "���߱��" << setw(17) << "��������" << setw(20) << "�ѽ�����" << endl;
				r->disp();
				break;
			case 0:
				break;
			}
			break;
		case '5':
			cout << setw(10) << "���߱��" << setw(17) << "��������" << setw(20) << "�ѽ�����" << endl;
			disp();
			getch();
			break;
		case '6':
			clear();
			break;
		default:
			break;
		}
	}
}


class maindesk //ʵ�ֳ����������
{
	char Enter_input;      //������ҳ���ѡ�����
	char input;				//��¼���ı�������
	double xh, mm;
	int bookid, readerid;
	RDatabase ReaderDB;
	Manage *r;
	Manager BookDB;
	Book *b;
public:
	maindesk() { ; }

	int Log_in()
	{

		int k = 0;
		cout << "\n\t\t\t �� ӭ �� �� �� �� �� �� �� ѧ ͼ �� �� �� �� ϵ ͳ!" << endl;
		cout << "\t\t\t               �� �� �� 3 �� �� ½ �� ��" << endl;
		while (input != '0')
		{
			++k;
			cout << "\t\t\t              ---1.  ��¼ ---  " << endl;
			cout << "\t\t\t              ---2.  �˳� ---  " << endl;
			cout << "\t\t\t              �� ѡ ��(0,1)->: ";
			cin >> input;
			switch (input)
			{
			case '1':
				cout << "\t\t\t    �� �� �� �˺� �� �� ��   " << endl;
				cout << "                                                       ";
				cin >> xh;
				cout << "                                                       ";
				cin >> mm;

				if ((xh >= 1) && (xh <= 1) && (xh == mm))
				{
					cout << "\t\t\t                 ��¼�ɹ�" << endl;
					Enter_menu();
				}
				if ((xh<1) || (xh>1) || (xh != mm))
				{
					cout << "��¼ʧ�ܣ�������" << 3 - k << "�ε�½����" << endl;
					if (k >= 3)
					{
						cout << "���ѳ�����¼�������ޣ�ϵͳ�Զ��˳�!" << endl;
						return 1;
					}
					continue;
				}
				break;

			case '0':
				break;
			}
			return 1;
		}
		return 0;
	}

	void Enter_menu()
	{
		while (Enter_input != '0')
		{
			cout << "\n\t\t\t   --------- ͼ �� �� �� ϵ ͳ �� ӭ �� ---------\n\n";
			cout << "\t\t\t               ** 1.ͼ �� �� Ϣ **" << endl;
			cout << "\t\t\t               ** 2.�� �� �� Ϣ **" << endl;
			cout << "\t\t\t               ** 3.�� �� ͼ �� **" << endl;
			cout << "\t\t\t               ** 4.�� �� ͼ �� **" << endl;
			cout << "\t\t\t                 ** 0.  �� ��  **" << endl;
			cout << "\t\t\t ��ѡ��";
			cin >> Enter_input;
			switch (Enter_input)
			{
			case '1':
				BookDB.bookdata();
				break;
			case '2':
				ReaderDB.readerdata();
				break;
			case '3':
				cout << "\t\t\t\t�������" << endl;
				cout << "�����������߱��:";
				cin >> readerid;
				r = ReaderDB.queryid(readerid);
				if (NULL == r)//����Ų����Ƿ��иö���
				{
					cout << "�����ڸö��ߣ����ܽ���!" << endl;
					break;
				}
				cout << "������Ҫ��ͼ����:";
				cin >> bookid;
				b = BookDB.option1(bookid);
				if (b == NULL)//����Ų����Ƿ��и�ͼ��
				{
					cout << "�����ڸ�ͼ�飬���ܽ���!" << endl;
					break;
				}
				if (b->Borrow_book() == 0)
				{
					cout << "��ͼ���ѽ��꣬���ܽ���!" << endl;
					break;
				}
				cout << "���߽���ɹ�!" << endl;
				r->Borrow_book(b->Get_no());
				break;
			case '4':
				cout << "\t\t\t\t�������" << endl;
				cout << "�����뻹����߱��:";
				cin >> readerid;
				r = ReaderDB.queryid(readerid);
				if (r == NULL)
				{
					cout << "�����ڸö��ߣ����ܻ���" << endl;
					break;
				}
				cout << "������Ҫ�黹ͼ����:";
				cin >> bookid;
				b = BookDB.option1(bookid);
				if (b == NULL)
				{
					cout << "�����ڸ�ͼ�飬���ܻ���" << endl;
					break;
				}
				b->retbook();
				r->retbook(b->Get_no());
				break;
			case '0':
				break;
			default:
				break;
			}
		}
	}
};
int main() //������
{
	maindesk yourDesk;
	if (yourDesk.Log_in())
		cout << "\t\t  лл ʹ �� , �� ӭ �� �� ʹ �� !" << endl;

}