#include<iostream>
using namespace std;
class Calculation
{
private:
    int a,b;
public:
    friend int add();
    friend int sub();
    friend int mul();
    friend float mod();
};
int add(int a,int b)
    {
        return a+b;
    }
int sub(int a,int b)
    {
        return a-b;
    }
int mul(int a,int b)
    {
        return a*b;
    }
float mod(int a,int b)
    {
        return a%b;
    }
int main()
{
    cout<<"Addition = "<<add(10,20);
    cout<<"\nSubstraction = "<<sub(20,30);
    cout<<"\nMultiplication = "<<mul(3,20);
    cout<<"\nModulous = "<<mod(20,10);
}  

