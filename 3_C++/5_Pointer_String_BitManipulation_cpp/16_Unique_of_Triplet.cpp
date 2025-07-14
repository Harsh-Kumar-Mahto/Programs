#include<iostream>
using namespace std;

bool getBit(int n,int pos)
{
    return ((n&(1<<pos))!=0);
}

int setBit(int n,int pos)
{
    return (n|(1<<pos));
}

int unique(int arr[],int n)
{
    int result=0;
    for(int i=0;i<64;i++)   //checking number of values having 1 on specific bit
    {
        int sum=0;
        for(int j=0;j<n;j++)  //checking each number at each bit
        {
            if(getBit(arr[j],i))  //checking whether the number is having 1 at i bit
            {
                sum++;  //if true, sum containing number of values satisfying the condition is incremented  
            }
        }
        if(sum%3!=0)  //if sum becomes divisible by three once all numbers are checked then it is confirmed that all of them are repeated thrice
        {
           result=setBit(result,i);  //for not divisible by three we set the result at i pos to 1 using set bit
        }
        // Every bit gets assigned a value.If divisible by 3(gets 0) else 1 which eventually leads to the binary form of the unique number  
    }
    return result;
}

int main()
{
    int arr[]={1,2,3,8,1,2,3,1,2,3};
    cout<<unique(arr,10);
    return 0;
}