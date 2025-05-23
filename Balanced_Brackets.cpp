#include <bits/stdc++.h>
using namespace std;
// char closing(char c) {
//     if (c==')') return '(';
//     else if (c=='}') return '{';
//     else if (c==']') return '[';
//     else if (c=='(') return ')';
//     else if (c=='{') return '}';
//     else if (c=='[') return ']';
//     // return 0;
// }

int main() {    

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        stack<char> st;
        for(int i=0; i<s.size(); i++) {
            // st.top() == closing(s[i])? st.pop() : st.push(s[i]);
            if(s[i] == ')' && st.top() == '(') {
                st.pop();
            } else if(s[i] == '}' && st.top() == '{') {
                st.pop();
            } else if(s[i] == ']' && st.top() == '[') {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }

        st.empty()? cout << "YES" << endl : cout << "NO" << endl;
    }

  return 0;
}