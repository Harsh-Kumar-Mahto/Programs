#include<iostream>
using namespace std;
int main(){
    int i=1;
    do{
        cout<<i++<<' ';
        // cout<<i;     This will cause an infinite loop
    }while(i<=10);
}