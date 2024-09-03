// Use of switch cases depending on inputs
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a)
    {
        case 1:
        cout<<"Hi";
        break;
        case 2:
        cout<<"Hello";
        break;
        case 3:
        cout<<"How are you";
        break;
        case 4:
        cout<<"What do you do ";
        break;
        default:cout<<"I Am Still Learning";
        break;
    }
    return 0;
}