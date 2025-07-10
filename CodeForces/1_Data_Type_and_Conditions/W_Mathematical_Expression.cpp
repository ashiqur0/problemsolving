/*
CodeForces: Data Type and Conditions - Problem W
Problem Name: W. Mathematical Expression
Learning: Conditional Statements
Description: Given a mathematical expression. The expression will be one of the following expressions: A+B=C, ABC and A*B=C
where A, B, C are three numbers, S is the sign between A and B, and the '=' sign
Print "Yes" If the expression is Right, Otherwise print the right answer of the expression.

Input
Only one line containing the expression: A, S, B, Q, C respectively (0≤A, B≤100, -105 ≤ C≤105) and S can be ('+', '-', '*') without the quotation.

Output
Output either "Yes" (without the quotation) or the right answer depending on the statement.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, c, e;
    char b, d;
    cin >> a >> b >> c >> d >> e;

    switch (b) {
        case '+' : cout << ((a + c == e) ? "Yes\n" : to_string(a + c)) << endl; break;
        case '-' : cout << ((a - c == e) ? "Yes\n" : to_string(a - c)) << endl; break;
        case '*' : cout << ((a * c == e) ? "Yes\n" : to_string(a * c)) << endl; break;
        case '/' : cout << ((a / c == e) ? "Yes\n" : to_string(a / c)) << endl; break;
    }

  return 0;
}