/*
CodeForces: Data Type and Conditions - Problem L
Problem Name: L. The Brothers
Learning: Conditional Statements
Description: Given two person names.
Each person has {"the first name" + "the second name"}
Determine whether they are brothers or not.
Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.
Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise print "NOT".
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    string a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (b==d? "ARE Brothers" : "NOT") << endl;

  return 0;
}