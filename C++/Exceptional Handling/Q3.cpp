#include<iostream>
using namespace std;
int main()
{
    int rank,percent;
    cout<<"Enter your percentage in BE : ";
    cin>>percent;
    cout<<"Enter your rank in PRECAT : ";
    cin>>rank;  
    try
    {
        if(percent>=50 && rank<=2000)
        {
            cout<<"Your Addmission is in Process....";
        }
        throw "Better Luck Next Time !!";
    }
    catch(const char* m)
    {
        cerr<< m <<endl;
    }   
}