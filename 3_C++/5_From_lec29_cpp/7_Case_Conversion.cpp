#include<iostream>
#include<string>
#include<algorithm>  //to use transfrom
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:\n";
    cin>>s;
    // Conversion into upper case. 
    // for(int i=0;i<s.length();i++)
    // {
    //     if(s[i]>='a' && s[i]<='z')
    //     {
    //         s[i]-=32;
    //     }
    // }
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    
    
    // Conversion into lower case
    // for(int i=0;i<s.length();i++)
    // {
    //     if(s[i]>='A' && s[i]<='Z')
    //     {
    //         s[i]+=32;
    //     }
    // }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    return 0;
}