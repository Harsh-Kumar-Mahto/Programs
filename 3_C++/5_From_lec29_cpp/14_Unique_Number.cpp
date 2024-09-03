#include<iostream>
using namespace std;


// {a,b,c,d,c,b,a,}
// XOR = 0^a^b^c^d^a^b^c
// => 0^(a^a)^(b^b)^(c^c)^d   (using commutative law)
// => 0^d^0^0^0
// => d   (the unique element)
int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];  //^ represents xor
    }
    return xorsum;
}

int main()
{
    int arr[]={4,2,4,3,3,2,1};
    cout<<unique(arr,7);
    return 0;
}