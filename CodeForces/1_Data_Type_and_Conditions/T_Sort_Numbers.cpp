/*
CodeForces: Data Type and Conditions - Problem T
Problem Name: T. Sort Numbers
Learning: Conditional Statements
Description: Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C (-106 < A, B, C ≤ 106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int> n(3);
    for(int &i : n) cin >> i;
    vector<int> cpy(n);
    sort(n.begin(), n.end());
    for(int i : n) cout << i << endl;
    cout << endl;
    for(int i : cpy) cout << i << endl;

  return 0;
}