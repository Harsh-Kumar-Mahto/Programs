#include<stdio.h>
#include<string.h>
typedef struct Address        //typedef gives it nickname.
{
    int House_no;
    int Block;
    char City[20];       
    char State[20];
}add;

void printadd(struct Address,int n);

int main()
{
    add adds[5];
    printf("Enter for first person:House no,Block,City,State:");
    scanf("%d",&adds[0].House_no);
    scanf("%d",&adds[0].Block);
    scanf("%s",adds[0].City);
    scanf("%s",adds[0].State);

    printf("Enter for second person:House no,Block,City,State:");
    scanf("%d",&adds[1].House_no);
    scanf("%d",&adds[1].Block);
    scanf("%s",adds[1].City);
    scanf("%s",adds[1].State);

    printf("Enter for third person:House no,Block,City,State:");
    scanf("%d",&adds[2].House_no);
    scanf("%d",&adds[2].Block);
    scanf("%s",adds[2].City);
    scanf("%s",adds[2].State);

    printf("Enter for fourth person:House no,Block,City,State:");
    scanf("%d",&adds[3].House_no);
    scanf("%d",&adds[3].Block);
    scanf("%s",adds[3].City);
    scanf("%s",adds[3].State);

    printf("Enter for fifth person:House no,Block,City,State:");
    scanf("%d",&adds[4].House_no);
    scanf("%d",&adds[4].Block);
    scanf("%s",adds[4].City);
    scanf("%s",adds[4].State);
    
    printadd(adds[0],1);
    printadd(adds[1],2);
    printadd(adds[2],3);
    printadd(adds[3],4);
    printadd(adds[4],5);
    return 0;

}

void printadd(struct Address add,int n)
{
    printf("Address of %d is is:%d,%d,%s,%s\n",n,add.House_no,add.Block,add.City,add.State);
}