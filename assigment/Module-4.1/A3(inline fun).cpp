
// 3 Write a program to find the multiplication values and the cubic values using inline function  

#include<iostream>
using namespace std;
inline int multiplication(int n1,int n2) {return n1 * n2;};
inline int cube(int n) {return n*n*n;};
int main()
{
    int n1,n2;
    cout<<"\nENTER A VALUE OF NUMBER 1 = ";
    cin>>n1;
    cout<<"\nENTER A VALUE OF NUMBER 2 = ";
    cin>>n2;
    cout<<"\n Multiplication of "<<n1<<" And "<<n2<<" is " <<multiplication(n1,n2);


    cout<<"\nENTER THE NUMBER = ";
    cin>>n1;
	cout<<"\nCube of 3 is = "<<cube(n1);	
	return 0;
}


