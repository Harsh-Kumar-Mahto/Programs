#include<stdio.h>
int main()
{
    int arr[]={6,8,2,8,2,7,53,79},count=0;
    for(int i=0;i<8;i++)
    {
    if(arr[i]%2!=0)
    count++;
    }
    printf("There are %d odd  number",count);
    return 0;
}