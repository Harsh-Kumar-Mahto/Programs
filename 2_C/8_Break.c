#include<stdio.h>
int main()
{
    int a;     //checks whether a number is odd 
    do
    {  
        printf("Enter values:");
        scanf("%d",&a);
        if(a%2!=0)
        {
        printf("Its an odd number");
        break;
        }
    } 
    while (1);
    printf("\nThank You");
    return 0;
}