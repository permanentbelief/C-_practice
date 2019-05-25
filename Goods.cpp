#include"Goods.h"
vector<Goods> Goo;

Goods Goods::operator =(Goods p1)//定义运算符重载
{            
    strcpy(name,p1.name); number=p1.number; price=p1.price;count=p1.count;
    return p1;
}

int Goods::operator ==(Goods p1){
    if(number=p1.number)  return 1;
    else return 0;
}

void Goods::enter()
{                    //定义信息输入函数
    cout <<"输入货物名称：";
    cin>>name;
    cout <<"输入编号：";
    cin>>number;
    cout <<"输入价格：";
    cin>>price;
    cout <<"货物数量：";
    cin>>count; 
}

void Goods::display()
{                  //定义信息显示函数
    cout <<setw(8) <<"名称" <<setw(8) <<"编号" <<setw(8) <<"价格" <<setw(8) <<"数量" <<endl;
    cout <<setw(8) <<name <<setw(8) <<number <<setw(8) <<price <<setw(8) <<count <<endl;
}

class Electric:virtual public Goods
{                                        //以公有方式派生出家用电器类 
protected:
    char brand[20];
public:
     Electric(){}
     virtual void enter(){Goods::enter();cout<<"\n品牌：";cin>>brand;}
     virtual void display();
     virtual void readfile();
     virtual void write();
     virtual void change_infor();
     virtual ~Electric(){};
};

class Ordinary:virtual public Goods
{                                         //以公有方式派生出日常用品类 
protected:
    char classify[16];
public:
    Ordinary(){}
    virtual void enter(){Goods::enter();cout<<"\n分类：";cin>>classify;}
    virtual void display();
    virtual void readfile();
    virtual void write();
    virtual void change_infor();
    virtual ~Ordinary(){}
};

void Electric::display()
{                                        //定义派生类家用电器的信息显示函数
    cout <<setw(8) <<"名称" <<setw(8) <<"编号" <<setw(8) <<"价格" <<setw(8) <<"数量"  <<setw(8) <<"品牌"  <<endl;
    cout <<setw(8) <<name <<setw(8) <<number <<setw(8) <<price <<setw(8) <<count <<setw(8) <<brand<<endl;
}

void Electric::write()
{                      //定义派生类家用电器的信息写入文件函数
    Electric Ele;
    char ch;
    ofstream myfile("Electric.txt",ios::app);
    do
    {
        Ele.enter();
        myfile.write((char *)&Ele,sizeof(Ele));
        cout <<"还需要输入下个家用电器的信息吗?(y/n):";
        cin>>ch;
    }
    while (ch=='y'||ch=='Y');
    myfile.close();
}
 
void Electric::readfile()//定义派生类家用电器的读文件函数
{                  
    ifstream myfile("Electric.txt",ios::binary);
    while (myfile)
    {
        Electric Ele;
        if (myfile.read((char*)&Ele,sizeof(Ele)))
        {
            if (Ele.number!=-1)         //删除一个家用电器类的信息，通过不显示来定义删除  
                Ele.display();
        }
    }
    myfile.close();
}

void Electric::change_infor(){                 //定义派生类家用电器类的信息修改或删除函数
    Electric Ele;
    int num,p;
    cout<<"请输入你要修改或者删除的家用电器的编号：";
    cin>>num;
    fstream myfile("Electric.txt",ios::in|ios::out);
    while(myfile.good()){
        myfile.read((char*)&Ele,sizeof(Ele));
        if(num==Ele.number){
            myfile.seekg(-sizeof(Ele),ios::cur);
            cout<<"你是要修改还是要删除该家用电器的记录(1:删除 2:修改):";
            cin>>p;
            if(p==1){Ele.number=-1;break;}
            else {
                cout<<"请输入新的信息"<<endl;
                Ele.enter();break;    
            }
        }    
    }
    myfile.write((char *)&Ele,sizeof(Ele));
    myfile.close();
}

void Ordinary::display()
{                                        //定义派生类日用品类的信息显示函数
    cout <<setw(8) <<"名称" <<setw(8) <<"编号" <<setw(8) <<"价格" <<setw(8) <<"数量" <<setw(8) <<"分类" <<endl;
    cout <<setw(8) <<name <<setw(8) <<number <<setw(8) <<price <<setw(8) <<count <<setw(8) <<classify <<endl;
}

