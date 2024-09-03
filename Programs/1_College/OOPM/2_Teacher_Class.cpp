#include<iostream>
using namespace std;
class Teacher
{
    public:
    string name;
    int id;
    string subject;
    string department;
};
int main()
{
    Teacher t1;
    t1.name="Prakhar Gautam";
    t1.id=1032;
    t1.subject="OOPM";
    t1.department="Computer Science";

    Teacher t2;
    t2.name="Shitanshu Jain";
    t2.id=1045;
    t2.subject="DS";
    t2.department="Computer Science";

    Teacher t3;
    t3.name="U N Bera";
    t3.id=1087;
    t3.subject="DGS";
    t3.department="Computer Science";


    cout<<"______________________________"<<endl;
    cout<<t1.name<<endl;
    cout<<t1.id<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.department<<endl;

    cout<<"______________________________"<<endl;
    cout<<t2.name<<endl;
    cout<<t2.id<<endl;
    cout<<t2.subject<<endl;
    cout<<t2.department<<endl;

    cout<<"_____________________________"<<endl;
    cout<<t3.name<<endl;
    cout<<t3.id<<endl;
    cout<<t3.subject<<endl;
    cout<<t3.department<<endl;
}