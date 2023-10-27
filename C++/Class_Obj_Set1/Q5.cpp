/* 5 Define a class BOOK with the following specifications :
Private members of the class BOOK are
BOOK NO integer type
BOOKTITLE 20 characters
PRICE float (price per copy)
TOTAL_COST() A function to calculate the total cost for N number of copies
where N is passed to the function as argument.
Public members of the class BOOK are
INPUT() function to read BOOK_NO. BOOKTITLE, PRICE
PURCHASE() function to ask the user to input the number of copies to be
purchased. It invokes TOTAL_COST() and prints the total cost to
be paid by the user.
Note : You are also required to give detailed function definitions.  */
#include<iostream>
using namespace std;
class BOOK
{
    private:
    int BOOK_NO;
    string BOOKTITLE;  
    float PRICE;
    int TOTAL_COST(int copies) 
    {
        return PRICE * copies;
    }
    public:
    void INPUT()
    {
        cout<<"Book Number : ";
        cin>>BOOK_NO;
        cout<<"Book Title : ";
        cin>>BOOKTITLE;
        cout<<"Price : ";
        cin>>PRICE;
    }
    void PURCHASE()
    {
        int copies,n;
        cout<<"copies required : ";
        cin>>copies;
        float tc =TOTAL_COST(copies);
        cout<<"total cost : "<<tc;    
    }
};
int main()
{
    BOOK b;
    b.INPUT();
    b.PURCHASE();
    return 0;
}