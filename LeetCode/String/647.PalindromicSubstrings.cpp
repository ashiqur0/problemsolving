/* 
LeetCode: 647. Palindromic Substrings
Learning: Two Pointers, String, Dynamic Programming
Description: Given a string s, return the number of palindromic substrings in it.
A string is a palindrome when it reads the same backward as forward.
A substring is a contiguous sequence of characters within the string.

Example 1:
Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".

Example 2:
Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
*/
#include <bits/stdc++.h>
using namespace std;

int count_palindrome(string s, int start, int end) {
    int ans = 0;
    while ((start >= 0 && end < s.size()) && s[start] == s[end]) {
        ans++;
        start--;
        end++;
    }

    return ans;
}

int countSubstrings(string s) {
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
        res += count_palindrome(s, i, i);
        res += count_palindrome(s, i, i + 1);
    }
    return res;
}

int main() {

    string s = "abc";
    cout << countSubstrings(s) << endl;

  return 0;
}