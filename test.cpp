#define _CRT_SECURE_NO_WARNINGS 1 



#define Max_reader 100    //最多的读者数
#define Max_book  100   //最多的图书数
#define Max_bookor 5    //每位读者最多借的书

#include<iostream>
#include<conio.h> //控制台数据输入输出的函数
#include<fstream>//文件流
#include<iomanip> //控制数据输出格式
#include<string.h>

using namespace std;



//class Time // 时间类


class Book


{//图书类，实现对图书的描述，图书的编号，书名，借出，还入等功能
private:
	int tag;                //删除标记 1:已删 0:未删
	int no;                 //图书编号
	char book_name[20];     //图书书名  
	char author_name[20];   //图书作者
	char classify_num[20];  //图书分类
	char public_unit[20];   //图书出版
	int public_time;		//出版时间
	double book_price;		//图书价格
	int onshelf;			//是否再架 1:再架 2:已借
public:
	Book(){ ; }
	char *Get_book_name()   //获取书名
	{
		return book_name;
	}
	char *Get_author_name() //获取作者名
	{
		return author_name;
	}

	char *Get_classify_num() //获取分类号
	{
		return classify_num;
	}
	char *Get_public_unit() //获取出版社名
	{
		return public_unit;
	}
	int Get_public_time()    //获取出版时间
	{
		return public_time;
	}
	double Get_book_price()	 //获取图书价格 
	{
		return book_price;
	}
	int Get_no()	          //获取图书编号
	{
		return no;
	}
	int Get_tag()			 //获取删除标记
	{
		return tag;
	}

	void setbook_name(char na[])  //设置书名
	{
		strcpy(book_name, na);
	}
	void setauthor_namebook_name(char aa[]) //设置作者名
	{
		strcpy(author_name, aa);
	}
	void setclassify_num(char fe[])    //设置分类号
	{
		strcpy(classify_num, fe);
	}
	void setpublic_unit(char ca[])     //设置出版社
	{
		strcpy(public_unit, ca);
	}

	void setpublic_time(int time)      //设置时间
	{
		public_time = time;
	}
	void setbook_price(double price)    //设置图书价格
	{
		book_price = price;
	}
	void setonshelf(int oa)
	{
		onshelf = oa;
	}
	void Delete_book()					//删除图书
	{
		char i;
		cout << "确定删除吗？ Y/N ?" << endl;
		cin >> i;
		if (i == 'y' || i == 'Y')
			tag = 1;
	}
	void addbook(int n, char *na, char *aa, char *fe, char *ca, int time, double price, int oa)   //增加图书
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
	int Borrow_book()   //借书操作
	{
		if (onshelf>0)
		{
			onshelf--;
			return 1;
		}
		return 0;
	}
	void retbook()    //还书操作
	{
		onshelf++;
	}
	void disp() //输出图书
	{
		cout << setw(3) << no << setw(10) << book_name << setw(10) << author_name << setw(10) << classify_num << setw(15) << public_unit << setw(10) << public_time << setw(10) << book_price << setw(10) << onshelf << endl;
	}
};


