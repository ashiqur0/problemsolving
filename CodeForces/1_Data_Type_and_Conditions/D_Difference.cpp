/*
CodeForces: Data Type and Conditions - Problem D
Problem Name: D. Difference
Learning: Data Type, Input, Output,
Description: Given four numbers A, B, C and D. Print the result of the following equation :
X = (A * B) - (C * D).
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "Difference = " << (a * b) - (c * d) << endl;

  return 0;
}