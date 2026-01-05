// You are given weights and values of some items and you have to put these items in a knapsack of capacity W to 
// get the maximum total value of items in the knapsack.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, W;
    cin >> n >> W;
    vector<pair<int, int>>v(n);
    vector<pair<int, int>>fraction(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
        fraction[i].first = v[i].second / v[i].first;
        fraction[i].second = i;
    }
    sort(fraction.begin(), fraction.end(), greater<pair<int, int>>());
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(W >= v[fraction[i].second].first){
            W -= v[fraction[i].second].first;
            ans += v[fraction[i].second].second;
        }
        else{
            ans += W * fraction[i].first;
            break;
        }
    }
    cout << ans << endl;
}