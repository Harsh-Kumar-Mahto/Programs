#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str3;
    cout<<"Enter string:";
    getline(cin, str3);  //Input string containing spaces too
    cout<<str3<<endl;
    
    string str;   //Only declaring and then taking input string without spaces
    cout<<"Enter string:";
    cin>>str;
    cout<<str<<endl;

    string str1(5,'n');   //Will be declared as 5 times n i.e.  nnnnn
    cout<<str1<<endl;

    string str2="Harsh Kumar";  //Declaration along with value assignment, can also accomodate spaces.
    cout<<str2<<endl;
    
    return 0;
}