// In this,we find the maximum sum possible with k elements and it should be less than a given max sum value(ms)
#include<iostream>
using namespace std;

int maxSum(int arr[],int n,int k,int ms)
{
    if(n<k)   //if number of elements in array is less than k,subarray sum not possible
    {
        return 0;
    }
    int sum=0,start=0,end=k-1;  //sum has sum of k elements,start is the starting of subarray and end is the end of that subarray of k elements
    for(int i=0;i<k;i++)  //calculating sum of first k elements 
    {
        sum+=arr[i];
    }
    int ans=0;      //this will store the actual feasible answers and at the it optimal solution
    if(sum<ms)      //if this sum of first k elements is less than ms than this a feasible answer
    {
        ans=sum;
    }
    while(end<n-1)   //now subtracting first element and adding element next to last until last element is added
    {
        sum=sum-arr[start]+arr[end+1];
        if(sum>ans && sum<ms )  //if this current sum is greater than maximum and less than ms then this is more feasible than previous
        {
            ans=sum;
        }
        start++;end++;  //incrementing start and end
    }

    // in video.
    // for(int i=k;i<n;i++)
    // {
    //     sum=sum-arr[i-k];
    //     sum=sum+arr[i];
    //     if(sum<ms)
    //     {
    //         ans=max(ans,sum);
    //     }
    // }
    return ans;   //returning ans at the end
}

int main()
{
    int arr[]={7,5,4,6,8,9};
    cout<<"Max Sum of subarray with k elements and less than ms is:"<<maxSum(arr,6,3,20);
    return 0;
}