// LeetCode: 15. 3Sum
// Learning: Modified 2 sum, Two Pointer approach
// Description: Given an integer array. Have to return a 2D array contain three element whose sum = 0.
#include <bits/stdc++.h>
using namespace std;
// Approach 1 - Brute Force
// vector<vector<int>> threeSum(vector<int>& nums) {
//     int n = nums.size();
//     vector<vector<int>> ans;
//     set<vector<int>> myset;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             for (int k = j + 1; k < n; k++) {
//                 if (nums[i] + nums[j] + nums[k] == 0) {
//                     vector<int> temp = {nums[i], nums[j], nums[k]};
//                     sort(temp.begin() , temp.end());
//                     myset.insert(temp);
//                 }
//             }
//         }
//     }
//     for (auto i : myset) {
//         ans.push_back(i);
//     }
//     return ans;
// }

// Approach 2 - Modified 2 sum
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i-1]) {
            continue;
        }

        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k) {
            int total = nums[i] + nums[j] + nums[k];

            if (total > 0) {
                k--;
            } else if (total < 0) {
                j++;
            } else {
                res.push_back({nums[i], nums[j], nums[k]});
                j++;

                while (nums[j] == nums[j-1] && j < k) {
                    j++;
                }
            }
        }
    }
    return res;        
}
int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(nums);

    cout << "Triplets with sum 0:" << endl;
    for (const auto& triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}