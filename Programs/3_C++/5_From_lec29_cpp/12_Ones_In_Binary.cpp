// program to count the number of ones in binary representation of a number
#include<iostream>
using namespace std;

// Again using the observation that n&n-1 result to n but only the righmost 1 gets changed to 0.
// In this way every time one rightmost 1 gets converted into 0 hereby resulting finally into all zeros and we count the number of times the loops runs.
int numberofone(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    cout<<"Enter the number:";
    int n;
    cin>>n;
    cout<<numberofone(n);
    return 0;
}