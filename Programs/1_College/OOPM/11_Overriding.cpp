#include<iostream>
using namespace std;
class Parent
{
    public:
    string name;
    string eyecolor;
    string haircolor;
    void hobby()
    {
        cout<<"Hobby is gardening"<<endl;
    }
};
class Child:public Parent
{
    public:
    int age;
    void hobby()
    {
        cout<<"Hobby is dancing"<<endl;
    }
};
int main()
{
    Parent p1;
    Child c1;
    p1.hobby();
    c1.hobby();
}