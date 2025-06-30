/*
LeetCode: 70. Climbing Stairs
Learning: Math, Dynamic Programming, Memoization
Description: You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
*/

#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    if(n<=3) {
        return n;
    }
    int first = 2, second = 3;
    for(int i=4; i<=n; i++) {
        int temp = first+second;
        first = second;
        second = temp;    
    }
    return second;
}

int main() {



  return 0;
}