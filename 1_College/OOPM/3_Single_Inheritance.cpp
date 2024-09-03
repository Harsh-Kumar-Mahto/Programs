#include<iostream>
using namespace std;
class Parent
{
    public:
    string eyecolor;
    string haircolor;
    float weight;
    float height;
};
class Child:public Parent
{
    public:
    string name;
    int number;
};
int main()
{
    Child ch1;
    ch1.name="Harsh";
    ch1.number=1;
    ch1.haircolor="Black";
    ch1.eyecolor="Brown";

    cout<<"Name of child is:"<<ch1.name<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Child number:"<<ch1.number<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Haircolor of child:"<<ch1.haircolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Eyecolor of child:"<<ch1.eyecolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    return 0;
}