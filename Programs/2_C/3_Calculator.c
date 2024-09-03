#include<stdio.h>
int main()
{
    int a,b,o;
    printf("Enter two numbers\n");
    scanf("%d\n%d",&a,&b);
    printf("\nEnter the operation\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n");
    scanf("%d",&o);
    if(o==1)
    printf("The addition is: %d",a+b);
    if(o==2)
    printf("The subtraction is: %d",a-b);
    if(o==3)
    printf("The multiplication is: %d",a*b);
    if(o==4)
    printf("The division is: %d",a/b);
    if(o==5)
    printf("The remainder is: %d",a%b);
    return 0;
}