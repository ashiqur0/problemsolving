/*
CodeForces: Data Type and Conditions - Problem G
Problem Name: G. Summation from 1 to N
Learning: Data Type, Input, Output,
Description: Given a number N
. Print the summation of the numbers that is between 1 and N(inclusive)
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    long long a, b;
    cin >> a >> b;
    cout << a % 10 + b % 10 << endl;

  return 0;
}