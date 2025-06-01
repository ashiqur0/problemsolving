#include <bits/stdc++.h>
using namespace std;

// Modified Binary Search
int binarySearch(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(nums[mid] == target) return mid;

        if(nums[start] <= nums[mid]) { //left part of the array is sorted
            if(target >= nums[start] && target < nums[mid]) end = mid - 1;
            else start = mid + 1;
        } else {                       //right part is sorted
            if(target <= nums[end] && target > nums[mid]) start = mid + 1;
            else end = mid - 1;
        }
    }

    return -1;
}

int main() {

    // vector<int> v = {4,5,6,7,0,1,2};
    // int target = 0;
    // vector<int> v = {4,5,6,7,0,1,2};
    // int target = 3;
    // vector<int> v = {1};
    // int target = 0;
    vector<int> nums = {4,5,6,7,8,1,2,3};
    int target = 8;

    cout << binarySearch(nums, target) << endl;

    return 0;
}