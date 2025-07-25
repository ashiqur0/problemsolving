// LeetCode: 53. Maximum Subarray
// Learning: Subarray, Dynamic Programming
// Description: Given array. Find the subarray with the largest sum
#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0; i<nums.size(); i++) {
        currentSum += nums[i];
        if(currentSum > maxSum) {
            maxSum = currentSum;
        }

        if(currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {

    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};//6
    // vector<int> nums = {1};//1
    vector<int> nums = {5,4,-1,7,8}; //23
    cout << maxSubArray(nums) << endl;

    return 0;
}