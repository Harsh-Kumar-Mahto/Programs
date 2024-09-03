// Input a number from user and print it in reverse order 
#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0;
    cin>>n;
    while(n>0)
    {
        int lastdigit=n%10;     //ones place number is always the remainder when we divide by 10
        reverse=reverse*10+lastdigit; //last digit will come to first & remaining is same||n/10 removes last digit
        n=n/10;                 //   n/10 removes last digit
    }
    cout<<reverse;
    return 0;
}
