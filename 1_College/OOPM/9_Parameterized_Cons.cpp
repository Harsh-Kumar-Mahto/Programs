#include<iostream>
using namespace std;
class Teacher
{
    public:
    string name;
    int id;
    string department;
    string subject;
    string college;
    void Teach()
    {
        cout<<name<<" is teaching";
    }
    Teacher(string n,int no,string s)
    {
        name=n;
        id=no;
        subject=s;
        department="CSE";
        college="GGITS";
    }

};

int main()
{
    Teacher t1("Prakhar Gautam",000,"OOPM");
    Teacher t2("Shitanshu Jain",111,"DS");
    Teacher t3("U N Bera",222,"DGS");
    
    cout<<"Teacher 1:"<<endl<<"Name:"<<t1.name<<endl<<"Teacher id:"<<t1.id<<endl<<"Subject:"<<t1.subject<<endl<<"Department:"<<t1.department<<endl<<"College:"<<t1.college<<endl;
    t1.Teach();

    cout<<endl<<"\nTeacher 2:"<<endl<<"Name:"<<t2.name<<endl<<"Teacher id:"<<t2.id<<endl<<"Subject:"<<t2.subject<<endl<<"Department:"<<t2.department<<endl<<"College:"<<t2.college<<endl;
    t2.Teach();

    cout<<endl<<"\nTeacher 3:"<<endl<<"Name:"<<t3.name<<endl<<"Teacher id:"<<t1.id<<endl<<"Subject:"<<t1.subject<<endl<<"Department:"<<t1.department<<endl<<"College:"<<t1.college<<endl;
    t3.Teach();

    return 0;
}