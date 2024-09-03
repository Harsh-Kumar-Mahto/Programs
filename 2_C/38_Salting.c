#include<stdio.h>
#include<string.h>
int main()
{
    char pass[50];
    scanf("%s",&pass);
    char salt[]="123";
    strcat(pass,salt);
    puts(pass); 
    return 0;
}