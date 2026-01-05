// Find the fibonacci number using DP.
// DP is of two types: 1. Top Down 2. Bottom Up
// After that we do space optimization.

// 1. In top down approach, we use recursion along with memoization to store the results of subproblems.
// Time complexity: O(n)     Space complexity: O(n) + O(n) ~ O(n)

// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n, vector<int>&memo){
//     if(n == 0 || n == 1){
//         return n;
//     }
//     if(memo[n] != -1){
//         return memo[n];
//     }
//     memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
//     return memo[n];
// }

// int main(){
//     int n;
//     cout << "Enter the fibonacci term required:";
//     cin >> n;
//     vector<int>memo(n + 1, -1);
//     cout << fib(n, memo) << endl;
// }

// 2. In bottom up approach, we use tabulation.
// Time complexity: O(n)     Space complexity: O(n)

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the fibonacci term required:";
//     cin >> n;
//     int dp[n + 1];
//     dp[0] = 0;
//     dp[1] = 1;
//     for(int i = 2; i <= n; i++){
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }
//     cout << dp[n] << endl; 
// }

// 3. Space Optimization in the bottom up approach.
// Time complexity: O(n)     Space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the fibonacci term required:";
    cin >> n;
    int prev = 0;
    int curr = 1;
    if(n == 0)curr = 0;
    for(int i = 2; i <= n; i++){
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    cout << curr << endl; 
}