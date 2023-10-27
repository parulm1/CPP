#include<iostream>
using namespace std;
//Using third variable
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
//Without Using third variable
void swaping(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main()
{
    int a,b;
    cout<<"Using third variable";
    cout<<"Befor Swaping\na = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    swap(&a,&b);
    cout<<"After Swapping\na = "<<a;
    cout<<"\nb = "<<b;

    int x,y;
    cout<<"\nWithout Using third variable";
    cout<<"Befor Swaping\nx = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    swaping(&x,&y);
    cout<<"After Swapping\nx = "<<x;
    cout<<"\ny = "<<y;
}
