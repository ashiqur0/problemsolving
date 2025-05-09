#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    // Time limit exceed

    // for(int i=0; i<nums.size(); i++) {
    //     for(int j=i+1; j<nums.size(); j++) {
    //         if(nums[i] == nums[j]) {
    //             return true;
    //         }
    //     }
    // }
    // return false;

    // 7%(beats) :accepted but optimization need
    // set<int> se;
    // for(int i=0; i<nums.size(); i++) {
    //     se.insert(nums[i]);
    //     if(se.size() != i+1) {
    //         return true;
    //     }
    // }
    // return false;

    // 33%
    unordered_set<int> s;
    for(int n : nums) {
        if(s.find(n) != s.end()) {
            return true;
        }
        s.insert(n);
    }
    return false;

    // 25%
    // unordered_set<int> s;
    // for(int i=0; i<nums.size(); i++) {
    //     if(s.count(nums[i])) {
    //         return true;
    //     }
    //     s.insert(nums[i]);
    // }
    // return false;
}

int main() {

    vector<int> nums = {1, 2, 3, 1};   // true
    // vector<int> nums = {1, 2, 3, 4};   // false
    cout << containsDuplicate(nums) << endl;


    return 0;
}