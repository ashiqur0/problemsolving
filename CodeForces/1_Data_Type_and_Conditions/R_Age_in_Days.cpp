/*
CodeForces: Data Type and Conditions - Problem R
Problem Name: R. Age in Days
Learning: Conditional Statements
Description: Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".
Note: consider the whole year has 365 days and 30 days per month.

Input
Only one line containing a number N (0 ≤ N ≤ 106).

Output
Print the output, like the following examples.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    cout << (n / 365) << " years" << endl;
    cout << ((n % 365) / 30) << " months" << endl;
    cout << ((n % 365) % 30) << " days" << endl;

  return 0;
}