#include<stdio.h>
struct vectorsum
{
    int x;
    int y;
};
void calc(struct vectorsum v1,struct vectorsum v2,struct vectorsum sum);

int main()
{
struct vectorsum v1={2,5};
struct vectorsum v2={5,9};
struct vectorsum sum={0};

calc(v1,v2,sum);
return 0;
}


void calc(struct vectorsum v1,struct vectorsum v2,struct vectorsum sum)
{
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    printf("x part is:%d\n",sum.x);
    printf("y part is:%d",sum.y);
}