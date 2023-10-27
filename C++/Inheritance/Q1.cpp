#include<iostream>
using namespace std;
class Base
{
    private:int a,b;
    public:
    void get()
    {
        cout<<"Enter two  no. : ";
        cin>>a>>b;
    }
    void show()
    {
        cout<<"A = "<<a;
        cout<<"B = "<<b;
    }
};
class Derive:private Base
{
    private:
    public:void display()
    {
        get();
        show();
        cout<<"\nCall of Base class";
    }
};
int main()
{
    Derive d;
    d.get();
    d.display();
    d.show();
}

