/* 
LeetCode: 383. Ransom Note
Learning: Hash Table, String, Counting
Description: Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
Each letter in magazine can only be used once in ransomNote.

Example 1:
Input: ransomNote = "a", magazine = "b"
Output: false

Example 2:
Input: ransomNote = "aa", magazine = "ab"
Output: false

Example 3:
Input: ransomNote = "aa", magazine = "aab"
Output: true
*/
#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    vector<int> rN(26), mZ(26);
    for (char c : ransomNote) rN[c - 'a']++;
    for (char c : magazine) mZ[c - 'a']++;
    for (int i = 0; i < 26; i++)
        if (rN[i] != 0 && rN[i] > mZ[i]) return false;
    return true;
}

int main() {

    // string ransomNote = "a", magazine = "b";    // false
    // string ransomNote = "aa", magazine = "ab";    // false
    string ransomNote = "aa", magazine = "aab";    // true
    cout << canConstruct(ransomNote, magazine) << endl;

  return 0;
}