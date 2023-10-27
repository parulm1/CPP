/* Question 1 Consider the following declaration and answer the questions given below :
(i) Name the base class and derived class of the class QQQ. >>PPP & RRR
(ii) Name the data member(s) that can be accessed from function DISP().>>M & U
(iii) Name the member function(s), which can be accessed from the objects of
class RRR. >>DISP( void ); INDATA(int, int); OUTDATA();
(iv)Is the member function OUT() accessible by the object of the
class QQQ? >> No */
#include<iostream>
using namespace std;
class PPP
{
int H;
protected :
int S;
public :
void INPUT (int);
void OUT();
};
class QQQ : private PPP
{
int T;
protected :
int U;
public :
void INDATA(int, int);
void OUTDATA();
};
class RRR : public QQQ
{
int M;
public :
void DISP( void );
};