#include<stdio.h>
int repeat(int arr[],int n,int number);
int main()
{
    int arr[]={1,2,3,4,5,6,1,2,3,3,4,4,6,3,2,1,};
    int number;
    printf("Enter a number to track its repetition:");
    scanf("%d",&number);
    repeat(arr,16,number);
    return 0;
}

int repeat(int arr[],int n,int number)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==number)
        count++;
    }
    printf("%d repeated %d times",number,count);
    return 0;
}