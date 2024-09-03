#include<iostream>
using namespace std;
class Parent
{
    public:
    string name;
    string eyecolor;
    string haircolor;
    float weight;
    float height;
};
class Child1:public Parent
{
    public:
    int number;
    int age;
};
class Child2:public Parent
{
    public:
    int number;
    int age;
};
class Child3:public Parent
{
    public:
    int number;
    int age;
};
int main()
{
    Child1 ch1;
    ch1.name="Ruchika";
    ch1.number=1;
    ch1.age=22;
    ch1.haircolor="Black";
    ch1.eyecolor="Brown";

    Child2 ch2;
    ch2.name="Harsh";
    ch2.number=2;
    ch2.age=20;
    ch2.haircolor="Brown";
    ch2.eyecolor="Blue";

    Child3 ch3;
    ch3.name="Khushi";
    ch3.number=3;
    ch3.age=17;
    ch3.haircolor="Black";
    ch3.eyecolor="Yellow";

    cout<<"\n\nName of child is:"<<ch1.name<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Age of child:"<<ch1.age<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Child number:"<<ch1.number<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Haircolor of child:"<<ch1.haircolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Eyecolor of child:"<<ch1.eyecolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl<<endl<<endl;

    cout<<"Name of child is:"<<ch2.name<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Age of child:"<<ch2.age<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Child number:"<<ch2.number<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Haircolor of child:"<<ch2.haircolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Eyecolor of child:"<<ch2.eyecolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl<<endl<<endl;

    cout<<"Name of child is:"<<ch3.name<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Age of child:"<<ch3.age<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Child number:"<<ch3.number<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Haircolor of child:"<<ch3.haircolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Eyecolor of child:"<<ch3.eyecolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl<<endl<<endl;

    return 0;
}