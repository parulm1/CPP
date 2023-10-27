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
class science:public student
{
    protected:
    string s1,s2,s3;
    public:
    void getin()
    {
        cout<<"\nEnter three subjects : ";
        cin>>s1>>s2>>s3;
    }
    void putin()
    {
        cout<<"\nSubject 1 : "<<s1;
        cout<<"\nSubject 2 : "<<s2;
        cout<<"\nSubject 3 : "<<s3;
    }
};
class commerce:public student
{
    protected:
    string c1,c2,c3;
    public:
    void input()
    {
        cout<<"\nEnter three subjects : ";
        cin>>c1>>c2>>c3;
    }
    void output()
    {
        cout<<"\nSubject 1 : "<<c1;
        cout<<"\nSubject 2 : "<<c2;
        cout<<"\nSubject 3 : "<<c3;
    }
};
int main()
{
    science s;
    s.get();
    s.put(); 
    s.getin();
    s.putin();
    commerce c;
    c.get();
    c.put(); 
    c.input();
    c.output();
}