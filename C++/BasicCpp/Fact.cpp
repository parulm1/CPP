#include<iostream>
using namespace std;
int fact(int)
{
    int f=1,i=1,num;
    cout<<"Enter the no. to print factorial :";
    cin>>num;
    while (i<=num)
    {
        cout<<i<<" *";
        f*=i;
        i++;
    }
    cout<<"\b";
    cout<<"= "<<f;
    return f*=i;
}
int main()
{
    int f;
    fact(f);
}
    