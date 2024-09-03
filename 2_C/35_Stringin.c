#include<stdio.h>
int main()
{
    char string[100];
    char ch;
    int i=0;
    while(ch!='\n')        //This part acts as gets or fgets.
    {
        scanf("%c",&ch);
        string[i]=ch;
        i++;
    }
    string[i]='\O';
    puts(string);
}