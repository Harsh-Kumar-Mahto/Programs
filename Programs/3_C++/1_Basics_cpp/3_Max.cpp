// Input three numbers and find the maximum among them
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  cout<<"greatest number is:";
  if(a>=b)
  {
    if(a>=c)
    cout<<a;
    else
    cout<<c;
  }
  else
  {
    if(b>=c)
    cout<<b;
    else
    cout<<c;
  }
  return 0;
}