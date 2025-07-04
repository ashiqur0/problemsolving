/*
CodeForces: Data Type and Conditions - Problem Q
Problem Name: Q. Coordinates of a Point
Learning: Conditional Statements
Description: Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

Note:

Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Print "Origem" If the point is at the origin.
Print "Eixo X" If the point is over X axis.
Print "Eixo Y" if the point is over Y axis.

Example1
input: 4.5 -2.2
output: Q4

input: 0.1 0.1
output: Q1

*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    double x, y;
    cin >> x >> y;

    if (x > 0 && y > 0) cout << "Q1" << endl;
    else if (x < 0 && y > 0) cout << "Q2" << endl;
    else if (x < 0 && y < 0) cout << "Q3" << endl;
    else if (x > 0 && y < 0) cout << "Q4" << endl;    
    else if (x == 0 && y == 0) cout << "Origem" << endl;
    else if (y == 0) cout << "Eixo X" << endl;
    else if (x == 0) cout << "Eixo Y" << endl;

  return 0;
}