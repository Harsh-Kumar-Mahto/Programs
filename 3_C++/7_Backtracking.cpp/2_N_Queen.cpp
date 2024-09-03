#include<iostream>
using namespace std;

bool issafe(int** arr,int x,int y,int n)  //n is number of queen placed
{
    // NO NEED TO CHECK ANY COLUMN OR ROW DOWN AS NO QUEEN IS PUT YET

    for(int row=0;row<x;row++)   //to check the columns above present one
    {
        if(arr[row][y]==1)
        {
            return false;
        }
    }

    int row=x;        //to check left top diagonal
    int col=y;
    while(row>=0 && col>=0)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }

    row=x;     //to check right top diagonal
    col=y;
    while(row>=0 && col<n)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

int nqueen(int** arr,int x,int n)  //dont need y as we dont need to check column as each can have only 1 queen
{
    if(x>=n)
    {
        return true;
    }

    for(int col=0;col<n;col++)
    {
        if(issafe(arr,x,col,n))
        {
            arr[x][col]=1;
            
            if(nqueen(arr,x+1,n))
            {
                return true;
            }
            arr[x][col]=0;  //Backtrack
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    int** arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    if(nqueen(arr,0,n))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}