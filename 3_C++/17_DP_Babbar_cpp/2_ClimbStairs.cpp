// We have some number of stairs and we have to find the number of ways to reach the top of the stairs
// We can either take 1 step or 2 steps at a time

// This solution is just normal recursion without any dp.
// #include<bits/stdc++.h>
// using namespace std;

// int helper(int n, int curr){
//     if(curr == n){
//         return 1;
//     }
//     if(curr > n){
//         return 0;
//     }
//     return(helper(n, curr + 1) + helper(n, curr + 2));
// }

// int main(){
//     int n;
//     cout << "Enter number of stairs:";
//     cin >> n;
//     cout << helper(n, 0);
// }

// Using top down.
#include<bits/stdc++.h>
using namespace std;

int helper(int n, int curr, vector<int>&dp){
    if(curr == n){
        return 1;
    }
    if(curr > n){
        return 0;
    }
    if(dp[curr] != -1){
        return dp[curr];
    }
    dp[curr] = (helper(n, curr + 1, dp) + helper(n, curr + 2, dp));
    return dp[curr];
}

int main(){
    int n;
    cout << "Enter number of stairs:";
    cin >> n;
    vector<int>dp(n + 1, -1);
    cout << helper(n, 0, dp);
}