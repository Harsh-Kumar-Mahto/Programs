// Input two numbers from the user and find thier sum
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers:\n";  //endl can be used in place of \n
    cin>>num1;
    cin>>num2;
    int sum=num1+num2;
    cout<<sum;
    return 0;
}