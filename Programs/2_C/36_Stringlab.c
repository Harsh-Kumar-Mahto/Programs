#include<stdio.h>
#include<string.h>
int main()
{ 
    char str[]="Harsh";
    char sur[]="Mahto";
    //1:-
    printf("Length of string:%d\n",strlen(str));  
     //String length func gives the length of the string i.e no. of characters excluding \O.
     //2:-
     strcat(str,sur);
     puts(str);
     //String cocatenation func join the two strings in 1st string(Must have compatible size),without space.
     //3:-
     strcpy(str,sur);
     puts(str);
     //String copy func copies the data of 2nd to 1st.
     //4:-
     printf("%d",strcmp(str,sur));
     //Compares the two string
     //Gives 0 output for equal strings
     //Gives +ve output if 1st>2nd.
     //Gives -ve output if 2nd>1st.
    return 0;
}