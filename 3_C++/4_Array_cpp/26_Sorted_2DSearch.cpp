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
    cout<<"Enter number to search:";
    int num;
    cin>>num;

    // We can start either from top right or from bottom left
    // This is from top right
    int row=0;
    int col=c-1;
    while(row<r && col>=0)   //Setting limits such that we don't go outside matrix
    {
        if(a[row][col]==num)
        {
            cout<<"True";
            return 0;
        }
        else if(a[row][col]<num)
        {
            row++;
        }
        else
        {
            col--;
        }
    }

    cout<<"Element not present";
    return 0;

}