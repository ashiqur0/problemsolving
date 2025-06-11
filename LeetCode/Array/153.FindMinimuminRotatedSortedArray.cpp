// LeetCode: 153. Find Minimum in Rotated Sorted Array
// Learning: Binary Search
// Description: Given array of integer. Find the minimum

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums) {
    // Way: 1, Beats: 100%, complexity: 0ms
    // sort(nums.begin(), nums.end());
    // return nums[0];

    // Way: 2, Beats: 100%, complexity: 0ms
    int low = 0;
    int high = nums.size()-1;
    int ans = INT_MAX;
    while(low <= high) {
        int mid = (low + high)/2;
        if(nums[low] <= nums[mid]) {
            ans = min(ans, nums[low]);
            low = mid + 1;
        } else {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }

    return ans;
}

int main() {

    vector<int> nums = {3, 4, 5, 1, 2};//1
    // vector<int> nums = {4, 5, 6, 7, 0, 1, 2};//0
    // vector<int> nums = {11, 13, 15, 17};//11
    // vector<int> nums = {3,1,2};//1
    cout << findMin(nums) << endl;

    return 0;
}