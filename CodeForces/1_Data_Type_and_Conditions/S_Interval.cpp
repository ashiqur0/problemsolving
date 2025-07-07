/*
CodeForces: Data Type and Conditions - Problem S
Problem Name: S. Interval
Learning: Conditional Statements
Description: Given a number X. Determine in which of the following intervals the number X belongs to: [0,25], (25,50], (50,75], (75,100]

Note:
if X belongs to any of the above intervals print "Interval " followed by the interval.
if X does not belong to any of the above intervals print "Out of Intervals".
The symbol '(' represents greater than.
The symbol ')' represents smaller than.
The symbol '[' represents greater than or equal.
The symbol']' represents smaller than or equal.

For example:
[0,25] indicates numbers between 0 and 25.0000, including both.
(25,50] indicates numbers greater than 25: (25.00001) up to 50.0000000.

Input
Only one line containing a number X(-1000≤x≤1000).

Output
Print the answer to the problem above.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {

    float n;
    scanf("%f", &n);

    if ((n >= 0 && n  <= 25.0) ) printf("Interval [%d,%d]\n", 0, 25);
    if ((n > 25 && n  <= 50.0) ) printf("Interval (%d,%d]\n", 25, 50);
    if ((n > 50 && n  <= 75.0) ) printf("Interval (%d,%d]\n", 50, 75);
    if ((n > 75 && n  <= 100.0) ) printf("Interval (%d,%d]\n", 75, 100);
    if ((n < 0 || n  > 100.0) ) printf("Out of Intervals");

  return 0;
}