// WAP to find +ve,-ve or zero;
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter number:";
    int number;
    cin>>number;
    if(number>0) cout<<"Positive";
    else if(number<0) cout<<"Negative";
    else cout<<"Zero";
    return 0;
}