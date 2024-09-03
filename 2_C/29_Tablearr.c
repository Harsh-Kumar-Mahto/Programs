#include<stdio.h>
void storetable(int array[][10],int n,int m,int number); 
/*n starts from 0 as early,m is number till when table is required*/
int main()                                             
{
    int table[2][10];
    storetable(table,0,10,2);
    storetable(table,1,10,3);
    for(int i=0;i<10;i++)
    {
    printf("{%d,%d}",table[0][i],table[1][i]);
    }
}

void storetable(int array[][10],int n,int m,int number)  //In 2D array 2nd bracket needs to be filled
{
    for(int i=0;i<m;i++)
    {
        array[n][i]=number*(i+1);
    }
}