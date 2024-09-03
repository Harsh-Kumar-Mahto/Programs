// Using while loop take input again and again unless a negative number is given
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>=0)
    {
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}