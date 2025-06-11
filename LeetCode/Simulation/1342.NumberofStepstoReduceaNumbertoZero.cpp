/*
LeetCode: 1342. Number of Steps to Reduce a Number to Zero
Learning: Math, Bit Manipulation
Description: Given an integer num, return the number of steps to reduce it to zero.

In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

Example 1:
Input: num = 14
Output: 6
Explanation: 
Step 1) 14 is even; divide by 2 and obtain 7. 
Step 2) 7 is odd; subtract 1 and obtain 6.
Step 3) 6 is even; divide by 2 and obtain 3. 
Step 4) 3 is odd; subtract 1 and obtain 2. 
Step 5) 2 is even; divide by 2 and obtain 1. 
Step 6) 1 is odd; subtract 1 and obtain 0.
*/
#include <bits/stdc++.h>
using namespace std;

int numberOfSteps(int num) {
  // // way 1:
  // int count = 0;
  // while(num) {
  //   if (num % 2 == 0) num /= 2;
  //   else num -= 1;
  //   ++count;
  // }
  // return count;

  // way 2: using bit wise operator
  int count = 0;
  while(num) {
    if((num & 1) == 0) num >>= 1;
    else num--;
    count++;
  }
  return count;
}

int main() {

    // int n;
    // cin >> n;
    // int n = 14; // 6
    // int n = 8; // 4
    int n = 123; // 12
    cout << numberOfSteps(n) << endl;

  return 0;
}