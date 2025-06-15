/* 
LeetCode: 242. Valid Anagram
Learning: Hash Table, String, Sorting
Description: Given two strings s and t, return true if t is an anagram of s, and false otherwise.

[Anagram: An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.]

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
*/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;
    vector<int> s1(26), t1(26);
    for (char c : s) s1[c - 'a']++;
    for (char c : t) t1[c - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (t1[i] != s1[i]) return false;
    }
    return true;
}

int main() {
    // string s = "anagram", t = "nagaram";    // true
    // string s = "rat", t = "car";                // false
    string s = "ab", t = "a";                // false
    if (isAnagram(s, t)) cout << "valid anagram\n";
    else cout << "not a valid anagram\n";

  return 0;
}