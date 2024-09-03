#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool operator==(student &a)  //this is automatically called when two objects are compared otherwise == has no significance
    {
        if(name==a.name && age==a.age)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    student a,b,c;
    a.name="kumar";
    a.age=20;
    b.name="harsh";
    b.age=19;
    c.name="kumar";
    c.age=20;
    if(b==a)  //Operator overloading is required otherwise there is as error
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"not same"<<endl;
    }


    return 0;
}