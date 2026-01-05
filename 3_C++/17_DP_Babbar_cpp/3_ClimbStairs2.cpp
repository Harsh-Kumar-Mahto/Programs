// You are gven an array of cost of ith step on a staircase.
// On paying cost you can climb one or two steps.
// You can start from step 0 or 1 , return min cost to reach the top.

// Normal recursion solution.
// #include<bits/stdc++.h>
// using namespace std;

// int helper(int n, vector<int>cost, int curr, int total){
//     if(curr > n)return INT_MAX;
//     if(curr == n)return total;
//     total += cost[curr];
//     return min(helper(n, cost, curr + 1, total), helper(n, cost, curr + 2, total));
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int>cost(n);
//     for(int i = 0; i < n; i++){
//         cin >> cost[i];
//     }
//     int val1 = helper(n, cost, 0, 0);
//     int val2 = helper(n, cost, 1, 0);
//     cout << min(val1, val2);
// }

// Top down approach.
// #include<bits/stdc++.h>
// using namespace std;

// int helper(int n, vector<int>cost, int curr, vector<int>& dp){
//     if(curr >= n)return 0;
//     if(dp[curr] != -1)return dp[curr];
//     dp[curr] = min(cost[curr] + helper(n, cost, curr + 1, dp), cost[curr] + helper(n, cost, curr + 2, dp));
//     return dp[curr];
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int>cost(n);
//     for(int i = 0; i < n; i++){
//         cin >> cost[i];
//     }
//     vector<int>dp(n, -1);
//     int val1 = helper(n, cost, 0, dp);
//     int val2 = helper(n, cost, 1, dp);
//     cout << min(val1, val2);
// }


// Bottom up approach.
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//         int n;
//         cin >> n;
//         vector<int>cost(n);
//         for(int i = 0; i < n; i++){
//             cin >> cost[i];
//         }
//         vector<int>dp(n, -1);
//         dp[0] = cost[0];
//         dp[1] = cost[1];
//         for(int i = 2; i < n; i++){
//             dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
//         }
//         cout << min(dp[n - 1], dp[n - 2]);
// }

// Space optimization.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>cost(n);
    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }
    int prev1 = cost[0];
    int prev2 = cost[1];
    for(int i = 2; i < n; i++){
        int curr = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    cout << min(prev1, prev2);
}