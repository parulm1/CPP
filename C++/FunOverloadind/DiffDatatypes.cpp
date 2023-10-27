#include<iostream>
using namespace std;
int Print(int)
{
    int num;
    cout<<"Enter any no. : ";
    cin>>num;
    return num;
}
float Print(float)
{
    float f;
    cout<<"\nEnter any decimal no. : ";
    cin>>f;
    return f;
}
char Print(char)
{
    char ch;
    cout<<"\nEnter any charecter : ";
    cin>>ch;
    return ch;
}
int main()
{
    int i,I;
    float f,F;
    char c,C;
    I=Print(i);
    cout<<"No. entered is "<<I;
    F=Print(f);
    cout<<"Float entered is "<<F;
    C=Print(c);
    cout<<"Charecter entered is "<<C;
}