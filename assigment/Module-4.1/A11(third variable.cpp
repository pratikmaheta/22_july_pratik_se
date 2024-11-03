
////Write a program to swap the two numbers using friend function without using third variable  

#include <iostream>
using namespace std;

class Value
{
public:
    int x;
    int y;

    
    Value() 
	{
        cout << "ENTER A VALUE OF X : ";
        cin >> x;
        cout << "ENTER A VALUE OF Y : ";
        cin >> y;
    }

    friend void getData(Value& v);
};
void getData(Value& v) 
{
    v.x = v.x + v.y; 
    v.y = v.x - v.y; 
    v.x = v.x - v.y; 

    cout << "Value of x: " << v.x << endl;
    cout << "Value of y: " << v.y << endl;
}
int main() 
{
    Value v1; 
    getData(v1);     
}
