#include<stdio.h>
int fib(int n);
int main()
{
    printf("Enter the number to know fibonacci value: ");
    int a;
    scanf("%d",&a);
    printf("Fibonacci %d is : %d",a,fib(a));
    return 0;
}

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
}