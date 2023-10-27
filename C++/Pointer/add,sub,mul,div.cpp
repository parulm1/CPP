//1.WAP to add two variable using pointer.
//4.WAP to add,sub,mul,div using pointer.
#include<iostream>
using namespace std;
void add(int *a,int *b, int *sum)
{
    *sum=*a + *b;
}
void sub(int *a,int *b, int *minus)
{
    *minus=*a - *b;
}
void mul(int *a,int *b, int *prod)
{
    *prod=*a * *b;
}
void div(int *a,int *b, float *divide)
{
    *divide=*a / *b;
}
int main()
{
    int a,b,sum,minus,prod;
    float divide;
    cout<<"Enter two numbers : \nA = ";
    cin>>a;
    cout<<"B = ";
    cin>>b;
    add(&a,&b, &sum);
    sub(&a,&b, &minus);
    mul(&a,&b, &prod);
    div(&a,&b, &divide);
    cout<<"Addition is : "<<sum;
    cout<<"\nSubstraction is : "<<minus;
    cout<<"\nMultiplication is : "<<prod;
    cout<<"\nDivision is : "<< divide;
}