#include<stdio.h>
int main()
{
    char str[50];
    char newstr[30];
    printf("Enter anything:");
    fgets(str,50,stdin);
    int m,n,j=0;
    printf("Enter start and end point:");
    scanf("%d%d",&m,&n);
    for(int i=m; i<=n;i++,j++)
    {
        newstr[j]=str[i];
    }
    puts(newstr);
    return 0;
}