// Print all the number from 1 to 100 which are not divisible by 3
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        continue;
        else
        cout<<i<<endl;
    }
    return 0;
}