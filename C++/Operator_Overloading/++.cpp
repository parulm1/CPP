#include<iostream>
using namespace std;
class op
{
int a,b,c,d;
public:
    op()
    {
     a=10;
     b=20;
     c=30;
     d=40;
    }
void operator ++()
{
a=++a;
b=b+1;
}
void operator --()
{
    c=--c;
    d=d+1;
}
void show()
{
cout<<"value of a="<<a<<endl<<"value of b="<<b<<endl;
cout<<"value of c="<<c<<endl<<"value of d="<<d<<endl;
}
};
int main()
{
op o;
o.show();
++o;
--o;
o.show();
}