void Ordinary::write()
{                      //定义派生类日用品类的信息写入文件函数
    Ordinary Ord;
    char ch;
    ofstream myfile("Ordinary.txt",ios::app);
    do
    {
        Ord.enter();
        myfile.write((char *)&Ord,sizeof(Ord));
        cout <<"还需要输入下个日用品类的信息吗?(y/n):";
        cin>>ch;
    }
    while (ch=='y'||ch=='Y');
    myfile.close();
}

void Ordinary::readfile()
{                  //定义派生类日用品类的读文件函数
    ifstream myfile("Ordinary.txt",ios::in);
    while (myfile)
    {
        Ordinary Ord;
        if (myfile.read((char*)&Ord,sizeof(Ord)))
        {
            if (Ord.number!=-1)             //删除一个日用品类的信息，通过不显示来定义删除
                Ord.display();
        }
    }
    myfile.close();
}

void Ordinary::change_infor(){
    Ordinary Ord;
    int num,p;
    cout<<"请输入你要修改或者删除的日用品类的编号：";
    cin>>num;
    fstream myfile("Ordinary.txt",ios::in|ios::out);
    while(myfile.good()){
        myfile.read((char*)&Ord,sizeof(Ord));
        if(num==Ord.number){
            myfile.seekg(-sizeof(Ord),ios::cur);
            cout<<"你是要修改还是要删除该日用品的记录(1:删除 2:修改):";
            cin>>p;
            if(p==1){Ord.number=-1;break;}
            else {
                cout<<"请输入新的信息"<<endl;
                Ord.enter();break;    
            }
        }    
    }
    myfile.write((char *)&Ord,sizeof(Ord));
    myfile.close();
}

void menu()
{
	
    cout <<"\n\n\t\t*************************" <<endl;
    cout <<"\t\t*   商店货物管理系统      \t\t"<<endl;
    cout <<"\t\t**************************\t\t"<<endl;
    cout <<"\t\t*     0.退出              \t\t"<<endl;
    cout <<"\t\t*     1.请输入商品信息    \t\t"<<endl;
    cout <<"\t\t*     2.显示商品信息      \t\t"<<endl;
    cout <<"\t\t*     3.对信息的修改或删除\t\t"<<endl;
    cout <<"\t\t*     4.返回主菜单        \t\t"<<endl;
    cout <<"\t\t**************************\t\t"<<endl;
    cout <<"请选择操作(0-4) "                <<endl;
    cout <<"请选择:";
}
 
void select()
{
    Goods *pt;
    Electric El;
    Ordinary Or;
    if(i==1) pt=&El;
    else if(i==2) pt=&Or;
    do
    {
        int ch;
        cin>>ch;
        switch (ch)
        {
        case 0:
            exit(0);
        case 1:
            pt->write();
            cout <<"你还想进行何种操作：";
            break;
        case 2:
            pt->readfile();
            cout <<"你还想进行何种操作：";
            break;
        case 3:
        	pt->change_infor();
            cout <<"你还想进行何种操作：";
            break;
        case 4:
            k=0;
            break;
        default:
            cout <<"你的选择错误，请重新选择：";
            break;
        }
    }
    while (k);
}
 
int main()
{
b:
    cout <<"\t\t*********************************\t\t" <<endl;
    cout <<"\t\t*        商店仓库管理系统\t     \t\t" <<endl;
    cout <<"\t\t*        请选择商品类型\t       \t\t" <<endl;
    cout <<"\t\t*          0:退出               \t\t" <<endl;
    cout <<"\t\t*          1:家用电器类         \t\t" <<endl;
    cout <<"\t\t*          2:日用品类           \t\t" <<endl;
    cout <<"\t\t*********************************\t\t" <<endl;
    cout <<"请选择(0-2):"; 
    cin>>i;
    switch (i) 
    {
    case 0:
        cout <<"你已经退出系统";
        getch();
        exit(0); 
        
    case 1:
    {
        system("cls");
        menu();
        select();
        break;
    }
    
    case 2:
    {
        system("cls");
        menu();
        select();
        break;
    }
    
    default :
        cout <<"你的选择有误，请重新选择：";
        break;
    }
    if (k==0)
        k=1;
    system("cls");
    goto b;
}
