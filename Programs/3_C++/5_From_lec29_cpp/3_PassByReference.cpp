#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

void swap(int* aptr,int* bptr)  //Original values are altered
{
    int temp=*aptr;
    *aptr=*bptr;
    *bptr=temp;
}

int main()
{
    int a=2,b=4;
    swap(a,b);  //Pass by value
    cout<<a<<"\t"<<b<<endl;  //Original function don't swap;
    

    int*aptr=&a;
    int*bptr=&b;
    // Pass by reference
    swap(aptr,bptr);    //swap(&a,&b)   can be used without making two new pointers
    cout<<a<<"\t"<<b;


    return 0;
}