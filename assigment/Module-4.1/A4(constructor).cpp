
//Write a program of Addition, Subtraction, Division, Multiplication using constructor.  

#include<iostream>
using namespace std;
class calc
{	
	public:
	float x;
	float y;
	
	calc()
	{
		float sum,sub,mul,div;
		cout<<"ENTE A VALUE OF X : ";
		cin>>x;
		cout<<"ENTE A VALUE OF Y : ";
		cin>>y;
	
		sum = x + y;
		sub = x - y;
		mul = x * y;
		div = x / y;
		cout<<"Addition : "<<sum;
		cout<<"\nSubtraction : "<<sub;
		cout<<"\nMultiflication : "<<mul;
		cout<<"\nDivision : "<<div;
	}	
};
main()
{	
	
	calc c1;
}
