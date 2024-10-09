#include<iostream>
using namespace std;

class student // parent class/base class
{
    int rollno;
    string name, prn;
    public: 
    void accept();
    void display();
}

class test: public student //child class/derived class
{
    test t;
    string c1, c2, c3, c4, c5;
    float cia_1, cia_2;
    public:
    void accept_c();
    void display_c();
}

void student:: accept()
{
    cout<<"Enter roll number";
    cin>>rollno;
    cout<<"Enter name and PRN";
    cin>>name>>prn;
}

void student:: display()
{
    cout<<"\n"<<rollno<<"\t"<<name<<"\t"prn;
}