/*
CodeForces: Data Type and Conditions - Problem C
Problem Name: C. Simple Calculator
Learning: Data Type, Input, Output,
Description: Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:
"X + Y = summation result" without quotes.
"X * Y = multiplication result" without quotes.
"X - Y = subtraction result" without quotes.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    long long a, b;
    cin >> a >> b;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " - " << b << " = " << a - b << endl;

  return 0;
}