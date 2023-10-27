//3. WAP to calculate simple interest. (si=p*n*r)/100.
#include<iostream>
using namespace std;
int main()
{
    int p,n,r;
    float si;
    cout<<"Enter p,n and r :";
    cin>>p>>n>>r;
    si=p*n*r/100.;
    cout<<"Simple intrest is :"<<si; 
}