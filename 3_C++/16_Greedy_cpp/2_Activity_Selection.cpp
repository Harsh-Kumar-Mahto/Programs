// You are given n activities with their start and finish time, selecet the maximum number of activities that can be performed
// by a single person assuming that a person can only work on a single activity at a time.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second; //we are taking end time as first and start time as second for easy sorting
    }
    sort(v.begin(), v.end());
    int ans = 1;
    int prev = v[0].second;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first >= prev)
        {
            ans++;
            prev = v[i].second;
        }
    }
    cout << ans << endl;
}