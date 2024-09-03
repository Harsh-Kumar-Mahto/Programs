#include<stdio.h>
int main()
{
  /*  char name[]={'H','A','R','S','H','\O'};   //'\O' is null character that combines all the characters
    char name2[]="HARSH";    //Compiler automatically adds '\O'      */
    char name[50];
    scanf("%s",name);   //scan can't input multiple word strings.only first word.
    printf("Your name is :%s",name);   //%s itself interprets a null character.
    return 0;
}