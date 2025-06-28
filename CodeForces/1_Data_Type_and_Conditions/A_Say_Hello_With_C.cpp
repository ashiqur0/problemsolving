/*
CodeForces: Data Type and Conditions - Problem A
Problem Name: A. Say Hello With C++
Learning: Data Type, Input, Output,
Description: Given a name S. Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name.

Example: 
Input : programmer
Output: Hello, programmer

Reference: The problem is from, ICPC Assiut University Community
Aim to: Newcomers Training
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    string name;
    cin >> name;
    cout << "Hello, " << name << endl;

  return 0;
}