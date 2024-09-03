#include<stdio.h>
int table(int a);
int main()
{
int a;
printf("Enter a number: ");
scanf("%d",&a);
table(a);
return 0;
}

int table(int a)
{
    for (int i = 1; i <=10; i++)
    {
       printf("%d\n",i*a);
    }
    
}
