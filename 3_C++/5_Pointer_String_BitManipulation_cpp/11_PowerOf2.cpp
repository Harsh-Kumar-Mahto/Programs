#include<iostream>
using namespace std;
// Check that a given number is power of two
// One observation is used that all the numbers that are power of two only have single 1 in binary form
// Due to which n-1 will have all 1 after the rightmost 1 of n because of which n&n-1 is always 0000 form.
bool ispowerof2(int n)
{
    // This additional n&& is to check the condition of the number being 0,if number is nonzero and second condition is true it will return 1 else 0.
    return (n&&(!(n&(n-1))));  //If this is 0,1 will be return as condition will be satisfied
}

int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    cout<<ispowerof2(n);
    return 0;
}