#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter number of rows and columns:";
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter element a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    }
    // spiral order print
    int rowst=0;
    int rowend=r-1;
    int colst=0;
    int colend=c-1;
    while(rowst<=rowend && colst<=colend)
    {
        // First horizontal line print 
        for(int i=colst;i<=colend;i++)
        {
            cout<<a[rowst][i]<<"\t";
        }
        rowst++;

        // First vertical line print
        for(int i=rowst;i<=rowend;i++)
        {
            cout<<a[i][colend]<<"\t";
        }
        colend--;

        // Reverse horizontal line print
        for(int i=colend;i>=colst;i--)
        {
            cout<<a[rowend][i]<<"\t";
        }
        rowend--;

        // Reverse vertical line print
        for(int i=rowend;i>=rowst;i--)
        {
            cout<<a[i][colst]<<"\t";
        }
        colst++;
    }
    return 0;
}