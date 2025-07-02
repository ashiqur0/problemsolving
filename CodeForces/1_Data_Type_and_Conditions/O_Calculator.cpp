/*
CodeForces: Data Type and Conditions - Problem O
Problem Name: O. Calculator
Learning: Conditional Statements
Description: Given a mathematical expression. The expression will be one of the following expressions: A+B, A−B, A∗B and A/B.
Print the result of the mathematical expression.

Input
Only one line contains A,S and B (1≤A,B≤104), S is either (+,−,∗,/).

Output
Print the result of the mathematical expression.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    long long a, c;
    char b;
    cin >> a >> b >> c;
    
    if (b == '+') {
        cout << a + c << endl;
    } else if (b == '-') {
        cout << a - c << endl;
    } else if (b == '*') {
        cout << a * c << endl;
    } else if (b == '/') {
        cout << a / c << endl;
    }
 
  return 0;
}