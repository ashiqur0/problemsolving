/*
CodeForces: Data Type and Conditions - Problem N
Problem Name: N. Char
Learning: Conditional Statements
Description: Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    char c;
    cin >> c;

    if (c >= 65 && c <= 90) {
        cout << (c += 32) << endl;
    } else if (c >= 97 && c <= 122) {
        cout << (c -= 32) << endl;
    }

  return 0;
}