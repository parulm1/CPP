#include <iostream>
using namespace std;
double division(int a, int b)
{
 if( b == 0 )
 {
 throw "Division by zero condition!";
 }
 return (a/b);
}
int main ()
{
 int x,y;
 cout<<"Enter Two Numbers : \nX = ";
 cin>>x;
 cout<<"\nY = ";
 cin>>y;
 double z = 0;
 try {
 z = division(x, y);
 cout << z << endl;
 }
catch (const char* msg) {
 cerr << msg << endl;
 }
 return 0;
}
