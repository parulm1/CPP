/* 6 Define a class REPORT with the following specification:
Private members :
adno 4 digit admission number
name 20 characters
marks an array of 5 floating point values
average average marks obtained
GETAVG() a function to compute the average obtained in five subject
Public members:
READINFO() function to accept values for adno, name, marks. Invoke the
function GETAVG()
DISPLAYINFO() function to display all data members of report on the screen.
You should give function definitions.  */
#include<iostream>
using namespace std;
class REPORT
{
    private:
    int adno;
    string name;  
    float marks[5],size=5;
    float average,sum=0;
    float GETAVG()
    {
        for (int i = 0; i <5; i++)
        {
            cin>>marks[i];
            sum+=marks[i];
        }
        
        return average=sum/5;
    }
    public:
    void READINFO()
    {
        lable:
        cout<<"Admission Number(4 digits) : ";
        cin>>adno;
        if (adno>999 && adno<10000)
        {
        }
        else
        {
            goto lable;
        }
        cout<<"Name : ";
        cin>>name;
        cout<<"Marks 5 subjects : ";
        cin>>marks[5];
        GETAVG();
    }
    void DISPLAYINFO()
    {
        cout<<"Average : "<<average;
    }
};
int main()
{
    REPORT r;
    r.READINFO();
    r.DISPLAYINFO();
}