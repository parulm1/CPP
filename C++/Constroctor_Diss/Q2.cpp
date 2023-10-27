/* ii. Write the definition of the constructor 2 so that the private member variable x is initialized
according to the value of the parameter, and the private member variable y is initialized to 0.
 */
/* #include <iostream>
using namespace std;
class Sample
{
private:
 int x;
 double y;
public :
 Sample(int); 
 
};
Sample::Sample(int a)
{
    x=a;
    y=0;
}
 */
//----------------------------------------------------------------------------------
/* iii. Write the definition of the constructors 3 and 4 so that the private
member variables are initialized according to the values of the parameters. */
 /* class Sample
{
private:
 int x;
 double y;
public :
 Sample(int, int); //Constructor 3
 Sample(int, double); //Constructor 4
};
Sample::Sample(int a,int b)
{
    x=a;
    y=b;
} */
#include<iostream>
using namespace std;
class demo
{
int a,b,c;
public:
void fun(int a,int b=20,int c=10);
};
void demo::fun(int a,int b,int c)
{
 int d=a+b+c;
 cout<<"Addition = "<<d;
}
int main()
{
demo d1;
int a;
cout<<"Enter the value of a\n";
cin>>a;
d1.fun(a);
}