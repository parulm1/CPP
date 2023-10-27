#include<iostream>
using namespace std;
class student
{
    protected:
    int id;
    string name;
    public:
    void get()
    {
        cout<<"\nEnter student id and name : ";
        cin>>id>>name;
    }
    void put()
    {
        cout<<"\nStudent Id : "<<id;
        cout<<"\nStudent Name : "<<name;
    }
};
class test:public student
{
    protected:
    int m1,m2,m3;
    public:
    void test_data()
    {
        cout<<"\nMarks of Subject 1 : ";
        cin>>m1;
        cout<<"\nMarks of Subject 2 : ";
        cin>>m2;
        cout<<"\nMarks of Subject 3 : ";
        cin>>m3; 
    }
};
class sports
{
    protected:
    int ma1,ma2,ma3;
    public:
    void sports_data()
    {
        cout<<"\nMarks of Sports 1 : ";
        cin>>ma1;
        cout<<"\nMarks of Sports 2 : ";
        cin>>ma2;
        cout<<"\nMarks of Sports 3 : ";
        cin>>ma3; 
    }
};
class result:public test , public sports
{
    protected:
    int res;
    public:
    void Result()
    {
        res=m1+ma1+m2+ma2+m3+ma3;
        cout<<"Result = "<<res;
    }
};
int main()
{
    result R;
    R.get();
    R.put();
    R.test_data();
    R.sports_data();
    R.Result();
}