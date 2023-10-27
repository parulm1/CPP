#include<iostream>
using namespace std;

class Holiday
{
    public:
    Holiday()
    {
        cout<<"Default";
    }
    Holiday(int i)
    {
        cout<<"\n1st Integer : "<<i;
    }
    Holiday(int m,int n)
    {
        cout<<"\n2nd Integer : "<<m;
        cout<<"\n3rd Integer : "<<n;
    }
};
int main()
{
    Holiday h,h1(2),h2(4,5);
}