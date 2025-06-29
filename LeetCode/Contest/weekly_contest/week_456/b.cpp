/*
LeetCode : Weekly Contest 456: Q2. Longest Common Prefix Between Adjacent Strings After Removals [TLE: not yet solved]
Learning: 
Description: You are given an array of strings words. For each index i in the range [0, words.length - 1], perform the following steps:

Remove the element at index i from the words array.
Compute the length of the longest common prefix among all adjacent pairs in the modified array.
Return an array answer, where answer[i] is the length of the longest common prefix between the adjacent pairs after removing the element at index i. If no adjacent pairs remain or if none share a common prefix, then answer[i] should be 0.

A prefix of a string is a substring that starts from the beginning of the string and extends to any point within it.©leetcode

Example 1:
Input: words = ["jump","run","run","jump","run"]
Output: [3,0,0,3,3]

Explanation:
Removing index 0:
words becomes ["run", "run", "jump", "run"]
Longest adjacent pair is ["run", "run"] having a common prefix "run" (length 3)
Removing index 1:
words becomes ["jump", "run", "jump", "run"]
No adjacent pairs share a common prefix (length 0)
Removing index 2:
words becomes ["jump", "run", "jump", "run"]
No adjacent pairs share a common prefix (length 0)
Removing index 3:
words becomes ["jump", "run", "run", "run"]
Longest adjacent pair is ["run", "run"] having a common prefix "run" (length 3)
Removing index 4:
words becomes ["jump", "run", "run", "jump"]
Longest adjacent pair is ["run", "run"] having a common prefix "run" (length 3)©leetcode
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> longestCommonPrefix(vector<string>& words) {
    vector<int> arr(words.size());
    arr[0] = 0;

    if(words.size() == 1) return arr;
    for (int i = 0; i < words.size(); i++) {
        vector<string> w(words.size()-1);
        int k = 0;
        for (int j = 0; j < words.size(); j++) {
            if (i != j) {
                w[k] = words[j];
                k++;
            }
        }

        int max_size = 0;
        for (int j = 0; j < w.size() - 1; j++) {
            int count = 0;
            for (int k = 0; k < w[j].size(); k++) {
                if (w[j][k] != w[j + 1][k]) {
                    break;
                } else {
                    count++;
                    max_size = max(max_size, count);
                }
            }
        }
        arr[i] = max_size;
    }    
    return arr;
}

int main() {

    vector<string> words = {"jump","run","run","jump","run"};
    // vector<string> words = {"bdbb","aba","ae","dff","b","afcff","fbdc"};
    vector<int> arr = longestCommonPrefix(words);
    for (int n : arr) cout << n << " ";
    cout << endl;

  return 0;
}