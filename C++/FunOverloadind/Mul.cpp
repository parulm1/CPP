#include<iostream>
using namespace std;
int Mul(int,int)
{   
    int n1,n2,m;
    cout<<"Enter two no. : ";
    cin>>n1>>n2;
    m=n1*n2;
    return m;
}
int Mul(int,int,int)
{
    int n1,n2,n3,m;
    cout<<"\nEnter three no. : ";
    cin>>n1>>n2>>n3;
    m=n1*n2*n3;
    return m;
}
float Mul(float,float)
{
    float n1,n2,m;
    cout<<"\nEnter two decimal no. : ";
    cin>>n1>>n2;
    m=n1*n2;
    return m;
}
int main()
{
    int num1,num2,num3,MI2,MI3;
    float no1,no2,MF2;
    MI2=Mul(num1,num2);
    cout<<"Multiplication is "<<MI2;
    MI3=Mul(num1,num2,num3);
    cout<<"Multiplication is "<<MI3;
    MF2=Mul(no1,no2);
    cout<<"Multiplication is "<<MF2;
}