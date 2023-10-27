#include<iostream>
using namespace std;
class CashRegister
{
   private:
   int CashOnHand;
   public:
   CashRegister()
   {
      CashOnHand=500;
   }
   CashRegister(int a)
   {
    CashOnHand=a;
   }
   int getCurrentBalance()
   {
    return CashOnHand;
   }
    void acceptAmount(int amount) 
    {
        CashOnHand=CashOnHand+amount;
    }
};
class Dispenser
{
    private:
    int numberOfItems,cost;
    public:
    Dispenser()
    {
        numberOfItems=50;
        cost=50;
    }
    Dispenser(int item,int price)
    {
        numberOfItems=item;
        cost=price;
    }
    int getNoOfItems() 
    {
        return numberOfItems;
    }
    int getCost()
    {
        return cost;
    } 
    void makeSale()
    {
        if(numberOfItems>0){
        numberOfItems--;}
    } 
};
void showSelection()
{   
    
	cout<<endl<< " ................. Welcome to Candy Shop  ......................" << endl;
    
	cout <<"Select an item from the list." << endl;
	
	cout << "1. Candy" << endl;
	cout << "2. Chips" << endl;
	cout << "3. Gum" << endl;
	cout << "4. cookies" << endl;
	cout << "5. Exit" << endl;
}
void sellProduct(dispenserType& product, cashRegister& pCounter)
{
	int amount;
	int amount2;
	if (product.getNoOfItems() > 0) //if the dispenser is not empty
	{
		cout <<"Please deposit " << product.getCost() << " rupees" << endl;
		
		cin >> amount;
		if (amount < product.getCost())
		{
		    
			cout <<"Please deposit another " << product.getCost()- amount << " rupees" << endl;
			
			cin >> amount2;
			amount = amount + amount2;
		}
		
		if (amount >= product.getCost())
		{
			pCounter.acceptAmount(amount);
			product.makeSale();
			
			cout << "Collect your item at the bottom and enjoy...." << endl;
		}

		else
        {
			cout <<"The amount is not enough. " << "Collect  your cash deposited."<< endl;
	}}
	else
		{cout << "Sorry, this item is sold out." << endl;
        }
}
int main()
{
	cashRegister counter;
	dispenserType candy(100, 20);
	dispenserType chips(100, 10);
	dispenserType gum(75, 30);
	dispenserType cookies(50, 50);
	int choice;
	showSelection();
	cin>>choice;
	
	while (choice != 5)
	{
		switch (choice)
		{
			case 1:
			    cout<<"" You have Selected Candy                                                                             "<<endl;
				cout <<" ======================================================================================================================================================================" << endl;
				sellProduct(candy, counter);
				break;
			case 2:
			    cout<<"                                                                              You have Selected Chips                                                                             "<<endl;
				cout <<" ======================================================================================================================================================================" << endl;
				sellProduct(chips, counter);
				break;
			case 3:
			    cout<<"                                                                              You have Selected Gum                                                                             "<<endl;
				cout <<" ======================================================================================================================================================================" << endl;
				sellProduct(gum, counter);
				break;
			case 4:
			    cout<<"                                                                              You have Selected Cookies                                                                            "<<endl;
				cout <<" ======================================================================================================================================================================" << endl;
				sellProduct(cookies, counter);
				break;
			default:
				cout << "Invalid selection." << endl;
		}
		showSelection();
		cin >> choice;
		
	
	}	
	return 0;
}