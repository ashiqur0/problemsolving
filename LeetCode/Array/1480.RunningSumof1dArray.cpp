/*
LeetCode: 1480. Running Sum of 1d Array
Learning: Array, Prefix Sum
Description: Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.

Example 1:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    for (int i = 1; i < nums.size(); i++) {
        nums[i] = nums[i] + nums[i -1];
    }
    return nums;
}

int main() {

    vector<int> nums = {1,2,3,4};
    vector<int> ans = runningSum(nums);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

  return 0;
}