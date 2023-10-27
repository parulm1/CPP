#include<iostream>
using namespace std;
class Number
{
    protected:
    int n;
    public:
    void num()
    {
        cout<<"Enter number n =  ";
        cin>>n;
    }
};
class Square:public Number 
{
    protected:
    int s;
    public:
    void square()
    {
        s=n*n;
        cout<<"Square = "<<s;
    }
};
class Cube:public Square
{
    public:
    void cube()
    {
        cout<<"\nCube = "<<n*n*n;
    }
};
int main()
{
    Cube c;
    c.num();
    c.square();
    c.cube();
} 