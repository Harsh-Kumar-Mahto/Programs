#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    // creation:unordered map is used with required value and data type of key and its value
    // Map can also be used in place of unordered map to keep the data in sequence in which we enter them
    unordered_map<string,int>m;

    // Insertion:Pairs of key and value are inserted in the unordered map
    pair<string,int>p1=make_pair("love",2);
    m.insert(p1);

    pair<string,int>p2("babbar",3);
    m.insert(p2);

    m["mera"]=1;

    // updation:Once a key is created,its can't be duplicated,only its value can be updated
    m["mera"]=2;

    // searching;
    cout<<m["love"]<<endl;    //2

    cout<<m.at("babbar")<<endl;  //3

    // cout<<m.at("unknown")<<endl;  //this will give no result as terminate as their is such key in the map
    cout<<m["unknown"]<<endl;     //it will create a key of "unknown" name and fill its value as '0'
    cout<<m.at("unknown")<<endl;  //now since the key is created with value 0 this will not terminate

    cout<<m.size()<<endl;   //4

    cout<<m.count("mera")<<endl;   //gives 1 as element is present
    cout<<m.count("bro")<<endl;    //gives 0 as element is not present
    
    cout<<m.erase("unknown")<<endl;
    cout<<m.size()<<endl;    //3
    
    // Iterator
    // 1
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    // 2
    unordered_map<string,int>::iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    return 0;
}