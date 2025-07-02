/*
LeetCode: 709. To Lower Case
Learning: String
Description: Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

Example 1:
Input: s = "Hello"
Output: "hello"

Example 2:
Input: s = "here"
Output: "here"

Example 3:
Input: s = "LOVELY"
Output: "lovely"

*/

#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string s) {
    string str = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            str += (s[i] + 32);
        } else {
            str += s[i];
        }
    }
    return str;
}

int main() {

    string s = "Hello";
    cout << toLowerCase(s) << endl; // output: hello

  return 0;
}