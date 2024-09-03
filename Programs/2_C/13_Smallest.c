#include<stdio.h>
int main()
{
    int a,min=99999;
    printf("Enter a numbers:\n");       
    scanf("%d",&a);                 
    while(a!=0)
    {
        if(a<min)
        min=a;
        printf("Enter a numbers:\n"); 
        scanf("%d",&a);
    }
    printf("%d is smallest number",min);
    return 0;
}