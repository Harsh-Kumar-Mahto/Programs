#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter anything:");
   // gets(str);  //Outdated and unsafe so gives warning. 
    fgets(str,50,stdin);  //Alternative of gets.Stdin is a must.Middle one is size.
    puts(str);      //Alternative for printf,doesn't need any data specifier.
    return 0;
}