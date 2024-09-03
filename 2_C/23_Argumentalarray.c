//#include<stdio.h>
//int printnum(int array[],int n);      //int array[] can be replaced by *ptr
//int main()
//{
//    int array[]={1,2,3,4,5,6};
//    printnum(array,6);
//    return 0;
//}
//
//int printnum(int array[],int n)       //Same as above to be used
//{
//    for(int i=0;i<n;i++)      //array's first position is always 0.So i is one less than n.
//    {
//    printf("%d\t",array[i]);   //\t gives spacing b/w results.
//    }
//    return 0;
//}
#include<stdio.h>
int printno(int *ptr,int n);
int main()
{
    int arr[]={1,2,3,4,5,6};
    int *ptr=&arr[0];
    printno(ptr,6);
    return 0;
}

int printno(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}