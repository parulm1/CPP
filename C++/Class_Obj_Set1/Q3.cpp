/* 3 Define a class TEST in C++ with following description:
Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members
- A function SCHEDULE() to allow user to enter values for TestCode, Description,
NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data members */
#include<iostream>
using namespace std;
class Test
{
    private:
    int TestCode;
    string Description;  
    int NoCandidate;
    int CenterReqd;
    float CALCNTR()
    {
        int CenterReqd;
        return CenterReqd=(NoCandidate/100+1);
    }
    public:
    void SCHEDULE()
    {
        cout<<"Test Code : ";
        cin>>TestCode;
        cout<<"\nDescription : ";
        cin>>Description;
        cout<<"\nNo. of Candidates : ";
        cin>>NoCandidate;
        CenterReqd=CALCNTR();
    }
    void DISPTEST()
    {
        cout<<"No. of Centers : "<<CenterReqd;
    }
};
int main()
{
    Test t;
    t.SCHEDULE();
    t.DISPTEST();
}