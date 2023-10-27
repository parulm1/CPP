#include<iostream>
using namespace std;
void doit(int*num)
{
    *num=*num*2;
}
int main()
{
    int no;
    cout<<"Enter no : ";
    cin>>no;
    doit(&no);
    cout<<"Twice of no. is : "<<no;
}