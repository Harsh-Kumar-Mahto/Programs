// This code is to find the minimum number of elements in an array that have max distance between them
#include<iostream>
#include<algorithm>
using namespace std;

bool isFeasible(int mid,int arr[],int n,int k)   //function to check if there are k elements with mid as their difference/checking feasibility
{
    int pos=arr[0],element=1;     //pos is the first element and element is the count of elements with mid as the difference between them as we want k elements with max difference so it keeps track of it
    for(int i=1;i<n;i++)
    {
        if(arr[i]-pos >=mid)   //checking difference of each element from the first element,if greater than or equal to mid
        {
            pos=arr[i];   //we make the present element as pos and check the elements next to it to satisfy the max common difference in the next loop
            element++;   //and also increase element as there is and extra element that exists with max min difference
            if(element==k)  //when this element count becomes equal to k(required element with max min difference) we return true
            {
                return true;
            }
        }
    }
    return false;
}

int largestMinDist(int arr[],int n,int k)   //k is the number of elements between which max distance must exist
{
    sort(arr,arr+n);    //sorting the array to find differences easily
    int result=-1;      //initially taking no difference
    int left=1,right=arr[n-1];  //left is the minimum possible difference (it can't be 0) and right is the maximum difference that will be the last element minus the first element after sorting
    while(left<right)    //termination condition
    { 
        int mid=(left+right)/2;   //finding mid to and checking it as maximum possible distance same as we do in search
        if(isFeasible(mid,arr,n,k))  //checking if there are k elements that have mid as their difference / check feasibility
        {
            result=max(result,mid);  //if yes,update the result with max of prev result and mid at which current answer is feasible
            left=mid+1;             //checking in the right of mid by doing left+1 to maximise the min difference
        }
        else
        {
            right=mid;   //if answer not feasible,check the left of mid
        }
    }
    return result;  //at the end return result as it will be the max min distance between k elements 
}


int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter array elements:";
        cin>>a[i];
    }
    // For example, consider an array [1, 2, 8, 4, 7] and k = 2. The largest minimum distance between any two elements is 3 (the difference between 4 and 7 or 1 and 4).
    cout<<"Largest min distance:"<<largestMinDist(a,n,3);
    return 0;
}