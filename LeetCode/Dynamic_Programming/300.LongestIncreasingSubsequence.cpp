// LeetCode: 300. Longest Increasing Subsequence
// Learning: Array, Binary Search, Dynamic Programming
// Description: Given an integer array nums, return the length of the longest strictly increasing subsequence.

#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
    int maxLength = INT_MAX, length = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
        stack<int> s;
        s.push(INT_MAX);
        if (nums[i] < nums[i + 1] && nums[i] < s.top()) {
            s.push(nums[i]);
            s.push(nums[i + 1]);
        } else {

        }
    }
}

int main() {

    vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};

    cout << lengthOfLIS(nums) << endl;

  return 0;
}