/* 4 Define a class in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following
criteria
 Distance Fuel
 <=1000 500
 more than 1000 and <=2000 1100
 more than 2000 2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number,
Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members  */
#include<iostream>
using namespace std;
class Emirates
{
    private:
    int Flight_no;
    string Destination;  
    float Distance;
    float Fuel;
    void CALFUEL()
    {
        if(Distance<=1000)
        Fuel=500;
        else if(Distance>1000 && Distance<=2000)
        Fuel=1100;
        else if(Distance>2000)
        Fuel=2200; 
    }
    public:
    void FEEDINFO()
    {
        cout<<"Flight Number : ";
        cin>>Flight_no;
        cout<<"Destination : ";
        cin>>Destination;
        cout<<"Distance : ";
        cin>>Distance;
        CALFUEL();
    }
    void SHOWINFO()
    {
        cout<<"Fuel Req. : "<<Fuel;
    }
};
int main()
{
    Emirates e;
    e.FEEDINFO();
    e.SHOWINFO();
}