// You are given a certain amount of money. Find the minimum number of notes that can be used to represent the amount.
// The available notes (Denomination) are of 1, 2, 5, 10, 20, 50, 100, 500 and 2000 rupees.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int ans = 0;
    int m = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < m; i++){
        ans += n / arr[i];
        n %= arr[i];
    }
    cout << ans << endl;
}