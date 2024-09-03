#include<iostream>
using namespace std;
int main()
{
    char a[100]="apple";
    int i=0;
    while(a[i]!='\0')
    {
        cout<<a[i]<<endl;
        i++;
    }
    cout<<a<<endl;
    cout<<a[2]<<endl;


    char arr[100];
    cin>>arr;  //Char arr input
    cout<<arr;  //Char arr output
    return 0;
}