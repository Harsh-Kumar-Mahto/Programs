// DUTCH NATIONAL FLAG or 0 1 2 sort
// only used to sort when there are three types of array
#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

//Either pass by reference as above or directly sent the array
// void swap(int arr[],int a,int b)
// {
//     int temp=arr[a];
//     arr[a]=arr[b];
//     arr[b]=temp;
// } 

void dnfsort(int arr[],int n)
{
    int low=0,mid=0,high=n-1;
    while(mid!=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]); //swap(arr,mid,low)
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]); //swap(arr,mid,high)
            high--;
        }
    }
}

int main()
{
    int arr[]={1,0,2,1,0,1,2,1,2};
    dnfsort(arr,9);
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)   //this expression is used to find the size of an array
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Watch time complexity