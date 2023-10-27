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
        cout<<"\nStudent name :"<<name;
    }
};
/* int main()
{
    student s,*p;
    p=&s;
    p->get();
    p->put();
} */
int main()
{
    student s;
    s.get();
    s.put();
}