#include<iostream>
using namespace std;

// int pivot(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>arr[i+1])
//         {
//             return i;
//         }
//     }
//     return 0;
// }

// int BinarySearch(int arr[],int low,int high,int key)
// {
//     while(low<high)
//     {
//         int mid=(low+high)/2;
//         if(arr[mid]==key)
//         {
//             return mid;
//         }
//         else if(arr[mid]>key)
//         {
//             high=mid-1;
//         }
//         else
//         {
//             low=mid+1;
//         }
//     }
//     return -1;
// }

// int searchInSortedButRotatedArray(int arr[],int n,int key)
// {
//     int piv=pivot(arr,n);
//     int ans=BinarySearch(arr,0,piv,key);
//     if(ans>-1)
//     {
//         return ans;
//     }
//     else
//     {
//         ans=BinarySearch(arr,piv+1,n-1,key);
//     }
//     return ans;
// }

int searchInSortedButRotatedArray(int arr[],int key,int left,int right)  //Single complete function in the video
{
    if(left>right)   //checking for base condition
    {
        return -1;
    }    
    int mid=(left+right)/2;   //using binary search method
    if(arr[mid]==key)         //checking value at mid
    {
        return mid;
    }
    if(arr[left]<=arr[mid])   //if left most element is less than mid element
    {
        if(key>=arr[left] && key<=arr[mid])  //if key lies between leftmost and the mid element
        {
            return searchInSortedButRotatedArray(arr,key,left,mid-1);  // search in the left part of the array
        }
        return searchInSortedButRotatedArray(arr,key,mid+1,right);  //other wise check the right side of the array
    }
    if(key>=arr[mid] && key<=arr[right])  //if key is between mid and right element 
    {
        return searchInSortedButRotatedArray(arr,key,mid+1,right);  //first check the right part of the array
    }
    return searchInSortedButRotatedArray(arr,key,left,mid-1); //then the left part 
}

int main()
{
    int arr[]={6,7,8,9,10,1,2,5};
    if(searchInSortedButRotatedArray(arr,1,0,7) != -1)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}