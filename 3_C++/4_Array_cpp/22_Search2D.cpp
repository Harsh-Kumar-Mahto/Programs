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
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==num)
            {
                cout<<"Element found at a["<<i<<"]["<<j<<"]";
                return 0;
            }
        }
    }
    cout<<"Element not present in the array.";
    return 0;
}