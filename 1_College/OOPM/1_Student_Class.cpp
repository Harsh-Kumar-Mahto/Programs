/*#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    string branch;
    int sem;
};
int main()
{
    Student stu1;
    stu1.name="Harsh";
    stu1.roll=94;
    stu1.branch="CS";
    stu1.sem=3;

    cout<<stu1.name<<endl;
    cout<<stu1.roll<<endl;
    cout<<stu1.branch<<endl;
    cout<<stu1.sem<<endl;
    return 0;
}
*/


#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    string branch;
    int sem;
};
int main()
{
    Student s1;
    cout<<"Enter 1st student name: ";
    cin>>s1.name;
    cout<<"Enter 1st student roll no: ";
    cin>>s1.roll;
    cout<<"Enter 1st student branch: ";
    cin>>s1.branch;
    cout<<"Enter 1st student sem: ";
    cin>>s1.sem;


     Student s2;
    cout<<"Enter 2nd student name: ";
    cin>>s2.name;
    cout<<"Enter 2nd student roll no: ";
    cin>>s2.roll;
    cout<<"Enter 2nd student branch: ";
    cin>>s2.branch;
    cout<<"Enter 2nd student sem: ";
    cin>>s2.sem;

    
     Student s3;
    cout<<"Enter 3rd student name: ";
    cin>>s3.name;
    cout<<"Enter 3rd student roll no: ";
    cin>>s3.roll;
    cout<<"Enter 3rd student branch: ";
    cin>>s3.branch;
    cout<<"Enter 3rd student sem: ";
    cin>>s3.sem;


     Student s4;
    cout<<"Enter 4th student name: ";
    cin>>s4.name;
    cout<<"Enter 4th student roll no: ";
    cin>>s4.roll;
    cout<<"Enter 4th student branch: ";
    cin>>s4.branch;
    cout<<"Enter 4th student sem: ";
    cin>>s4.sem;
    
    cout<<"_________________________"<<endl;
    cout<<"Student one details:"<<endl;
    cout<<"Name:"<<s1.name<<endl;
    cout<<"Roll no.:"<<s1.roll<<endl;
    cout<<"Branch:"<<s1.branch<<endl;
    cout<<"Semester:"<<s1.sem<<endl;
     
    cout<<"_________________________"<<endl;
    cout<<"Student two details:"<<endl; 
    cout<<"Name:"<<s2.name<<endl;
    cout<<"Roll no.:"<<s2.roll<<endl;
    cout<<"Branch:"<<s2.branch<<endl;
    cout<<"Semester:"<<s2.sem<<endl;

    cout<<"_________________________"<<endl;
    cout<<"Student three details:"<<endl;
    cout<<"Name:"<<s3.name<<endl;
    cout<<"Roll no.:"<<s3.roll<<endl;
    cout<<"Branch:"<<s3.branch<<endl;
    cout<<"Semester:"<<s3.sem<<endl;
    
    cout<<"_________________________"<<endl;
    cout<<"Student four details:"<<endl;
    cout<<"Name:"<<s4.name<<endl;
    cout<<"Roll no.:"<<s4.roll<<endl;
    cout<<"Branch:"<<s4.branch<<endl;
    cout<<"Semester:"<<s4.sem<<endl;

    return 0;
}