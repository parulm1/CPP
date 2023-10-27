#include<iostream>
using namespace std;
template <class T>
T swap(T *a,T *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int A=22,B=33;
    swap(A,B);
    cout<<"Swapped Values are: "<<A<<" "<<B;
}