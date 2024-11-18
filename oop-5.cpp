/Hospital Management System/
#include<iostream>
using namespace std;

class person
{
    public:
    string name,address,des;
    int salary,contact_no;
    virtual void accept()=0;
    virtual void display()=0;
};

class doctor:public person
{
public:
void accept()
{
    cout<<"\nAccept Details of doctor:";
    cout<<"\nName,Adress,designation,salary,contact_n0";
    cin>>name>>address>>des>>salary>>contact_no;
}
void display()
{
    cout<<"\n Details of doctor are:";
    cout<<"\n"<<name<<"\t"<<address<<"\t"<<des<<"\t"<<salary<<"\t"<<contact_no;
}
};

class nurse:public person
{
public:
void accept()
{
    cout<<"\nAccept Details of nurse:";
    cout<<"\nName,Adress,designation,salary,contact_n0";
    cin>>name>>address>>des>>salary>>contact_no;
}
void display()
{
    cout<<"\n Details of nurse are:";
    cout<<"\n"<<name<<"\t"<<address<<"\t"<<des<<"\t"<<salary<<"\t"<<contact_no;
}
};

class Astaff:public person
{
public:
void accept()
{
    cout<<"\nAccept Details of Astaff:";
    cout<<"\nName,Adress,designation,salary,contact_n0";
    cin>>name>>address>>des>>salary>>contact_no;
}
void display()
{
    cout<<"\n Details of Astaff are:";
    cout<<"\n"<<name<<"\t"<<address<<"\t"<<des<<"\t"<<salary<<"\t"<<contact_no;
}
};

int main()
{
    doctor d;
    nurse n;
    Astaff a;
    d.accept();
    d.display();
    n.accept();
    n.display();
    a.accept();
    a.display();
return 0;
}