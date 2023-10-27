//If we call by value the value does not change or the function does not work.
#include<iostream>
using namespace std;
void doit(int num)
{
    num=num*2;
}
int main()
{
    int no;
    cout<<"Enter no : ";
    cin>>no;
    doit(no);
    cout<<"Twice of no. is : "<<no;
}