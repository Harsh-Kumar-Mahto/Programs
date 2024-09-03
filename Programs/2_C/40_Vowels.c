#include<stdio.h>
int main()
{
    char str[]="Hello world";     //This is correct but not working.
    int count=0;
    for(int i=0;str[i]!='\O';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    printf("Number of vowels is:%d",count);
    return 0;
}