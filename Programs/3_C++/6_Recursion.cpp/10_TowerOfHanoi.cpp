#include<iostream>
using namespace std;

void hanoi(int n,char src,char helper,char des)
{
    if(n==0)
    {
        return;
    }
    hanoi(n-1,src,des,helper);
    cout<<"Move "<<src<<" to "<<des<<endl;
    hanoi(n-1,helper,src,des);
}

int main()
{
    hanoi(6,'a','b','c');
    return 0;
}