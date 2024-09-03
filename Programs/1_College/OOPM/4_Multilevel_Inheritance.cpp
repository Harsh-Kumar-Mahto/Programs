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

class Grandchid:public Child
{
    public:
    int number;
};
int main()
{
    Grandchid gc1;
    gc1.number=2;
    gc1.name="Harsh";
    gc1.eyecolor="Blue";

    Child ch1;
    ch1.name="Sanjay";
    ch1.number=1;
    ch1.haircolor="Black";
    ch1.eyecolor="Brown";

    cout<<"Child details: "<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;    
    cout<<"Name of child is:"<<ch1.name<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Child number:"<<ch1.number<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Haircolor of child:"<<ch1.haircolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Eyecolor of child:"<<ch1.eyecolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Grand child details:"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Name of Father is:"<<ch1.name<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Name of child is:"<<gc1.name<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Child number:"<<gc1.number<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Haircolor of child:"<<ch1.haircolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Eyecolor of child:"<<gc1.eyecolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    return 0;
}