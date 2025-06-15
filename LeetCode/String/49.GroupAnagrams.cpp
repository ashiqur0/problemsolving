/*
LeetCode: 49. Group Anagrams
Learning: Array, Hash Table, String, Sorting
Description: Given an array of strings strs, group the anagrams together. You can return the answer in any order.

Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Explanation:
There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

Example 2:
Input: strs = [""]
Output: [[""]]

Example 3:
Input: strs = ["a"]
Output: [["a"]]
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for(string s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);
    }
    vector<vector<string>> ans;
    for(auto& entry : mp) {
        ans.push_back(entry.second);
    }

    return ans;
}

int main() {

    vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};
    // vector<string> str = {};
    vector<vector<string>> ans = groupAnagrams(str);
    for(int i = 0; i < ans.size(); i++) {
        for(string s : ans[i]) {
            cout << s << " ";
        }
        cout << "\n";
    }

  return 0;
}