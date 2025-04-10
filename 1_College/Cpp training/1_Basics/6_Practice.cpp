#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (i; i < 20; i++)
    {
        switch (i)
        {
        case 0:
            i+=5;
        case 1:
            i+=2;
        case 5:
            i+=5;
        default:
            i+=6;
        }
        cout<<i<<endl;
    }
    cout<<i;
}