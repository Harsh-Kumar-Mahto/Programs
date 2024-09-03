#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rollno;
    string branch;
    int sem;
    string college;
    void study()
    {
        cout<<name<<" is studying";
    }
    Student()
    {
        branch="CSE";
        sem=3;
        college="GGITS";
        study();
    }
    ~Student()
    {
        cout<<endl<<name<<" is deleted";
    }
};
int main()
{
    Student stu1,stu2,stu3;
    cout<<"First student details:-"<<endl;
    cout<<"Enter student's name:";
    cin>>stu1.name;
    cout<<"Enter student's roll no:";
    cin>>stu1.rollno;

    cout<<"Second student details:-"<<endl;
    cout<<"Enter student's name:";
    cin>>stu2.name;
    cout<<"Enter student's roll no:";
    cin>>stu2.rollno;

    cout<<"Third student details:-"<<endl;
    cout<<"Enter student's name:";
    cin>>stu3.name;
    cout<<"Enter student's roll no:";
    cin>>stu3.rollno;

    cout<<"\n\n\nStudent 1:"<<endl;
    cout<<"Name:"<<stu1.name<<endl<<"Roll no.:"<<stu1.rollno<<endl<<"Branch:"<<stu1.branch<<endl<<"Semester:"<<stu1.sem<<endl<<"College:"<<stu1.college<<endl;
    stu1.study();

    cout<<"\n\n\nStudent 2:"<<endl;
    cout<<"Name:"<<stu2.name<<endl<<"Roll no.:"<<stu2.rollno<<endl<<"Branch:"<<stu2.branch<<endl<<"Semester:"<<stu2.sem<<endl<<"College:"<<stu2.college<<endl;
    stu2.study();

    cout<<"\n\n\nStudent 3:"<<endl;
    cout<<"Name:"<<stu3.name<<endl<<"Roll no.:"<<stu1.rollno<<endl<<"Branch:"<<stu1.branch<<endl<<"Semester:"<<stu1.sem<<endl<<"College:"<<stu1.college<<endl;
    stu3.study();

    return 0;
}