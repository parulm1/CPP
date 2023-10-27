#include<iostream>
using namespace std;
class employee
{
private:
    string Name;
    int Id;
    float Salary;
public:
    void get()
    {
        cout<<"Enter Name ,Id and Basic salary : \n";
        cin>>Name;
        cin>>Id;
        
    }
    void print()
    {
        cout<<"Name : "<<Name<<"\nId : "<<Id;
        cout<<"\nSalary : "<<Salary;
    }
    void cal_salary()
    {
        int da,hra,ta,pf,bs;
        cin>>bs;
        da=0.40*bs;
        hra=0.25*bs;
        ta=0.30*bs;
        pf=0.20*bs;
        Salary=(bs+hra)-pf;
    }
};
int main()
{
    employee emp;
    emp.get();
    emp.cal_salary();
    emp.print();
    
}




