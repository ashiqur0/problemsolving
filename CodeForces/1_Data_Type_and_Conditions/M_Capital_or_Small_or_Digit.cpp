/*
CodeForces: Data Type and Conditions - Problem M
Problem Name: M. Capital or Small or Digit
Learning: Conditional Statements
Description: Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

Note:
Digits in ASCII '0' = 48,'1' = 49 ....etc
Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
Small letters in ASCII 'a' = 97,'b' = 98 ....etc
Input
Only one line containing a character X which will be a capital or small letter or digit.

Output
Print a single line contains "IS DIGIT" if X is digit otherwise, print "ALPHA" in the first line followed by a new line that contains "IS CAPITAL" if X is a capital letter and "IS SMALL" if X is a small letter.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    char c;
    cin >> c;

    if (c >= 48 && c <= 57) {
        cout << "IS DIGIT" << endl;
    } else if(c >= 65 && c <= 90) {
        cout << "ALPHA\nIS CAPITAL" << endl;
    } else if(c >= 97 && c <= 122) {
        cout << "ALPHA\nIS SMALL" << endl;
    }

  return 0;
}