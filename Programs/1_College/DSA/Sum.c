#include<stdio.h>
int sum(int, int *,int *);
int sum(int a,int *ptr,int *p)
{
    *p=a+*ptr;
    return *p;
}

int main()
{
    int var1=5;
    int var2=5;
    int s;
    int *p=&s;
    int *ptr=&var2;
    sum(var1,ptr,p);
    printf("%d",*p);
    return 0;
}