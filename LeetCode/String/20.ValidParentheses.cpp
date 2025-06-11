/* 
LeetCode: 20. Valid Parentheses
Learning: String, Stack
Description: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. An input string is valid if: 
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            if ((s[i] == ')' && top != '(') ||
                (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '[')) {
                return false;
            }
            st.pop();            
        }
    }
    return st.empty();
}

int main() {

    // string s = "()";    // 1
    // string s = "()[]{}";    // 1
    // string s = "(]";    // 0
    string s = "([])";    // 1
    cout << isValid(s) << endl;

  return 0;
}