/* 1 Answer the questions (i) and (iii) after going through the following class:

i. Write statements in C++ that would execute Function 1 and Function 3 of class
Seminar.
ii. In Object Oriented Programming, what is Function 4 referred as and when does it
get invoked/called?
iii. In Object Oriented Programming, which concept is illustrated by Function 1 and
Function 3 together?  */
#include<iostream>
using namespace std;
class Seminar
{
 int time;
public:
 Seminar() //Function 1
 {
 time = 30;
 cout << "Seminar starts now" <<endl;
 }
 Seminar(int duration) //Function 3
 {
 time = duration;
 cout << "Seminar starts now" << endl;
 }
 
};
int main()
{
    Seminar s,s1(22);
    
}