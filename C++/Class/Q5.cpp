#include<iostream>
using namespace std;
class student
{
    string Name[20];
    int Roll_no;
    string Address[20];
    long long Contact_no;
    public:
    student()
    {
        cout<<"Default-------------\n";
    }
    student(string Name,int Roll_no ,string Address,long long Contact_no)
    {
        cout<<"Student Info : \n"<<"Name : "<<Name<<"\nRoll_no : "<<Roll_no<<
        "\nAddress : "<<Address<<"\nContact_no : "<<Contact_no;
    }
};
int main()
{
    student s1,s2("Parul",16,"Mahal Ngp",9096090646);
}
