/* oops 4 img and real*/
#include<iostream>
using namespace std;

class complex
{
int r;
int img;
public:
complex()
{
r=0;
img=0;
}

complex(int a,int b)
{
r=a;
img=b;
}

void display()
{
if(img>=0)
{
cout<<"\n"<<r<<"+"<<img<<"i";
}
else 
{
cout<<"\n"<<r<<""<<img<<"i";
}
}

complex operator+(complex );
friend complex operator-(complex c1,complex c2);
complex operator*(complex c2);
complex operator/(complex );
}c1,c2,c3; 

complex complex::operator+(complex c2)
{
c3.r=r+c2.r;
c3.img=img+c2.img;
return c3;
}

complex operator-(complex c1,complex c2)
{
c3.r=c1.r-c2.r;
c3.img=c1.img-c2.img;
return c3;
}

complex complex::operator*(complex c2)
{
c3.r=(r*c2.r)-(img*c2.img);
c3.img=(r*c2.img)+(img*c2.r);
return c3;
}

complex complex::operator/(complex c2)
{
c3.r=(r*c2.r)-(img*c2.img)/(c2.r*c2.r)+(c2.img*c2.img);
c3.img=(r*c2.img)+(img*c2.r)/(c2.r*c2.r)+(c2.img*c2.img); 
return c3;
}

int main()
{
int ch;
int rr,im;
cout<<"\n Enter the first complex number";
cin>>rr>>im;

complex c1(rr,im);
cout<<"\n Enter the Second  complex number";
cin>>rr>>im;

complex c2(rr,im);


do{
cout<<"1.add"<<"\n"<<"2.substraction"<<"\n"<<"3.Multiplication"<<"\n"<<"4.Division";
cout<<"\n"<<"enter choice";
cin>>ch;
switch(ch)
{
case 1:
 cout<<"addition";
 c1+c2;
 c3.display();
 break;

case 2:
  cout<<"substraction";
  c1-c2;
  c3.display();
  break;
  
case 3:
  cout<<"Multiplication";
  c3=c1*c2;
  c3.display();
  break;
  
case 4:
  cout<<"division";
  c3=c1/c2;
  c3.display();
  break; 
}
}while(ch!=0);
return 0;
}
