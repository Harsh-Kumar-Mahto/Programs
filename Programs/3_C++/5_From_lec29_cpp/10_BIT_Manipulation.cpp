#include<iostream>
using namespace std;

int getBit(int n,int pos)  //Function to get the bit at specific position
{
    return ((n&(1<<pos))!=0);  //Brackets are important due to precedence of operators.
}

int setBit(int n,int pos)  //Or operation is done 
{
    return ((n|(1<<pos)));
}

int clearBit(int n,int pos)  //clear the value at pos and make it one
{
    int mask=~(1<<pos);  //we find one's complememt of left shift operator so that there is 0 at required pos and remaining 1
    return (n&mask);  //we perform & operation to make that pos 0 and remaining will be unchanged
}

int updateBit(int n,int pos,int value)
{
    int mask=~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}

int main()
{
    cout<<getBit(5,0)<<endl;   //Convert 5 into binary and checks with & operator whether result is 0 or 1;
    cout<<setBit(5,1)<<endl;   //sets 1 at pos 1 irrespective of its current value
    cout<<clearBit(5,1)<<endl;
    cout<<updateBit(5,1,1)<<endl;  //Update the pos with required value
    return 0;
}