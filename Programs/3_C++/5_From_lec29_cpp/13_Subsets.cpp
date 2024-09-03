#include<iostream>
using namespace std;

void subsets(int arr[],int n)
{
    for(int i=0;i<(1<<n);i++)   //1<<n stand for number of subsets i.e. 2^n in binary (0 to (2^n)-1)  
    {
        for(int j=0;j<n;j++)   //iterate over all the elements of the array
        {
            if(i&(1<<j))    //checks whether the bit is non zero corresponding to particular element
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int ar[4]={1,2,3,4};
    subsets(ar,4);
    return 0;
}