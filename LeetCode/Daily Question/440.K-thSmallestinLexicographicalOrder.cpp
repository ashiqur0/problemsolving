/*
LeetCode: 440. K-th Smallest in Lexicographical Order
Learning: Trie
Description: Given two integers n and k, return the kth lexicographically smallest integer in the range [1, n].

Example 1:
Input: n = 13, k = 2
Output: 10
Explanation: The lexicographical order is [1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9], so the second smallest number is 10.

Example 2:
Input: n = 1, k = 1
Output: 1
*/

#include <bits/stdc++.h>
using namespace std;

int findKthNumber(int n, int k) {
    vector<int> v(n);
    vector<int> c = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 1; i <= n; i++) {
        v[i] = v[i % 10] + i % 10;
    }
    return v[k];
}

int main() {

    int n, k;
    cin >> n >> k;
    cout << findKthNumber(n, k) << endl;

  return 0;
}