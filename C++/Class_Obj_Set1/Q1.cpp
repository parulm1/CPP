/* 1 Define a class student with the following specification
Private members of class student
admno integer
sname 20 character
eng. math, science float
total float
ctotal() a function to calculate eng + math + science with float return
type.
Public member function of class student
Takedata() Function to accept values for admno, sname, eng, science and
invoke ctotal() to calculate total.
Showdata() Function to display all the data members on the screen.
 */
#include<iostream>
using namespace std;
class student
{
    int adm_no;
    string name;
    float e,m,s;
    float total;
    float cal_total()
    {
        return total=e+m+s;
    }
    public:
    void Takedata();
    void Showdata();
};
    void student::Takedata()
    {
        cout<<"Enter Name,Admission no. and marks of english,maths and science\n";
        cin>>name;
        cin>>adm_no;

        cin>>e>>m>>s;
        total = cal_total();
    }
    void student::Showdata()
    {
        cout<<"\nStudent Data : "<<name;
        cout<<"\nAdmission No. : "<<adm_no;
        
        cout<<"\nTotal Marks : "<<total;
    }

int main()
{
    student stu ;
    stu.Takedata();
    stu.Showdata();    
}    