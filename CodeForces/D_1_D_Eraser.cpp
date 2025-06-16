/*
CodeForces: D. 1D Eraser
Learning: greedy, implementation, two pointers	
Description: You are given a strip of paper s
 that is n
 cells long. Each cell is either black or white. In an operation you can take any k
 consecutive cells and make them all white.

Find the minimum number of operations needed to remove all black cells.

Input
The first line contains a single integer t
 (1≤t≤1000) — the number of test cases.

The first line of each test case contains two integers n
 and k
 (1≤k≤n≤2⋅105) — the length of the paper and the integer used in the operation.

The second line of each test case contains a string s
 of length n
 consisting of characters B
 (representing a black cell) or W
 (representing a white cell).

The sum of n
 over all test cases does not exceed 2⋅105.
Output
For each test case, output a single integer — the minimum number of operations needed to remove all black cells.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        int n, k, count = 0;
        cin >> n >> k;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                i += k - 1;
                count++;
            }
        }

        cout << count << endl;
    }

  return 0;
}