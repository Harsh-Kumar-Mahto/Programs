#include<stdio.h>
int fact(int a);
int main()
{
    printf("Enter a number\n");
    int a;
    scanf("%d",&a);
    printf("%d factorial is:%d",a,fact(a));
    return 0;
}


int fact(int a)
{
    if(a==0){
        return 1;
    }
    int factNm1=fact(a-1);
    int factN=factNm1*a;
    return factN;
}