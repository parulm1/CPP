//using scope resolution 
#include<iostream>
using namespace std;
class student
{
    int no;
    char name;
    public:
    void get();
    void put();
};
void student::get()
{
    cout<<"Enter Prn no. and mame :";
    cin>>no>>name;
}
void student::put()
{
    cout<<"\nPrn no. :"<<no;
    cout<<"\nStudent name :"<<name;
}
int main()
{
    student s,*p;
    p=&s;
    p->get();
    p->put();
}