/* 
LeetCode: 125. Valid Palindrome
Learning: Two Pointers, String, ASCII value
Description: A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

ASCII Table:
48 - 57 = 0 - 9
65 - 90 = A - Z
97 - 122 = a - z
*/
#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string s) {
    string str = "";
    for(char c : s) {
        if((c >= 97 && c <=  122) || (c >= 48 && c <= 57)) str += c;
        else if (c >= 65 && c <= 90) str += c + 32;
    }
    return str;
}

bool isPalindrome(string s) {
    string str = toLowerCase(s);
    int j = str.size() - 1;
    for(int i = 0; i < j; i++) {
        if (str[i] != str[j]) return false;
        j--;
    }
    return true;
}

int main() {

    string s = "A man, a plan, a canal: Panama";
    if (isPalindrome(s)) cout << "Valid palindrome\n";
    else cout << "Not a valid palindrome\n";

  return 0;
}