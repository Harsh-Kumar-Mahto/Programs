// Sum of n numbers
#include<iostream>
using namespace std;
int sum(int n)
{
    int answer;             //direct using formula:   int answer=n*(n+1)/2;
    for(int i=0;i<=n;i++)
    {
     answer+=i;
    }
    return answer;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}