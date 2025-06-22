/*
LeetCode: 26. Remove Duplicates from Sorted Array
Learning: Array, Two Pointers
Description: Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    // unordered_set<int> s;
    // for (int n : nums) s.insert(n);
    // nums.clear();
    // for(int n : s) nums.push_back(n);
    // sort(nums.begin(), nums.end());
    // return nums.size();
    int beg = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[beg] = nums[i];
            beg++;
        }
    }
    return beg;
}

int main() {

    vector<int> nums = {1, 1, 2};   // 1 2
    int size = removeDuplicates(nums);
    for (int i = 0; i < size; i++) cout << nums[i] << " ";

  return 0;
}
