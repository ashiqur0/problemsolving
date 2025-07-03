/*
CodeForces: Data Type and Conditions - Problem P
Problem Name: P. First digit !
Learning: Conditional Statements
Description: Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    cout << (((n / 1000) % 2 == 0)? "EVEN" : "ODD") << endl;

  return 0;
}