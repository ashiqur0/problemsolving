// LeetCode: 371. Sum of Two Integers
// Learning: Bit Manipulation; 
            // Bitwise AND (a&b), 
            // Bitwise XOR (a^b), 
            // Left Shift Operator (<<)
// Description: Given two numbers. Calculate their sum without usign + or - operator

#include <bits/stdc++.h>
using namespace std;
int getSum(int a, int b) {
    while(b != 0) {
        int temp = (a&b) << 1;  // 0001 & 0010 = 0000 << 1 = 0000
        a = a^b;                // 0001 ^ 0010 = 0011
        b = temp;               // b = temp = 0000 = 0
    }
    return a;
}

int main() {

    int a=1, b=2;
    cin >> a >> b;
    cout << getSum(a, b) << endl;

  return 0;
}