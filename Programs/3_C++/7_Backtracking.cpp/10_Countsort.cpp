#include<iostream>
using namespace std;

void countsort(int arr[],int n)
{
    int k=arr[0];
    for(int i=0;i<n;i++)   //get the greatest number of the array
    {
        k=max(k,arr[i]);
    }
    int count[k+1]={0};  //create an array to contain elements from 0 to that number
    for(int i=0;i<n;i++)  //at each index of new array,fill the number of times it occured in the main array 
    {
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++) //add the count of previous count to next count 
    {
        count[i]+=count[i-1];
    }
    int output[n];  //output array of same size as that of main array
    for(int i=n-1;i>=0;i--)  //checking the main array from behind and the number present there is taken 
    {
        output[--count[arr[i]]]=arr[i];  //go to index of that number in count arr and reduce the value in it by 1 and insert the number at that position
    }
    for(int i=0;i<n;i++)   //copy the output array in main array
    {
        arr[i]=output[i];
    }
}

int main()
{
    int arr[]={1,3,2,3,4,1,6,4,3};
    countsort(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Watch time complexity