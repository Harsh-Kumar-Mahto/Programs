// Element whose value is greater than its left as well as right neighbour in an array
// In a sortd array,last element is the peak element(ascending) & first element is the peak element(descending)
// If all elements are same then each of them are peak elements
#include<iostream>
using namespace std;

int peakElement(int arr[],int low,int high,int n)
{
    int mid=low+(high-low)/2;      //some times this is used to find mid as sometimes range exceeds to much in addition 
    if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1]))  //checks all the condition due to which mid is the peak element.Analyze correctly
    {
        return mid;
    }
    else if(mid>0 && arr[mid-1]>arr[mid])  //chekcking if left element is greater so going to left side
    {
        return peakElement(arr,low,mid-1,n);
    }
    else          //otherwise checking the right side
    {
        return peakElement(arr,mid+1,high,n);
    }
}

int main()
{
    int arr[]={0,6,8,5,7,9};
    int n=6;
    cout<<"Peak Element Index:"<<peakElement(arr,0,n-1,n)<<endl;
    return 0;
}