#include<iostream>
using namespace std;

int divisible(int n,int a,int b)
{
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);

    return c1+c2-c3;
}

int main()
{
    cout<<divisible(30,5,7);  //only for non co-prime numbers
    return 0;
}