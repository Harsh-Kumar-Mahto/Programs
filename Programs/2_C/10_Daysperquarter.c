#include<stdio.h>
#include<conio.h>
void main()
{
    int Jan=31,Feb,Mar=31,Apr=30,May=31,Jun=30,Jul=31,Aug=31,Sep=30,Oct=31,Nov=30,Dec=31;
    printf("Enter no. of days in Feb\n");
    scanf("%d",&Feb);
    int Q1=Jan+Mar;
    int Q2=Apr+May+Jun;
    int Q3=Jul+Aug+Sep;
    int Q4=Oct+Nov+Dec;
    if(Feb==28)
    printf("No. of days in First Quarter=%d",Q1+Feb);
    if(Feb==29)
    printf("No. of days in First Quarter=%d",Q1+Feb);
    printf("\nNo. of days in Second Quarter=%d",Q2);
    printf("\nNo. of days in Third Quarter=%d",Q3);
    printf("\nNo. of days in Fourth Quarter=%d",Q4);
    getch();
}