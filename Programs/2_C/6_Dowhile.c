#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number:");
    scanf("%d",&i);
    do
    {
    printf("%d\n",i);
    i--;
    } 
    while (i>=1);
    return 0;
}