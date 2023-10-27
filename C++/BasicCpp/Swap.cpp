#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 2 numbers :\n";
    cin>>a>>b;
    cout<<"Befor swaping : a = "<<a<<" and b = "<<b;
    c=a;
    a=b;
    b=c;
    cout<<"\nAfter swaping : a = "<<a<<" and b = "<<b; 
}