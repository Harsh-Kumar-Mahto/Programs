#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
    printf("The alphabet typed is upper case");
    }
    else if(ch>='a'&&ch<='z')
    {
    printf("The alphabet typed is lower case");
    }
    else
    printf("Invalid input");
    return 0;
}