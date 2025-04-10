#include<iostream>
#include<vector>
#include<numeric>   //for accumulate and iota
#include<algorithm>  //for count
using namespace std;
int main()
{
    // vector<int> v;
    // vector<int> v1(5);
    // vector<int> v2(5,2);
    // vector<int> v3 = {5,2};
    // vector<int> v4({5,2});
    // cout<<v2.at(0);
    // cout<<v2.size();
    // cout<<v.empty();
    // v.clear();
    // v.push_back(1);
    // v.pop_back();
    // v.begin();
    // v.end();
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // int sum=accumulate(v.begin(),v.end(),0);
    // cout<<sum;
    // cout<<count(v.begin(),v.end(),1);
    // iota(v.begin(),v.end(),1);
    // sort(v.begin(),v.end());
    // reverse(v.begin(),v.end());



    // Intialize a vector with 9 elements with 2 as default value
    vector <int> newVect(9,2);
    // for(int &e: newVect) cin>>e;  input vector
    // for(int i = 0; i < newVect.size() ; i++)  cout << newVect[i] << " ";
    for(int e : newVect) cout << e << " ";

    // Pop three times
    newVect.pop_back();
    newVect.pop_back();
    newVect.pop_back();

    // Push 8
    newVect.push_back(8);
    cout << "\n";
    for(int e : newVect) cout << e << " ";

    // Print front and back
    cout << "\n" << "Front:" << newVect.front() << "  Back:" << newVect.back() << endl;
    // newVect.clear();
    cout << "Vector empty:" << ( newVect.empty() ? "True" : "False" );
    cout << "\n" << "Sum:" << accumulate(newVect.begin(),newVect.end(),10);
    
    
    cout << "\n" << "Count 2's:" << count(newVect.begin(),newVect.end(),2);

    reverse(newVect.begin(),newVect.end());
    cout << "\nReversed:";
    for(int e : newVect) cout << e << " ";

    sort(newVect.begin(),newVect.end());
    // sort(newVect.begin(),newVect.end(),greater<int>());   This will sort in reverse order
    cout << "\nSorted:";
    for(int e : newVect) cout << e << " ";

    newVect.insert(newVect.begin()+2,4);
    cout << "\nInserted:";
    for(int e : newVect) cout << e << " ";
    
    
    newVect.erase(find(newVect.begin(),newVect.end(),21));
    cout << "\nErased:  ";
    for(int e : newVect) cout << e << " ";

    

    return 0;
}