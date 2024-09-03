#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    int age;
    void setname(string s)  //setter to set the value of private data members
    {
        name=s;
    }
    void getname()  //getter to get the values of private data members
    {
        cout<<name<<endl;
    }
};

int main()
{
    student a;
    a.age=19;
    // a.name="harsh";    can't be done as name is private 
    string s="harsh";
    a.setname(s);
    a.getname();
    cout<<a.age;
    return 0;
}