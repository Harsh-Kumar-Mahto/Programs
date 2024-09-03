// Sieve of Eratosthenes
#include<iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[100]={0};   //taking an array that stores numbers from 0 to n and initializing it with 0
    for(int i=2;i<=n;i++) //since 0 and 1 are not prime,starting from 0 we iterate over all numbers
    {
        if(prime[i]==0)   //from 2 we check all the array values whether 0
        {
            for(int j=i*i;j<=n;j+=i)  //we mark the multiples of unmarked numbers starting from their squares as observation
            {
                prime[j]=1;  //in this way all the multiples get marked but the prime numbers remain unmarked 
            }
        }
    }

    for(int i=2;i<=n;i++)  //we iterate to all the values and print the indices where values are unchanged
    {
        if(prime[i]==0)
        cout<<i<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter number to find prime till it:";
    cin>>n;
    primeSieve(n);
    return 0;
}