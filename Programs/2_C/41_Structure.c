#include<stdio.h>
#include<string.h>
//User defined
struct student        //typedef can be used for nickname(See Address).
{
    int roll_no;
    float cgpa;
    char name[20];
};

void printinfo(struct student s1);
int main()
{
    struct student s1;         //Struct student is a complete data type.s1,s2 etc are diff. variables. 
    s1.roll_no=1094;
    s1.cgpa=8.38;
    //  s1.name="Harsh";   //This is not valid.
    strcpy(s1.name,"Harsh");
    printf("1\n%s\n",s1.name);
    printf("%d\n",s1.roll_no);
    printf("%f\n",s1.cgpa);

    struct student s2;                           //Single step initialization:
    s2.roll_no=1095;                             //struct student s2={1095,7.3,"Harshit"};   
    s2.cgpa=7.3;                                  //wil give same result
    strcpy(s2.name,"Harshit");  
    printf("2\n%s\n",s2.name);
    printf("%d\n",s2.roll_no);
    printf("%f\n",s2.cgpa);

    struct student *ptr=&s1;                //Same result as 1st case i.e ptr works in same manner.
    printf("3\n%s\n",(*ptr).name);            //(*ptr).anything can be replaced by  ptr->anything
    printf("%d\n",(*ptr).roll_no);
    printf("%f\n4\n",ptr->cgpa);

    printinfo(s1);                  //Same result as 1st case i.e structures can be used in func.
    return 0;
}

void printinfo(struct student s1)
{
    printf("Student Info:\n");
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll_no);
    printf("%f\n",s1.cgpa);

}