#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1 = "Welcome";
    
    // Length of string
    cout<<s1.length()<<endl;

    // Substring
    cout<<s1.substr(2,3)<<endl;

    // Concatenation
    string s2 = "Home";
    cout<< s1 + s2<<endl;  //Original string is as it is

    s1.append(s2);   //Original string is changed
    cout<<s1<<endl;

    // Sort
    sort(s1.begin(),s1.end());
    cout<<s1<<endl;

    // Reverse
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;

    // String to integer
    string nums1 = "1646872";
    int n1 = stoi(nums1);
    cout<<n1<<endl;

    // Insert at any position
    int pos = 0;
    s1.insert(pos,s2);
    cout<<s1<<endl;

    // Erase number of characters from particular index
    s1.erase(pos,s2.size());
    cout<<s1<<endl;

    // Compare two strings lexicographically
    string s3 = "Home";
    cout<<s1.compare(s3)<<endl;  // s1 > s3 return 1   if s1 < s3 return -1
    cout<<s2.compare(s3)<<endl;  // s2 == s3 return 0

    bool equal = (s1 == s3);
    // bool equal = (s2 == s3);
    cout<<equal<<endl;

    return 0;
}