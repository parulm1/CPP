/* #include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void get()
    {
        cout<<"Enter value for A : ";
        cin>>a;
    }
};
class B
{
    protected:
    int b;
    public:
    void getin()
    {
        cout<<"Enter value for B : ";
        cin>>b;
    }
};
class C:public A ,public B
{
    private:
    int c;
    public:
    void add()
    {
        c=a+b;
        cout<<"Addition = "<<c;
    }
};    
int main()
{
    C c;
    c.get();
    c.getin();
    c.add();
}
 */
//Using return type
#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    int get()
    {
        cout<<"Enter value for A : ";
        cin>>a;
        return a;
    }
};
class B
{
    private:
    int b;
    public:
    int getin()
    {
        cout<<"Enter value for B : ";
        cin>>b;
        return b;
    }
};
class C:public A ,public B
{
    private:
    int c,x,y;
    public:
    void add()
    {
        x=get();
        y=getin();
        c=x+y;
        cout<<"Addition = "<<c;
    }
};    
int main()
{
    C c;
    c.add();
}