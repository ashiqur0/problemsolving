// LeetCode: 70. Climbing Stairs
// Learning: Math, Dynamic Programming, Memoization
// Description: You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n) {
    if(n<=3) {
        return n;
    }
    int first = 2, second = 3;
    for(int i=4; i<=n; i++) {
        // int temp = first+second;
        // first = second;
        // second = temp;
        second = first+second;
        first = second-first;
    }
    return second;
}
int main() {

    int n = 6;
    cout << climbStairs(n) << endl;

  return 0;
}