/*
CodeForces: A. String
Learning: constructive algorithms, greedy, math, strings
Description: You are given a string & of length n consisting of 0 and/or 1. In one operation, you can select a non-empty subsequence t from s such that any two adjacent characters in t are different. Then, you flip each character of t (0 becomes 1 and 1 becomes 0). For example, if s = 00101 and t = 81838485 = 0101, after the operation, s becomes 10010.

Calculate the minimum number of operations required to change all characters in s to 0.

Recall that for a string 8 = 8182... Sn, any string t = sin sis. Six (k≥1) where 1 < 11 < 12 < ... < ik ≤ n is a subsequence of s.

Input
The first line of input contains a single integer t (1 < t < 104) - the number of input test cases.
The only line of each test case contains the string 8 (1≤ |s| ≤ 50), where |8| represents the length of 8.

Output
For each test case, output the minimum number of operations required to change all characters in s to 0.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        string st;
        cin >> st;
        int c = 0;

        for(int i = 0; i < st.size(); i++) {
            if (st[i] == '1') c++;
        }
        cout << c << endl;
    }

  return 0;
}