// Catalan series: C(n)=SUM[C(i)*C(n-i)]   ,i=0 to n-1  C[0]=C[1]=1
// Applications:
// 1.Possible BSTs
// 2.Paranthesis/bracket combinations
// 3.Possible forests
// 4.Ways of triangulations
// 5.Possible paths in matrix
// 6.Dividing a circle using N chords
// 7.Dyck words of given length & much more
#include<iostream>
using namespace std;

int catalan(int n)
{
    int res=0;
    if(n==0 || n==1)
    {
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        res+=catalan(i)*catalan(n-1-i);
    }
    return res;
}

int main()
{
    for(int i=0;i<10;i++)
    {
        cout<<catalan(i)<<endl;
    }
}