/*
LeetCode: 32. Longest Valid Parentheses
Learning: String, Dynamic Programming, Stack
Description: Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

Example 1:
Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".

Example 2:
Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".

Example 3:
Input: s = ""
Output: 0
*/

#include <bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s) {
    stack<int> stack;
    stack.push(-1);
    int max_len = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            stack.push(i);
        } else {
            stack.pop();
            if(stack.empty()) {
                stack.push(i);
            } else {
                max_len = max(max_len, i - stack.top());
            }
        }
    }
    return max_len;
}

int main() {

    // string s = "(()";           // 2
    // string s = ")()())";     // 4
    string s = "";           // 0
    cout << longestValidParentheses(s) << endl;

  return 0;
}