#include<iostream>
using namespace std;
int i,j;
template <class T>
void selsort(T a[],int n)
{   
    T temp;
    cout<<"enter size of array:";
    cin>>n;

    cout<<"enter array elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"array after sorting is:";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}

int main()
{   
    int n;
    int a[10];
    float b[10];
    char c[10];
    int ch;
    do
    {
    cout<<"\n1.sort integer array";
    cout<<"\n2.sort float array";
    cout<<"\n3.sort character array";
    cout<<"\nenter your choice:";
    cin>>ch;

    switch(ch)
    {
        case 1:selsort(a,n);
              break;
        case 2:selsort(b,n);
               break;
        case 3:selsort(c,n);
              break;
        
    }
}
while(ch!=0);
return 0;
}