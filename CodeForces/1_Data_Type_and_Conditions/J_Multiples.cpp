/*
CodeForces: Data Type and Conditions - Problem J
Problem Name: J. Multiples
Learning: Conditional Statements
Description: Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    long long a, b;
    cin >> a >> b;
    cout << ((a%b==0 || b%a==0)? "Multiples" : "No Multiples") << endl;

  return 0;
}