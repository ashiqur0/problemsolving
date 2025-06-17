/*
LeetCode : 136. Single Number
Topics : Array, Bit Manipulation
Description Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1: 
*/

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    if(nums.size() == 1) return nums[0];
    int ans = 0;
    for(int n : nums) {
        ans ^= n;
    }
    return ans;
}

int main() {

    // vector<int> nums = {4, 1, 2, 1, 2}; // 4
    // vector<int> nums = {2,2,1}; // 1
    vector<int> nums = {1}; // 1
    cout << singleNumber(nums) << endl;

  return 0;
}