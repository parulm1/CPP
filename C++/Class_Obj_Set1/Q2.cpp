/* 2 Define a class batsman with the following specifications:
Private members:
bcode 4 digits code number
bname 20 characters
innings, notout, runs integer type
batavg it is calculated according to the formula – batavg =runs/(innings-notout)
calcavg() Function to compute batavg
Public members:
readdata() Function to accept value from bcode, name, innings, notout
and invoke the function calcavg()
displaydata() Function to display the data members on the screen. */
#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode;
    string name;
    int innings, notout, runs;
    float batavg;
    float calcavg()
    {
        batavg =runs/(innings-notout);
        return batavg;
    }
    public:
    void readdata()
    {
        lable:
        cout<<"Enter bcode -- only enter 4 digit no.";
        cin>>bcode;
        if (bcode>999 && bcode<10000)
        {
        }
        else
        {
            goto lable;
        }
        cout<<"Enter name,notout,innings,runs : \n";
        cin>>name>>notout>>innings>>runs;
        calcavg();
    }

    void displaydata()
    {
        cout<<"\nName : "<<name<<"\nBcode : "<<bcode<<"\nNot out : "<<notout<<"\nInnings : "<<innings<<"\nRuns : "<<runs<<"\nAvg : "<<batavg;
    }
};
int main()
{
    batsman btm;
    btm.readdata();
    btm.displaydata();
}
