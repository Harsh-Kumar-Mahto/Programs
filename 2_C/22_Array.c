#include<stdio.h>
int main()
{
int price[3];//Declaration:price[size not necessary]={23,74}//Size will be automatically interpretted
printf("Enter price of first object:");
scanf("%d",&price[0]);
printf("Enter price of second object:");
scanf("%d",&price[1]);
printf("Enter price of third object:");
scanf("%d",&price[2]);
printf("Final cost with GST:%f",price[0]+0.18*price[0]+price[1]+0.18*price[1]+price[2]+0.18*price[2]);
return 0;
}