class Manager   //图书库类，实现对图书的维护，查找，删除等
{
private:
	int top;                        //图书记录指针
	Book book[Max_book];            //图书记录
public:
	Manager()					//构造函数，将book.txt读到book[]中
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
	void clear()							//全删
	{
		char i;
		cout << "确定全部删除吗？Y/N ?" << endl;
		cin >> i;
		if (i == 'y' || i == 'Y')
			top = -1;
	}
	int addbook(int n, char *na, char *aa, char *fe, char *ca, int time, double price, int oa) //增加图书
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
	Book *option1(int bookid)     //按编号查找图书
	{
		for (int i = 0; i <= top; i++)
		if (book[i].Get_no() == bookid &&book[i].Get_tag() == 0)
		{
			return &book[i];
		}
		return NULL;
	}
	Book *option2(char a[])   //按书名查找图书
	{
		Book *e;
		int r = 0;
		for (int i = 0; i <= top; i++)
		if (strcmp(book[i].Get_book_name(), a) == 0 && book[i].Get_tag() == 0)
		{
			if (r == 0)
				cout << setw(3) << "编号" << setw(10) << "书名" << setw(10) << "作者" << setw(10) << "分类号" << setw(15) << "出版社" << setw(10) << "出版时间" << setw(10) << "图书价格" << setw(10) << "存量" << endl;
			e = &book[i];
			e->disp();
			r++;
		}
		if (r == 0)
			cout << "找不到该书!" << endl;
		return NULL;
	}
	Book *option3(char a[])           //按作者查找图书
	{
		Book *e;
		int r = 0;
		for (int i = 0; i <= top; i++)
		if (strcmp(book[i].Get_author_name(), a) == 0 && book[i].Get_tag() == 0)
		{
			if (r == 0)
				cout << setw(3) << "编号" << setw(10) << "书名" << setw(10) << "作者" << setw(10) << "分类号" << setw(15) << "出版社" << setw(10) << "出版时间" << setw(10) << "图书价格" << setw(10) << "存量" << endl;
			e = &book[i];
			e->disp();
			r++;
		}
		if (r == 0)
			cout << "找不到该书!" << endl;
		return NULL;
	}
	Book *option4(char a[])    //按出版社查找图书
	{
		Book *e;
		int r = 0;
		for (int i = 0; i <= top; i++)
		if (strcmp(book[i].Get_public_unit(), a) == 0 && book[i].Get_tag() == 0)
		{
			if (r == 0)cout << setw(3) << "编号" << setw(10) << "书名" << setw(10) << "作者" << setw(10) << "分类号" << setw(15) << "出版社" << setw(10) << "出版时间" << setw(10) << "图书价格" << setw(10) << "存量" << endl;
			e = &book[i];
			e->disp();
			r++;
		}
		if (r == 0)
			cout << "找不到该书!" << endl;
		return NULL;
	}
	void bookdata(); //图书库信息
	void disp()
	{
		for (int i = 0; i <= top; i++)
		if (book[i].Get_tag() == 0)
			book[i].disp();
	}
	~Manager()
	{//析构函数，将book[]写到book.txt文件中
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
	char bbook_name[40];//书名
	char aubook_name[40];//作者名
	char bclassify_num[40];//分类号
	char cbook_name[40];//出版社
	int time;//出版时间
	double price;//价格
	char ch;
	int choice4;
	int bookid;
	int bookod;
	Book *b;
	while (choice3 != '0')
	{
		cout << "\n\t\t\t              --- 图 书 信 息 ---\n" << endl;
		cout << "\t\t\t              --- 1.新  增 ---" << endl;
		cout << "\t\t\t              --- 2.更  改 ---" << endl;
		cout << "\t\t\t              --- 3.删  除 ---" << endl;
		cout << "\t\t\t              --- 4.查  找 ---" << endl;
		cout << "\t\t\t              --- 5.显  示 ---" << endl;
		cout << "\t\t\t              --- 6.全  删 ---" << endl;
		cout << "\t\t\t              --- 0.返  回 ---" << endl;
		cout << "\t\t\t 请选择：";
		cin >> choice3;
		switch (choice3)
		{
		case '1':
			cout << "\t\t\t请输入新书编号:";
			cin >> bookid;
			b = option1(bookid);
			if (b != NULL)
			{
				cout << "\t\t\t该编号已经存在，不能添加!" << endl;
				break;
			}
			cout << "\t\t\t请输入新书书名:";
			cin >> bbook_name;
			cout << "请输入新书作者名:";
			cin >> aubook_name;
			cout << "请输入新书分类号:";
			cin >> bclassify_num;
			cout << "请输入新书出版社:";
			cin >> cbook_name;
			cout << "请输入新书出版时间:";
			cin >> time;
			cout << "请输入图书价格:";
			cin >> price;

			cout << "请输入新书数量:";
			cin >> bookod;
			addbook(bookid, bbook_name, aubook_name, bclassify_num, cbook_name, time, price, bookod);

			char input;
			{
				cout << "\n\t\t\t** 是 否 保 存 Y/N ?**\n" << endl;
				cout << "\t\t\t** 1. Y 保 存 **" << endl;
				cout << "\t\t\t** 0. N 不 保 存 **" << endl;
				cout << "\t\t\t 请 选 择: ";
				cin >> input;
				switch (input)
				{
				case '1':

					cout << "添加图书成功!";
					break;
				case '0':
					break;
				}
			}
			getch();
			break;
		case '2':                                                    //更改
			cout << "请输入图书编号:";
			cin >> bookid;
			b = option1(bookid);
			if (b == NULL)
			{
				cout << "该图书不存在! " << endl;
				break;
			}
			cout << "该图书的信息是：" << endl;
			cout << setw(3) << "编号" << setw(10) << "书名" << setw(10) << "作者" << setw(10) << "分类号" << setw(15) << "出版社" << setw(10) << "出版时间" << setw(10) << "图书价格" << setw(10) << "存量" << endl;
			b->disp();
			cout << "是否修改?( y/n ):";
			cin >> ch;
			if (ch == 'y' || ch == 'Y')
			{
				int a;
				cout << "\n\t\t\t** 图 书 修 改 **\n" << endl;
				cout << "\t\t\t** 1.修 改 书 名  **" << endl;
				cout << "\t\t\t** 2.修 改 作 者  **" << endl;
				cout << "\t\t\t** 3.修 改 分 类 号 **" << endl;
				cout << "\t\t\t** 4.修 改 出 版 社 **" << endl;
				cout << "\t\t\t** 5.修 改 出 版 时 间**" << endl;
				cout << "\t\t\t** 6.修 改 图 书 价 格**" << endl;
				cout << "\t\t\t** 7.修 改 图 书 数 量**" << endl;
				cout << "\t\t\t** 0.返  回 **" << endl;
				cout << "\t\t\t 请选择：";
				cin >> a;
				switch (a)
				{
				case 1: cout << "请输入新的书名:";
					cin >> bbook_name; b->setbook_name(bbook_name); break;
				case 2: cout << "请输入新的作者:";
					cin >> aubook_name; b->setauthor_namebook_name(aubook_name); break;
				case 3: cout << "请输入新的分类号:";
					cin >> bclassify_num; b->setclassify_num(bclassify_num); break;
				case 4: cout << "请输入新书出版社:";
					cin >> cbook_name; b->setpublic_unit(cbook_name); break;
				case 5: cout << "请输入新书出版时间:";
					cin >> time; b->setpublic_time(time); break;
				case 6: cout << "请输入图书价格:";
					cin >> price; b->setbook_price(price); break;
				case 7: cout << "请输入新的存量:";
					cin >> bookod; b->setonshelf(bookod); break;
				case 0: break;
				}
			}
			cout << "修改图书成功!";
			getch();
			break;
		case '3':
			cout << "请输入图书编号:";
			cin >> bookid;
			b = option1(bookid);
			if (b == NULL)
			{
				cout << "该图书不存在，无法删除!" << endl;
				break;
			}
			b->Delete_book();
			cout << "删除成功!";
			getch();
			break;
		case '4':
			cout << "\n\t\t\t** 1.按图书编号查找 **" << endl;
			cout << "\t\t\t** 2.按图书书名查找 **" << endl;
			cout << "\t\t\t** 3.按图书作者查找 **" << endl;
			cout << "\t\t\t** 4.按图书出版社查找**" << endl;
			cout << "\t\t\t** 0. 返  回 **" << endl;
			cout << "\t\t\t 请选择:";
			cin >> choice4;
			switch (choice4)
			{
			case 1:
				cout << "请输入图书编号:";
				cin >> bookid;
				b = option1(bookid);
				if (b == NULL)
				{
					cout << "该图书不存在!";
					break;
				}
				cout << setw(3) << "编号" << setw(10) << "书名" << setw(10) << "作者" << setw(10) << "分类号" << setw(15) << "出版社" << setw(10) << "出版时间" << setw(10) << "图书价格" << setw(10) << "存量" << endl;
				b->disp();
				break;
			case 2:
				cout << "请输入图书书名:";
				cin >> bbook_name;
				b = option2(bbook_name);
				break;
			case 3:
				cout << "请输入图书作者:";
				cin >> aubook_name;
				b = option3(aubook_name);
				break;
			case 4:
				cout << "请输入图书出版社:";
				cin >> cbook_name;
				b = option4(cbook_name);
				break;
			case 0:
				break;
			}
			break;
		case '5':
			cout << setw(3) << "编号" << setw(10) << "书名" << setw(10) << "作者" << setw(10) << "分类号" << setw(15) << "出版社" << setw(10) << "出版时间" << setw(10) << "图书价格" << setw(10) << "存量" << endl;
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



class Manage						//读者的信息描述
{
private:
	int tag;  						//删除标记 1表示已删 0表示未删
	int no; 						//读者编号
	char book_name[20];				 //读者姓名
	int borbook[Max_bookor];		 //所借图书
public:
	Reader() 						//构造函数
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
	char *Get_book_name()//获取姓名
	{
		return book_name;

	}
	int Get_tag()//获取删除标记
	{
		return tag;
	}
	int Get_no()//获取读者编号
	{
		return no;
	}
	void setbook_name(char na[])//设置姓名
	{
		strcpy(book_name, na);
	}
	void Delete_book()//设置删除标记 1:已删 0:未删
	{
		char i;
		cout << "确定删除吗？Y/N ?" << endl;
		cin >> i;
		if (i == 'y' || i == 'Y')
			tag = 1;
	}
	void addreader(int n, char *na)//增加读者
	{
		tag = 0;
		no = n;
		strcpy(book_name, na);
		for (int i = 0; i<Max_bookor; i++)
			borbook[i] = 0;
	}
	void Borrow_book(int bookid)//借书操作
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
	{//还书操作
		for (int i = 0; i<Max_bookor; i++)
		{
			if (borbook[i] == bookid)
			{
				borbook[i] = 0;
				cout << "还书成功!" << endl;
				return 1;
			}
		}
		cout << "未借该书，还书失败!" << endl;
		return 0;
	}
	void disp()
	{//读出读者信息
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
			cout << "\t  还未借书" << endl;
	}
};

class RDatabase             //读者类库，实现建立读者的个人资料
{
private:
	int top; //读者记录指针
	Manage read[Max_reader]; //读者记录
public:
	RDatabase() //构造函数，将reader.txt读到read[]中
	{
		Manage s;
		top = -1;
		fstream file("reader.txt", ios::in); //打开一个输入文件
		while (1)
		{
			file.read((char *)&s, sizeof(s));
			if (!file)
				break;
			top++;
			read[top] = s;
		}
		file.close(); //关闭 reader.txt 文件
	}
	void clear()     //删除所有读者信息
	{
		char i;
		cout << "确定全部删除吗？Y/N ?" << endl;
		cin >> i;
		if (i == 'y' || i == 'Y')
			top = -1;
	}
	int addreader(int n, char *na)		//添加读者时先查找是否存在
	{
		Manage *p = queryid(n);
		if (p == NULL)
		{
			top++;
			read[top].addreader(n, na);
			return 1;
		}
		else
			cout << "该编号已经存在!";
		return 0;
	}
	Manage *queryid(int readerid)   //按读者编号查找
	{
		for (int i = 0; i <= top; i++)
		if (read[i].Get_no() == readerid&&read[i].Get_tag() == 0)
		{
			return &read[i];
		}
		return NULL;
	}
	Manage *querybook_name(char readerbook_name[10])  //按读者姓名查找
	{
		for (int i = 0; i <= top; i++)
		if (strcmp(read[i].Get_book_name(), readerbook_name) == 0 && read[i].Get_tag() == 0)
		{
			return &read[i];
		}
		return NULL;
	}
	void disp()						 //输出所有读者信息
	{
		for (int i = 0; i <= top; i++)
		if (read[i].Get_tag() == 0)
			read[i].disp();
	}
	void readerdata();				 //读者库信息
	~RDatabase()                     //析构函数，将read[]写到reader.txt文件中
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
		cout << "\n\t\t\t** 读 者 信 息 **\n" << endl;
		cout << "\t\t\t** 1. 新  增 **" << endl;
		cout << "\t\t\t** 2. 更  改 **" << endl;
		cout << "\t\t\t** 3. 删  除 **" << endl;
		cout << "\t\t\t** 4. 查  找 **" << endl;
		cout << "\t\t\t** 5. 显  示 **" << endl;
		cout << "\t\t\t** 6. 全  删 **" << endl;
		cout << "\t\t\t** 0. 返  回 **" << endl;
		cout << "\t\t\t 请选择：";
		cin >> choice1;
		switch (choice1)
		{
		case '1':
			cout << "请输入读者编号:";
			cin >> readerid;
			cout << "请输入读者姓名:";
			cin >> rbook_name;
			addreader(readerid, rbook_name);
			cout << "添加读者成功!" << endl;
			getch();
			break;
		case '2':
			cout << "请输入读者编号:";
			cin >> readerid;
			r = queryid(readerid);
			if (r == NULL)
			{
				cout << "该读者不存在! " << endl;
				break;
			}
			cout << "请输入新的姓名:";
			cin >> rbook_name;
			r->setbook_name(rbook_name);
			cout << "修改读者成功!" << endl;
			getch();
			break;
		case '3':
			cout << "请输入读者编号:";
			cin >> readerid;
			r = queryid(readerid);
			if (r == NULL)
			{
				cout << "该读者不存在!" << endl;
				break;
			}
			r->Delete_book();
			cout << "删除成功!" << endl;
			getch();
			break;
		case '4':
			cout << "\n\t\t\t** 1.按读者编号查找 **" << endl;
			cout << "\t\t\t** 2.按读者姓名查找 **" << endl;
			cout << "\t\t\t** 0.返   回 **" << endl;
			cout << "\t\t\t 请选择:";
			cin >> input;
			switch (input)
			{
			case 1:
				cout << "请输入读者编号:";
				cin >> readerid;
				r = queryid(readerid);
				if (r == NULL)
				{
					cout << "该读者不存在!" << endl;
					break;
				}
				cout << setw(10) << "读者编号" << setw(17) << "读者姓名" << setw(20) << "已借书编号" << endl;
				r->disp();
				break;
			case 2:
				cout << "请输入读者姓名:";
				cin >> readerbook_name;
				r = querybook_name(readerbook_name);
				if (r == NULL)
				{
					cout << "该读者不存在!" << endl;
					break;
				}
				cout << setw(10) << "读者编号" << setw(17) << "读者姓名" << setw(20) << "已借书编号" << endl;
				r->disp();
				break;
			case 0:
				break;
			}
			break;
		case '5':
			cout << setw(10) << "读者编号" << setw(17) << "读者姓名" << setw(20) << "已借书编号" << endl;
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


class maindesk //实现程序的主界面
{
	char Enter_input;      //进入主页面的选择变量
	char input;				//登录与否的变量控制
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
		cout << "\n\t\t\t 欢 迎 光 临 西 安 财 经 大 学 图 书 馆 管 理 系 统!" << endl;
		cout << "\t\t\t               您 共 有 3 次 登 陆 机 会" << endl;
		while (input != '0')
		{
			++k;
			cout << "\t\t\t              ---1.  登录 ---  " << endl;
			cout << "\t\t\t              ---2.  退出 ---  " << endl;
			cout << "\t\t\t              请 选 择(0,1)->: ";
			cin >> input;
			switch (input)
			{
			case '1':
				cout << "\t\t\t    请 输 入 账号 和 密 码   " << endl;
				cout << "                                                       ";
				cin >> xh;
				cout << "                                                       ";
				cin >> mm;

				if ((xh >= 1) && (xh <= 1) && (xh == mm))
				{
					cout << "\t\t\t                 登录成功" << endl;
					Enter_menu();
				}
				if ((xh<1) || (xh>1) || (xh != mm))
				{
					cout << "登录失败：您还有" << 3 - k << "次登陆机会" << endl;
					if (k >= 3)
					{
						cout << "您已超过登录次数上限，系统自动退出!" << endl;
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
			cout << "\n\t\t\t   --------- 图 书 管 理 系 统 欢 迎 您 ---------\n\n";
			cout << "\t\t\t               ** 1.图 书 信 息 **" << endl;
			cout << "\t\t\t               ** 2.读 者 信 息 **" << endl;
			cout << "\t\t\t               ** 3.借 阅 图 书 **" << endl;
			cout << "\t\t\t               ** 4.归 还 图 书 **" << endl;
			cout << "\t\t\t                 ** 0.  退 出  **" << endl;
			cout << "\t\t\t 请选择：";
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
				cout << "\t\t\t\t借书操作" << endl;
				cout << "请输入借书读者编号:";
				cin >> readerid;
				r = ReaderDB.queryid(readerid);
				if (NULL == r)//按编号查找是否有该读者
				{
					cout << "不存在该读者，不能借书!" << endl;
					break;
				}
				cout << "请输入要借图书编号:";
				cin >> bookid;
				b = BookDB.option1(bookid);
				if (b == NULL)//按编号查找是否有该图书
				{
					cout << "不存在该图书，不能借书!" << endl;
					break;
				}
				if (b->Borrow_book() == 0)
				{
					cout << "该图书已借完，不能借书!" << endl;
					break;
				}
				cout << "读者借书成功!" << endl;
				r->Borrow_book(b->Get_no());
				break;
			case '4':
				cout << "\t\t\t\t还书操作" << endl;
				cout << "请输入还书读者编号:";
				cin >> readerid;
				r = ReaderDB.queryid(readerid);
				if (r == NULL)
				{
					cout << "不存在该读者，不能还书" << endl;
					break;
				}
				cout << "请输入要归还图书编号:";
				cin >> bookid;
				b = BookDB.option1(bookid);
				if (b == NULL)
				{
					cout << "不存在该图书，不能还书" << endl;
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
int main() //主函数
{
	maindesk yourDesk;
	if (yourDesk.Log_in())
		cout << "\t\t  谢谢 使 用 , 欢 迎 下 次 使 用 !" << endl;

}