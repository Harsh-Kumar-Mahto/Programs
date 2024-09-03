#include<stdio.h>
int sum(int a,int b);
int main()
{
 printf("Enter two numbers :");
 int a,b;
 scanf("%d%d",&a,&b);
 printf("Sum of the numbers is:%d",sum(a,b));
 return 0;
}


int sum(int a,int b)
{
    return a+b;
}