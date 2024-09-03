// 14.3
#include<iostream>
using namespace std;

int setBit(int n,int pos)
{
    return ((n&(1<<pos))!=0);
}

void twounique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)   //xor of all elements give the sum of the 2 unique numbers
    {
        xorsum=xorsum^arr[i];  //^ represents xor
    }
    int tempxor=xorsum;   //since xor sum will be changes we have to save its value
    int setbit=0;
    int pos=0;
    while(setbit!=1)  //find the position of rightmost setbit
    {
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++)   
    {
        if(setBit(arr[i],pos-1)) //xor of all the elements having setbit on that particular position.One of them will be 1 unique number other one will have 0 on that position as xor of them is 1 
        {
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;   //temp xor has both unique numbers and newxor is one of them so there xor will result in the other unique number
}

int main()
{
    int arr[]={4,2,4,3,8,3,2,1};
    twounique(arr,8);
    return 0;
}