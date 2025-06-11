// LeetCode: 238. Product of Array Except Self
// Learning: Prefix Sum Approach
// Description: Given an integer array nums. Have to return the answer array which it the product of all element but except that element.

#include <bits/stdc++.h>
using namespace std;

//Fundamental skills: Array
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    vector<int> left(n);
    vector<int> right(n);

    left[0] = 1;
    for(int i=1; i<n; i++) {
        left[i] = left[i-1] * nums[i-1];
    }

    right[n-1] = 1;
    for(int i=n-2; i>=0; i--) {
        right[i] = right[i+1] * nums[i+1];
    }
    
    for(int i=0; i<n; i++) {
        ans[i] = left[i] * right[i];
    }
    
    return ans;
}

int main() {

    // vector<int> nums = {1, 2, 3, 4};    // 24, 12, 8, 6
    vector<int> nums = {-1, 1, 0, -3, 3};    // 0, 0, 9, 0, 0
    vector<int> answer = productExceptSelf(nums);
    for(int i=0; i<answer.size(); i++) {
        cout << answer[i] << " ";
    }


    return 0;
}