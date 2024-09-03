#include<stdio.h>
int main()
{
    int aadhar[5];
    int *ptr=&aadhar[0];//Store value at array's first location
    for(int i=0;i<5;i++)
    {
        printf("Enter aadhar number %d:",i+1);
        scanf("%d",(ptr+i));//Shift to next memory location//&aadhar[i] can also be used
    }

    for(int i=0;i<5;i++)
    {
        printf("%d aadhar number is %d\n",i+1,*(ptr+i));    //aadhar[i] can be used with 
    }
    return 0;
}