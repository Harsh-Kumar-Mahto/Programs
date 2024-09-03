// Take input from used until given a negative number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    do
    {
       cout<<n<<endl;
       cin>>n;
    } 
    while(n>=0);
    return 0;
}