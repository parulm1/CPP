#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo()
    {
        a=10;
        b=20;
    }
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    demo(demo &obj)
    {
        a=obj.a;
        b=obj.b;
    }
    void show()
    {
        cout<<"\nValue of a : "<<a;
        cout<<"\nValue of b : "<<b;
    }
    ~demo()
    {
        cout<<"\nDestructor";
    }
};
int main()
    {
        demo d,d1(2,3),d3(d);
        d.show();
        d1.show();
        d3.show();
    }
