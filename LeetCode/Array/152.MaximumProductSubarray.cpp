// LeetCode: 152. Maximum Product Subarray
// Learning: Dynamic Programming
// Description: Given array of integer. Find the maximum product

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxProduct = nums[0];
    int currentMax = nums[0];
    int currentMin = nums[0];

    for(int i=1; i<nums.size(); i++) {
        if(nums[i] < 0) {
            swap(currentMax, currentMin);
        }

        currentMax = max(nums[i], currentMax * nums[i]);
        currentMin = min(nums[i], currentMin * nums[i]);
        maxProduct = max(maxProduct, currentMax);
    }
    return maxProduct;
}

int main() {

    vector<int> nums = {2,3,-2,4};//6
    // vector<int> nums = {-2,0,-1};//0
    // vector<int> nums = {-3,-1,-1};//3
    cout << maxProduct(nums) << endl;

    return 0;
}