// LeetCode: 300. Longest Increasing Subsequence
// Learning: Array, Binary Search, Dynamic Programming
// Description: Given an integer array nums, return the length of the longest strictly increasing subsequence.

#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {

    // Dynamic approach O(n^2)
    int n = nums.size();
    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                    if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }
    return *max_element(dp.begin(), dp.end());

    // // Greedy approach, binary search, O(n logn)
    // int n = nums.size();
    // vector<int> arr;
    // for (int i = 0; i < n; i++) {
    //     auto it = lower_bound(arr.begin(), arr.end(), nums[i]);
    //     if (it == arr.end()) {
    //         arr.push_back(nums[i]);
    //     } else {
    //         *it = nums[i];
    //     }
    // }
    // return arr.size();
}

int main() {

    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};

    cout << lengthOfLIS(nums) << endl;

  return 0;
}