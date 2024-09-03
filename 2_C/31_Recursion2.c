#include<stdio.h>
int sum(int n);
int main()
{
    printf("Enter a number\n");
    int a;
    scanf("%d",&a);
    printf("Sum of 1 to %d is: %d",a,sum(a));
    return 0;
}

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
 int sumNm1=sum(n-1);
 int sumN=sumNm1+n;
}