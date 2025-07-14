#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s1="fam";
    string s2="ily";

    cout<<s1+s2<<"\t"<<s1<<"\t"<<s2<<"\t"<<endl;  //Concatenates s1 and s2 without changing value of any of them

    s1.append(s2);  //Concatenates s1 and s2 and stores the result in s1,
    cout<<s1<<"\t"<<s2<<endl;

    cout<<s1[4]<<endl;  //Accessing element at particular position i.e. 5th

    s1.clear();   //Clears value of the string
    cout<<s1<<endl;

    if(s1.empty())    //Checks whether a string is empty
    {
        cout<<"String is empty"<<endl;
    }
    if(!s2.empty())  //Since s2 is not empty therefore returns false and ! represents false so ultimately the condition is satisfied 
    {
        cout<<"String is not empty"<<endl;
    }

    string s3="abc";
    string s4="xyz";
    cout<<s3.compare(s4)<<endl;  //-ve as s3<s4
    cout<<s4.compare(s3)<<endl;  //+ve as s4>s3
    string s5="abc";
    cout<<s3.compare(s5)<<endl;  //0 as both are equal

    string s6="nincompoop";
    s6.erase(3,3);  //Erase three elements from the third index or fourth position and save new string in itself
    cout<<s6<<endl;

    cout<<s6.find("poop")<<endl;  //Finds the index where the substring starts if exist here 3 as com is already erased

    cout<<s6.insert(3,"com")<<endl;  //Insert com starting from 3rd index

    cout<<s6.size()<<endl;  //Used to get size of string
    cout<<s6.length()<<endl;
    for(int i=0;i<s6.length();i++)  //Iterate over the string using size
    {
        cout<<s6[i]<<endl;
    }

    string s=s6.substr(6,4);  //Creates a substring of 4 chars from 6th index
    cout<<s<<endl;

    string s7="786";
    int x=stoi(s7);  //Converts string to integer
    cout<<x+2<<endl;

    int y=788;
    cout<<to_string(y)+"2"<<endl;  //Converts integer to string

    string str="dfghnbvcxdfghj";
    // Header file algorithm is required
    sort(str.begin(),str.end()); //sorts the string from beginning to end
    cout<<str<<endl;

    return 0;
}