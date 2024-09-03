#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number till which sum is required!\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      sum+=i;
    }
    printf("Sum=%d",sum);
    return 0;
}