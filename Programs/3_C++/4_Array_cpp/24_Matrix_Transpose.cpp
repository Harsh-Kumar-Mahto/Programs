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
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)  //We have to do this in half(Upper/Lower triangle) only otherwise we will original matrix.
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    cout<<"Transpose matrix is:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}