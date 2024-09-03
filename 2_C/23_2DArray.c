#include<stdio.h>
int main()
{
    int array[2][3]={{98,95,94},{93,96,97}};    //1st[]represent no of array&2nd[]represent elements in each
    printf("Marks of first student:");
    printf("\nEnglish :%d",array[0][0]);
    printf("\nHindi :%d",array[0][1]);
    printf("\nMaths :%d\n",array[0][2]);
    printf("\nMarks of second student:\nEnglish :%d",array[1][0]);
    printf("\nHindi :%d",array[1][1]);
    printf("\nMaths :%d",array[1][2]);
    return 0;
}