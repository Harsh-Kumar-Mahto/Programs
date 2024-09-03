#include<stdio.h>
int main()
{
    int i;
    for (i=1;i<=10; i++)
    {
        if(i==3||i==6)       //  ||This is used for or
        continue;
        printf("\n%d",i);
    }
    return 0;
}