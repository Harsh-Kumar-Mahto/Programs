// In this problem we have to find the min subarray,sum of whose elements is greater than a given value
#include<iostream>
using namespace std;

int minSubArr(int arr[],int n,int x)
{
    int sum=0,minLength=n+1,start=0,end=0;  //sum values to track current sum,min length till now,start and end of current subarray
    while(end<n)    
    {
        while(sum<=x && end<n) //till sum is less than given value and we haven't reached end,simply add another element
        {
            sum+=arr[end++];
        }
        while(sum>x && start<n)  //now if required sum is found,start reducing one element from start unless sum is greater than x
        {
            if(end-start<minLength)   //if after removing elements also sum is greater than x than update the min subarr length each time
            {
                minLength=end-start;
            }
            sum-=arr[start++];   //increasing start each time
        }
    }
    return minLength;  //returning the minlength at the end of function
}

int main()
{
    int arr[]={1,4,45,6,10,19};
    int x=51;
    int n=6;
    if(minSubArr(arr,n,x)==n+1)
    {
        cout<<"Doesn't exist"<<endl;
    }
    else
    {
        cout<<"Minimum length subarray:"<<minSubArr(arr,n,x);
    }
    return 0;
}