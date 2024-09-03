// Find the maximum and minimum number in an array
#include<iostream>
#include<climits>         //required header file for maximum and minimum limits
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the elements:";
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int max_no=INT_MIN;    //takes the minimum possible value in cpp
    int min_no=INT_MAX;    //takes the maximum possible value in cpp 
    for(int j=0;j<=n-1;j++)
    {
       max_no=max(max_no,arr[j]);  //if statement can also be used
       //max(a,b)  gives maximum of the two numbers.
       min_no=min(min_no,arr[j]);  //if statement can also be used
       //min(a,b)  gives minimum of the two numbers.
    }
    cout<<"Maximum number is:"<<max_no<<endl;
    cout<<"Minimum number is:"<<min_no<<endl;
    return 0;
}