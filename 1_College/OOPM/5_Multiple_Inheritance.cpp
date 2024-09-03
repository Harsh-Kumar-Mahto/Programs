#include<iostream>
using namespace std;
class Father
{
    public:
    string name;
    string eyecolor;
    float weight;
    float height;
};

class Mother
{
    public:
    string name; 
    string haircolor;
    string skincolor;
};

class Child:public Father,public Mother
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
    ch1.skincolor="Brown";

    cout<<"\n\nName of child is:"<<ch1.name<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Child number:"<<ch1.number<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Eyecolor of child:"<<ch1.eyecolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Haircolor of child:"<<ch1.haircolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    cout<<"Skincolor of child:"<<ch1.skincolor<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;
    return 0;
}