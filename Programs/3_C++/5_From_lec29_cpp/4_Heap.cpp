#include<iostream>
using namespace std;
int main()
{
    int a=10;   //Normal value assignment getting stored in stack
    int*p=new int();  //Dynamic memory allocation in heap where p pointer is created in stack cotaining address of a dynamic memory location of heap
    *p=10;  //Assigning value at dynamic memory location
    delete(p);  //Deallocation of memory from heap but address remains stored in pointer of stack
    p=new int[4];  //Reallocation of memory in heap of array type of 4 blocks
    delete[]p;  //Deallocating memory of array type
    // In heap it is necessary to deallocate memory as it is allocated manually it needs to be deallocated manually too otherwise result in memory leak.
    p=NULL;  //Removing the address completely from stack and now p does not point to any address
    return 0;
}