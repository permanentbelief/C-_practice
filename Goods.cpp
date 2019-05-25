#include"Goods.h"
vector<Goods> Goo;

Goods Goods::operator =(Goods p1)//�������������
{            
    strcpy(name,p1.name); number=p1.number; price=p1.price;count=p1.count;
    return p1;
}

int Goods::operator ==(Goods p1){
    if(number=p1.number)  return 1;
    else return 0;
}

void Goods::enter()
{                    //������Ϣ���뺯��
    cout <<"����������ƣ�";
    cin>>name;
    cout <<"�����ţ�";
    cin>>number;
    cout <<"����۸�";
    cin>>price;
    cout <<"����������";
    cin>>count; 
}

void Goods::display()
{                  //������Ϣ��ʾ����
    cout <<setw(8) <<"����" <<setw(8) <<"���" <<setw(8) <<"�۸�" <<setw(8) <<"����" <<endl;
    cout <<setw(8) <<name <<setw(8) <<number <<setw(8) <<price <<setw(8) <<count <<endl;
}

class Electric:virtual public Goods
{                                        //�Թ��з�ʽ���������õ����� 
protected:
    char brand[20];
public:
     Electric(){}
     virtual void enter(){Goods::enter();cout<<"\nƷ�ƣ�";cin>>brand;}
     virtual void display();
     virtual void readfile();
     virtual void write();
     virtual void change_infor();
     virtual ~Electric(){};
};

class Ordinary:virtual public Goods
{                                         //�Թ��з�ʽ�������ճ���Ʒ�� 
protected:
    char classify[16];
public:
    Ordinary(){}
    virtual void enter(){Goods::enter();cout<<"\n���ࣺ";cin>>classify;}
    virtual void display();
    virtual void readfile();
    virtual void write();
    virtual void change_infor();
    virtual ~Ordinary(){}
};

void Electric::display()
{                                        //������������õ�������Ϣ��ʾ����
    cout <<setw(8) <<"����" <<setw(8) <<"���" <<setw(8) <<"�۸�" <<setw(8) <<"����"  <<setw(8) <<"Ʒ��"  <<endl;
    cout <<setw(8) <<name <<setw(8) <<number <<setw(8) <<price <<setw(8) <<count <<setw(8) <<brand<<endl;
}

void Electric::write()
{                      //������������õ�������Ϣд���ļ�����
    Electric Ele;
    char ch;
    ofstream myfile("Electric.txt",ios::app);
    do
    {
        Ele.enter();
        myfile.write((char *)&Ele,sizeof(Ele));
        cout <<"����Ҫ�����¸����õ�������Ϣ��?(y/n):";
        cin>>ch;
    }
    while (ch=='y'||ch=='Y');
    myfile.close();
}
 
void Electric::readfile()//������������õ����Ķ��ļ�����
{                  
    ifstream myfile("Electric.txt",ios::binary);
    while (myfile)
    {
        Electric Ele;
        if (myfile.read((char*)&Ele,sizeof(Ele)))
        {
            if (Ele.number!=-1)         //ɾ��һ�����õ��������Ϣ��ͨ������ʾ������ɾ��  
                Ele.display();
        }
    }
    myfile.close();
}

void Electric::change_infor(){                 //������������õ��������Ϣ�޸Ļ�ɾ������
    Electric Ele;
    int num,p;
    cout<<"��������Ҫ�޸Ļ���ɾ���ļ��õ����ı�ţ�";
    cin>>num;
    fstream myfile("Electric.txt",ios::in|ios::out);
    while(myfile.good()){
        myfile.read((char*)&Ele,sizeof(Ele));
        if(num==Ele.number){
            myfile.seekg(-sizeof(Ele),ios::cur);
            cout<<"����Ҫ�޸Ļ���Ҫɾ���ü��õ����ļ�¼(1:ɾ�� 2:�޸�):";
            cin>>p;
            if(p==1){Ele.number=-1;break;}
            else {
                cout<<"�������µ���Ϣ"<<endl;
                Ele.enter();break;    
            }
        }    
    }
    myfile.write((char *)&Ele,sizeof(Ele));
    myfile.close();
}

