
//Define a class to represent a bank account. Include the following members:   
//Data Member:-  
//
//		- Name of the depositor -  
//		- Account Number 
//		- Type of Account -  
//		- Balance amount in the account  -  
//Member Functions:-
//  
//		- To assign values 
//		- To deposited an amount 
//		- To withdraw an amount after checking balance     
//		- To display name and balance  

#include<iostream>
using namespace std;
class bankAccount
{
	string nmdepositor;
	int ac;
	string AccountType;
	double Bal;
	int amo;
	int money;
	int choice;
	
	public:
	void setdata()
	{
		cout<<"Enter Depositor Name : ";
		cin>>nmdepositor;
		cout<<"Enter Account Number : ";
		cin>>ac;
		cout<<"Enter Account Type : ";
		cin>>AccountType;
		cout<<"Enter Balance : ";
		cin>>Bal;	
	}
	
	void amountdata()
	{
		cout<<"Cash Deposit : 1";
		cout<<"\nCash Withdraw : 2";
		cout<<"\nENTER YOUR CHOICE : ";
		cin>>choice;
		switch(choice)
		{
			case 1:		
				cout<<"ENTER YOUR AMOUNT : ";
				cin>>amo;
				Bal+=amo;
			break;
			
			case 2:
				cout<<"ENTER WITHDRAW AMOUNT : ";
				cin>>money;
				if(Bal>money)
				{
					Bal-=money;
				}
				else
				{
					cout<<"\nYOUR BALANCE : "<<Bal;
					cout<<"\nYOU CAN NOT WITHDRAW AMOUNT : ";
				}
			break;
		
		}
	}
	void getdata()
	{
		cout<<"\nDepositor Name = "<<nmdepositor;
		cout<<"\nAccount Number = "<<ac;
		cout<<"\nAccount Typr = "<<AccountType;
		cout<<"\nCurrent balance = "<<Bal;	
	}	
	
};
main()
{
	bankAccount A1;
	A1.setdata();
	A1.amountdata();
	A1.getdata();	
}
