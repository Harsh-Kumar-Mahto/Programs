// palindromes are those words or numbers that are same from start or end (NITIN,MADAM,7997...)
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool palindrome(int num)
{
    int temp=num,number=0;
    while(temp>0)
    {
        number=number*10+ temp%10;
        temp=temp/10;
    }
    if(number==num)
    {
        return true;
    }
    return false;
}

int palindromeSubarr(vector<int> arr,int k)
{
    int num=0;
    for(int i=0;i<k;i++)  //to concatenate an number we just multiply previous number by 10 and add the new number to it
    {
        num=num*10+arr[i];
    }
    if(palindrome(num))   //we check if the current number is palindrome
    {
        return 0;    //if yes,0 is the starting point of the palindrome
    }
    for(int i=k;i<arr.size();i++)  //sliding window approach
    {
        num=(num%(int)pow(10,k-1))*10 +arr[i];  //for adding next number and removing the first number to maintain combination of k elements
        if(palindrome(num))   //again checking if palindrome or not
        {
            return i-k+1; //returning the current start
        }
    }
    return -1;   //if no palindrome found
}

int main()
{
    vector<int> arr={2,3,5,1,1,5};
    int k=4;
    int ans=palindromeSubarr(arr,k);
    if(ans==-1)
    {
        cout<<"No palindrome subarray";
    }
    else
    {
        for(int i=ans;i<ans+k;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}