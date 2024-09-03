#include<stdio.h>
void reverse(int array[],int n);
void printnew(int array[],int n);
int main()
{
    int array[]={1,2,3,4,5,6};
    reverse(array,6);
    printnew(array,6);
    return 0;
}


void reverse(int array[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int firsthalf=array[i];
        int secondhalf=array[n-i-1];     //This is standard for reversing an array.
        array[n-i-1]=firsthalf;
        array[i]=secondhalf;
    }
}


void printnew(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
}