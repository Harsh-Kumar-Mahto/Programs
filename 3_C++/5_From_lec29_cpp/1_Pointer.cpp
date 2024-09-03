// Pointer are variables that store the address of other variables.
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr=&a;
    cout<<*aptr<<endl;
    *aptr=20;
    cout<<a<<endl;

    int arr[]={100,200,300};
    cout<<*arr<<endl;    //Array pointer stores the start address of an array

    int*ptr=arr;    //& not needed as arr is already having the address of first element
    cout<<*ptr<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;   //Increament,Decreament,Add and Sub can be done on ptr.
    }

    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<endl;
        // arr++ can't be done ass it is storing the index and not the bit storage and is a constant pointer
    }
    return 0;
}