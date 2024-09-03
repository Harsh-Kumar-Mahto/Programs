#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
}