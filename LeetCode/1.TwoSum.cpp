#include <bits/stdc++.h>
using namespace std;
// LeetCode: 1. Two Sum
// Learning: Hash Table
// Description: Given an array and a target. Have to reutrn two indices, whose sum is equal to the target value
vector<int> twoSum(vector<int>& nums, int target) {    
    unordered_map<int, int> hashTable;
        for(int i=0; i<nums.size(); i++) {
            // find the vlaue whice one need to search 
            int key = target - nums[i];
            // if the key found in hashTable
            if(hashTable.count(key)) {
                // return the value of that key and index ofanother vlaue
                return {hashTable[key], i};
            }
            // insert key-value(number and it's index) pairto the hashTable
            hashTable[nums[i]] = i;
        }
        // return an empty array if the value not fuound
    return{};
}

int main() {

    vector<int> num = {2, 7, 11, 15};
    vector<int> res = twoSum(num, 9);
    cout << res[0] << " " << res[1] << endl;

    return 0;
}