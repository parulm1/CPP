#include<iostream>
using namespace std;
int add(int ,int )
{
    int a,b,sum=0;
    cout<<"Enter two no.";
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum = "<<sum;
}
int add(int,int,int)
{
    int a,b,c,sum=0;
    cout<<"\nEnter three no.";
    cin>>a>>b>>c;
    sum=a+b+c;
    cout<<"Sum = "<<sum;
}
float add(int,float,int)
{
    int a,b;
    float c,sum=0;
    cout<<"\nEnter two integers and one float no.";
    cin>>a>>c>>b;
    sum=a+c+b;
    cout<<"Sum = "<<sum;
}
int main()
{
    int x,y,z;
    float f;
    add(x,y);
    add(x,y,z);
    add(x,f,z);
}
