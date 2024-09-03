#include<stdio.h>
void insert(int array[],int n,int number);
int main()
{
    int array[]={1,3,2,1,4,4,53,1,13,4};
    int number;
    printf("Enter the number to be inserted:");
    scanf("%d",&number);
    insert(array,10,number);
    return 0;
}


void insert(int array[],int n,int number)
{
    array[n]=number;
    for(int i=0;i<=n;i++)
    {
    printf("%d\t",array[i]);
    }
}