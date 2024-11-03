
//Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division 
//Of two number using different parameters and Function Overloading 

#include<iostream>
using namespace std;
class calc
{
	public:
	
	int x,y;
	void printdata()
	{
		cout<<"Enter x: ";
		cin>>x;
		cout<<"Enter y: ";
		cin>>y;
	}
	void getdata(int x,int y)
	{
		cout<<"\nSum: "<<x+y;
		cout<<"\nSub: "<<x-y;
		cout<<"\nMul:"<<x*y;
	}

	void getdata(char x,char y)
	{
		cout<<"\nDiv: "<<x/y;
	}
};
main()
{
	calc c1;
	c1.printdata();
	c1.getdata(c1.x,c1.y);
	c1.getdata('x','y');	
}
