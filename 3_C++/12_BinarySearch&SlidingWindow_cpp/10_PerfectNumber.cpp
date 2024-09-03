// Perfect number is the number,sum of whose divisors is equal to the number itself
#include<iostream>
#include<cmath>
using namespace std;

bool isNumPerfect(int n)
{
    int sum=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) 
        {
            if(i==n/i)  //if i*i=n,in that case we only add i once to the sum
            {
                sum+=i;
            }
            else   //in all the other case for example 6 is sqrt of 36 and 2*13 is 36 where 13 is greater than 6 so we add 2 and 13 in the same time using n/i and i
            {
                sum+=i+n/i;
            }
        }
    }
    if(sum==n && n!=1)
    {
        return true;
    }
    return false;
}

int maxPerfectSubArr(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)     //converting our problem to sliding window by simply converting array to a binary array 
    {
        if(isNumPerfect(arr[i])) //we replace perfect numbers by 1 and other by 0
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }
    int sum=0,ans=0;
    for(int i=0;i<k;i++)  //using sliding window approach for k numbers,we simple find the sum as the number of ones will give the max number of perfect numbers in subarray of k numbers
    {
        sum+=arr[i];
    }
    ans=sum;
    for(int i=k;i<n;i++)
    {
        sum=sum-arr[i-k]+arr[i];
        ans=max(ans,sum);
    }
    return ans;
}

int main()
{
    int arr[]={28,2,3,6,496,99,8128,24};
    int k=4;
    int n=8;
    cout<<maxPerfectSubArr(arr,n,k);
    return 0;
}