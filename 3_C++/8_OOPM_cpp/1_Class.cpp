#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool gender;
    void print()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Gender:"<<gender<<endl;
    }
};

int main()
{
    student a;
    a.name="Harsh";
    a.age=20;
    a.gender=0;
    
    student arr[3];  //array as object 
    for(int i=0;i<3;i++)
    {
        cout<<"Name: ";
        cin>>arr[i].name;
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }

    arr[1].print();  //calling print function for first student

    return 0;
}