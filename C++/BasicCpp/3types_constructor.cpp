#include<iostream>
using namespace std;
class rectangle
{
    int area,perimeter,l,b;
    public:
    rectangle()
    {
        l=10;
        b=20;
        area=l*b;
        perimeter=2*l+2*b;
    }
    rectangle(int x,int y)
    {
        l=x;
        b=y;
        area=l*b;
        //cout<<"\nArea = "<<area;
        perimeter=2*l+2*b;
        //cout<<"\nPerimeter = "<<perimeter;   
    }
    rectangle(rectangle &o)
    {
        l=o.l;
        b=o.b;
    }
    void show()
    {
        cout<<"\nArea = "<<area;
        cout<<"\nPerimeter = "<<perimeter;
    }
    ~rectangle()
    {
        cout<<"\nDestructor";
    }

};
int main()
{
    rectangle r,r1(2,4),r2(r);
    r.show();
    r1.show();
    r2.show();
}