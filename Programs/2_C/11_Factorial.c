#include<stdio.h>
int main()
{
    int a,fact=1;
    printf("Enter the number with required factorial:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        fact*=i;
    }
printf("%d!:%d",a,fact);
return 0;
}