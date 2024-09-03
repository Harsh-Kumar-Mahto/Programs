#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    student()
    {
        cout<<"Default constructor"<<endl;
    }
    student(string s,int n)
    {
        name=s;
        age=n;
        cout<<"Parameterised constructor"<<endl;
    }
    student(student &o)
    {
        name=o.name;
        age=o.age;
        cout<<"Copy constructor"<<endl;
    }
    ~student()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    student a;  //Default constructor
    a.name="kumar";
    a.age=20;
    student b("harsh",19);  //Parameterised constructor
    student c(a);  //Copy constructor
    // default copy constructor don't copy the locations/address just copy values(Shalow copy)
    // while defined copy constructor do deep copy i.e copy pointer as well as address to which it is pointing 
    cout<<c.name<<endl<<c.age<<endl;
    return 0;
}