void Ordinary::display()
{                                        //��������������Ʒ�����Ϣ��ʾ����
    cout <<setw(8) <<"����" <<setw(8) <<"���" <<setw(8) <<"�۸�" <<setw(8) <<"����" <<setw(8) <<"����" <<endl;
    cout <<setw(8) <<name <<setw(8) <<number <<setw(8) <<price <<setw(8) <<count <<setw(8) <<classify <<endl;
}

void Ordinary::write()
{                      //��������������Ʒ�����Ϣд���ļ�����
    Ordinary Ord;
    char ch;
    ofstream myfile("Ordinary.txt",ios::app);
    do
    {
        Ord.enter();
        myfile.write((char *)&Ord,sizeof(Ord));
        cout <<"����Ҫ�����¸�����Ʒ�����Ϣ��?(y/n):";
        cin>>ch;
    }
    while (ch=='y'||ch=='Y');
    myfile.close();
}

void Ordinary::readfile()
{                  //��������������Ʒ��Ķ��ļ�����
    ifstream myfile("Ordinary.txt",ios::in);
    while (myfile)
    {
        Ordinary Ord;
        if (myfile.read((char*)&Ord,sizeof(Ord)))
        {
            if (Ord.number!=-1)             //ɾ��һ������Ʒ�����Ϣ��ͨ������ʾ������ɾ��
                Ord.display();
        }
    }
    myfile.close();
}

void Ordinary::change_infor(){
    Ordinary Ord;
    int num,p;
    cout<<"��������Ҫ�޸Ļ���ɾ��������Ʒ��ı�ţ�";
    cin>>num;
    fstream myfile("Ordinary.txt",ios::in|ios::out);
    while(myfile.good()){
        myfile.read((char*)&Ord,sizeof(Ord));
        if(num==Ord.number){
            myfile.seekg(-sizeof(Ord),ios::cur);
            cout<<"����Ҫ�޸Ļ���Ҫɾ��������Ʒ�ļ�¼(1:ɾ�� 2:�޸�):";
            cin>>p;
            if(p==1){Ord.number=-1;break;}
            else {
                cout<<"�������µ���Ϣ"<<endl;
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
    cout <<"\t\t*   �̵�������ϵͳ      \t\t"<<endl;
    cout <<"\t\t**************************\t\t"<<endl;
    cout <<"\t\t*     0.�˳�              \t\t"<<endl;
    cout <<"\t\t*     1.��������Ʒ��Ϣ    \t\t"<<endl;
    cout <<"\t\t*     2.��ʾ��Ʒ��Ϣ      \t\t"<<endl;
    cout <<"\t\t*     3.����Ϣ���޸Ļ�ɾ��\t\t"<<endl;
    cout <<"\t\t*     4.�������˵�        \t\t"<<endl;
    cout <<"\t\t**************************\t\t"<<endl;
    cout <<"��ѡ�����(0-4) "                <<endl;
    cout <<"��ѡ��:";
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
            cout <<"�㻹����к��ֲ�����";
            break;
        case 2:
            pt->readfile();
            cout <<"�㻹����к��ֲ�����";
            break;
        case 3:
        	pt->change_infor();
            cout <<"�㻹����к��ֲ�����";
            break;
        case 4:
            k=0;
            break;
        default:
            cout <<"���ѡ�����������ѡ��";
            break;
        }
    }
    while (k);
}
 
int main()
{
b:
    cout <<"\t\t*********************************\t\t" <<endl;
    cout <<"\t\t*        �̵�ֿ����ϵͳ\t     \t\t" <<endl;
    cout <<"\t\t*        ��ѡ����Ʒ����\t       \t\t" <<endl;
    cout <<"\t\t*          0:�˳�               \t\t" <<endl;
    cout <<"\t\t*          1:���õ�����         \t\t" <<endl;
    cout <<"\t\t*          2:����Ʒ��           \t\t" <<endl;
    cout <<"\t\t*********************************\t\t" <<endl;
    cout <<"��ѡ��(0-2):"; 
    cin>>i;
    switch (i) 
    {
    case 0:
        cout <<"���Ѿ��˳�ϵͳ";
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
        cout <<"���ѡ������������ѡ��";
        break;
    }
    if (k==0)
        k=1;
    system("cls");
    goto b;
}
