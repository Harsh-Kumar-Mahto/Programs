// Print the n fibonacci element
// Fibonacci is a sequence in which sum of previous two elements is the next element starting from 0 as first and 1 as second element
#include<iostream>
using namespace std;
void fib(int n)
{
 int a=0,b=1;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<"\t";
        int next=a+b;
        a=b;
        b=next;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}