#include<iostream>
using namespace std;
float Area(float)
{
    float pi=3.14,r,a;
    cout<<"Enter radius : ";
    cin>>r;
    a=pi*r*r;
    return a;
}
int Area(int)
{
    int l,b,a;
    cout<<"\nEnter length and breadth : ";
    cin>>l>>b;
    a=l*b;
    return a;
}
int main()
{
    float c,AC;
    int r,AR;
    AC=Area(c);
    cout<<"Area of circle = "<<AC;
    AR=Area(r);
    cout<<"Area of rectangle = "<<AR;
}