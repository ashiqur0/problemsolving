/*
CodeForces: Data Type and Conditions - Problem K
Problem Name: K. Max and Min
Learning: Data Type, Input, Output,
Description: Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int minimum, maximum;
    if (a < b) {
        if (a < c) {
            minimum = a;
        } else {
            minimum = c;
        }
    } else {
        if (b < c) {
            minimum = b;
        } else {
            minimum = c;
        }
    }

    if (a > b) {
        if (a > c) {
            maximum = a;
        } else {
            maximum = c;
        }
    } else {
        if (b > c) {
            maximum = b;
        } else {
            maximum = c;
        }
    }

    cout << minimum << " " << maximum << endl;

  return 0;
}