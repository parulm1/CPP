#include<iostream>
using namespace std;
class Add
{
    private:
    int a=2,b=3,addition;
    public:
    int sum()
    {
        addition=a+b;
        cout<<"Default = "<<addition;
    }
    int sum(int x,int y)
    {
        cout<<"\nEnter two no. : ";
        cin>>a>>b;
        addition=a+b;
        cout<<"Paremetarized = "<<addition;
    }

};
int main()
{
    int a,b;
    Add A;
    A.sum();
    A.sum(a,b);
}