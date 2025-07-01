/*
CodeForces: Data Type and Conditions - Problem E
Problem Name: E. Area of a Circle
Learning: Data Type, Input, Output,
Description: Given a number R calculate the area of a circle using the following formula:
Area = π * R2.
Note: consider π = 3.141592653.

Input
Only one line containing the number R (1  ≤  R  ≤  100).

Output
Print the calculated area, with 9 digits after the decimal point.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    const double PI = 3.141592653;
    double r;
    cin >> r;

    cout << fixed << setprecision(9) << PI * r * r << endl;

  return 0;
}