/*
CodeForces: Data Type and Conditions - Problem Z
Problem Name: Z. Hard Compare
Learning: Conditional Statements
Description: Given 4 numbers A, B, C and D. If AB > CD print "YES" otherwise, print "NO".

Input
Only one line containing 4 numbers A, B, C and D (1 ≤ A, C < 107), (1 ≤ B, D < 1012) < <

Output
Print "YES" or "NO" according to the problem above.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << ( b * log(a) > d * log(c) ? "YES" : "NO" )<< endl;

  return 0;
}