#include<iostream>
using namespace std;

void replacePi(string s)
{
    if(s.length()==0)
    {
        return;
    }

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));  //skipping two chars and replacing by 3.14
    }
    else
    {
        cout<<s[0];
        replacePi(s.substr(1));  //Only one char is checked and printed
    }
}

int main()
{
    replacePi("pipppiiipi");
    return 0;
}