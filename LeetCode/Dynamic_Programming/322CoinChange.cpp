// LeetCode: 322. Coin Change
// Learning: Array, Dynamic Programming, Breadth-First Search
// Description: You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money. Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int n) {
    int dp[++n];
    dp[0] = 0;
    sort(coins.begin(), coins.end());
    for(int i = 1; i < n; i++) {
        dp[i] = INT_MAX;
        for(int c : coins) {
            if(i - c < 0) {
                break;
            }
            if(dp[i - c] != INT_MAX) {
                dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
    }
    return dp[--n] == INT_MAX ? -1 : dp[n];
}

int main() {

    vector<int> coins = {1, 2, 5};
    int n = 11;
    cout << coinChange(coins, n) << endl;

    return 0;
}