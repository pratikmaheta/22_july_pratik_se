// Create a class person having members name and age.
// Derive a class student having member percentage.
// Derive another class teacher having member salary.
// Write necessary member function to initialize, read and write data. Write also Main function
// (Multiple Inheritance)

#include <iostream>
using namespace std;

class person
{
public:
    int age;
    string name;

    void getp()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }
};

class student
{
public:
    float pr, ag;
    string nm;
    void getst()
    {
        cout<<"ENTER A NAME : ";
        cin>>nm;
        cout<<"ENTER AGE : ";
        cin>>ag;
        cout<<"ENTER PERCENTAGE : ";
        cin>>pr;
    }
};

class teacher
{
public:
    int salary, a;
    string n;

    void gett()
    {
        cout<<"ENTER NAME : ";
        cin>>n;
        cout<<"ENTER AGE : ";
        cin>>a;
        cout<<"ENTER SALARY : ";
        cin>>salary;
    }
};

class result : public person, public student, public teacher
{
public:
    void printdata()
    {
        cout<< "\n------Person Details--------\n";
        cout<< "\nName : "<<name;
        cout<< "\nAge : "<<age;
    }
    void prints()
    {
        cout<< "\n------Student Details--------\n";
        cout<< "\nName : "<<nm;
        cout<< "\nAge : "<<ag;
        cout<< "\nPercentage : "<<pr<<"%";
    }
    void printt()
    {
        cout<< "\n------Teacher Details--------\n";
        cout<< "\nName : "<<n;
        cout<< "\nAge : "<<a;
        cout<< "\nSalary : "<<salary<<"/-";
    }
};

int main()
{
    result r;
    cout<<"\nEnter details for Person :";
    r.getp();
    cout<<"\nEnter details for Student :";
    r.getst();
    cout<<"\nEnter details for Teacher : ";
    r.gett();

    r.printdata();
    r.prints();
    r.printt();
}
