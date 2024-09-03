//Subarray:Continuous part of an array is a sub array 
//Number of subarray of an array with n elements:nC2+n  (Single element of the array is also a subarray)

//Subsequence:Selecting elements of an array without changing sequence of the remaining array
//Number of subsequences of an array of n elements:2^n  (Each element is selected or not i.e. they have two options)

//Every subarray is a subsequence but every subsequence is not a subarray.

// Find the sum of each subarray of a given array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)  //starting from first element and printing all the subarray sum starting from it
    {
        int sum=0;
        for(int j=i;j<n;j++)  //from the start point(i),adding next element in the subarray and print sum each time until array is ended
        {
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}