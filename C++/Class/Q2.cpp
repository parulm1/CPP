#include<iostream>
using namespace std;
class student
{
    int prn_no;
    char name[20];
    public:
    void get()
    {
        cout<<"Enter Prn no. and mame :";
        cin>>prn_no>>name;
    }
    void put()
    {
        cout<<"\nPrn no. :"<<prn_no;
        cout<<"\nStudent name :"<<name<<"\n";
    }
};
int main()
{
    student s[2];
    for(int i=0;i<2;i++)
    {
        s[i].get();
        s[i].put();
    }
    /* student s,*p;
    p=&s;
    p->get();
    p->put(); */
}