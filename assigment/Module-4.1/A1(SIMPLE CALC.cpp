
//WAP to create simple calculator using class 

#include<iostream>
using namespace std;
class calc
{
	int x;
	int y;
	int sum;
	int sub;
	int mul;
	int div;
	
	public:
		
	void simplecalcy()
	{
		cout<<"ENTER A VALUE OF X : ";
		cin>>x;
		cout<<"ENTER A VALUE OF Y : ";
		cin>>y;
		sum=x+y;
		sub=x-y;
		mul=x*y;
		div=x/y;
	}
	
	void getdata()
	{
		cout<<"Sum: "<<sum;
		cout<<"\nSub: "<<sub;
		cout<<"\nMul: "<<mul;
		cout<<"\nDiv: "<<div;
	}
};
main()
{
	calc calcy;
	calcy.simplecalcy();
	calcy.getdata();
		
}
