#include<stdio.h>
int main()
{
    int a=5;                //* gives the value at that address
    int *ptr=&a;            //& gives the address of the variable
    int **pptr=&ptr;
    printf("Value stored ata is:%d",**pptr);
    return 0;
}