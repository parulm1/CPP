#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    try
    {
        if(age>=18)
        {
        cout<<"Eligible for VOTING";
        }
        throw "Not Eligible for VOTING";
    }
    catch(const char* m)
    {
        cerr << m << endl;
    }
}