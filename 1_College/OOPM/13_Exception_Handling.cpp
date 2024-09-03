#include<iostream>
using namespace std;
int main()
{
    float num,den;
    cout<<"Enter numerator:";
    cin>>num;
    cout<<"Enter denominator:";
    cin>>den;
    try
    {
        if(den==0)
        {
            throw (den);
        }
        else 
        {
            cout<<"Value of fraction is:"<<num/den;
        }
    }
    catch(float)
    {
        cout<<"Denominator can't be 0";
    }
    return 0;
}