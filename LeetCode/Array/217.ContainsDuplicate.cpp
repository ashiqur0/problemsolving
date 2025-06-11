// LeetCode: 217. Contains Duplicate
// Learning: Hash Table, Set
// Description: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {    
    //51ms
    unordered_set<int> s;
    for(int i=0; i<nums.size(); i++) {
        // insert the number if it is not exist to the set
        if(!s.count(nums[i])) {
            s.insert(nums[i]);
        } else {
            // otherwise return true
            return true;
        }
    }
    // finaly return false if there is no duplicate
    return false;

    // //55ms
    // unordered_set<int> s;
    // for(int i=0; i<nums.size(); i++) {
    //     // s.find() returns s.end() if the value does not exist in s
    //     // s.find() returns an iteratoar pointing to the nums[i] if the value is exist
    //     // ex: if nums[i] = 1 then find() will return s.end() 
    //     // if find function find the number in the unordererd_set s then it will return an iterator which will not equal to s.end(). So, the condition will be satisfy and it will return true
    //     if(s.find(nums[i]) != s.end()) {
    //         return true;
    //     }
    //     // otherwise it will insert the number to the unordered_set s
    //     s.insert(nums[i]);
    // } 
    // // finally, return false if there is no duplicates
    // return false;
}

int main() {

    vector<int> nums = {1, 2, 3, 1};   // true
    // vector<int> nums = {1, 2, 3, 4};   // false
    cout << containsDuplicate(nums) << endl;


    return 0;
}