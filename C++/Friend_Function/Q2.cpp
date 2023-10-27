#include<iostream>
using namespace std;
class Deci_to_Binary
{
   friend void DtoB();   
};
void DtoB()
{
   int n,i=0,j;
   string bnum[32];
   while (n>0)
   {
    bnum[i]=n%2;
    n=n/2;
    i++;
   }
   for ( j = 1; j >=0 ; j++)
   cout<<bnum;
}
int main()
{
    int num;
    cout<<"Enter DECIMAL no. : ";
    cin>>num;
    DtoB();
}