/* 
HackerRank: Balanced Brackets
Learning: String, Stack
Description: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is Balanced. An input string is Balanced if: 
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

Print Yes : if Balanced
Print No : otherwise
*/

#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s) {
    int n = s.size();
    stack<char> stack;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack.push(s[i]);
        } else {
            if (stack.empty()) {
                return false;
            }
            char top = stack.top();
            if ((s[i] == ')' && top != '(') || 
                (s[i] == '}' && top != '{') || 
                (s[i] == ']' && top != '[')) {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}

int main() {    

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout << (isBalanced(s)? "YES" : "NO") << endl;
    }

  return 0;
}