/*
CodeForces: Data Type and Conditions - Problem H
Problem Name: H. Two numbers
Learning: Data Type, Input, Output,
Description: Given 2 numbers A and B. Print floor, ceil and round of A/B

Note:
Floor: Is a mathematical function that takes a real number X and its output is the greatest integer less than or equal to X.
Ceil: Is a mathematical function that takes a real number X and its output is the smallest integer larger than or equal to X.
Round: Is a mathematical function that takes a real number X and its output is the closest integer to that number X.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    long long n;
    cin >> n;

    cout << n * ( n + 1) / 2 << endl;

  return 0;
}