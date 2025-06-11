/*
LeetCode: 1672. Richest Customer Wealth
Learning: Array, Matrix
Description: You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.
*/

#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = INT_MIN;
    for (int i = 0; i < accounts.size(); i++) {
        int currentMax = 0;
        for (int j : accounts[i]) {
            currentMax += j;
        }
        maxWealth = max(maxWealth, currentMax);
    }
    return maxWealth;
}

int main() {

    // vector<vector<int>> arr = {{1, 2, 3}, {3, 2, 1}};   // 6
    vector<vector<int>> arr = {{1, 5}, {7, 3}, {3, 5}};   // 10
    cout << maximumWealth(arr) << endl;

  return 0;
}