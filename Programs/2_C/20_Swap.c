#include<stdio.h>
int swap(int a,int b);
void _swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("\n\na=%d & b=%d\n\n",a,b);
    _swap(&a,&b);
    printf("\n\na=%d & b=%d",a,b);
    return 0;
}

int swap(int a,int b)       //Call by value(Actual Value Doesn't Change)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("a=%d & b=%d",a,b);
    return 0;
}

void _swap(int *a,int *b)    //Call by reference(Actual Value Gets Changed)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("a=%d & b=%d",*a,*b);
    
}