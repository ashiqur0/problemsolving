/*
CodeForces : C. Game of Mathletes
Learning : games, greedy, sortings, two pointers
Description : Alice and Bob are playing a game. There are n (n is even) integers written on a blackboard, represented by Z1, Z2,..., In. There is also a given integer k and an integer score that is initially 0. The game lasts for turns, in which the following events happen sequentially: 2
Alice selects an integer from the blackboard and erases it. Let's call Alice's chosen integer a.
Bob selects an integer from the blackboard and erases it. Let's call Bob's chosen integer b.
If a + b = k, add 1 to score.
Alice is playing to minimize the score while Bob is playing to maximize the score. Assuming both players use optimal strategies, what is the score after the game ends?

Input
The first line contains an integer t (1 ≤ t ≤ 104) - the number of test cases.
The first line of each test case contains two integers n and k (2≤ n ≤2-105, 1≤ k ≤ 2. n, n is even).
The second line of each test case contains n integers X1, X2,..., In (1 ≤ i ≤ n) - the integers on the blackboard.
It is guaranteed that the sum of n over all test cases does not exceed 2. 105.

Output
For each test case, output the score if both players play optimally.
*/

#include <bits/stdc++.h>
using namespace std;

void tc () {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &i : v) cin >> i;

    vector<int> nth(k+1, 0);
    for (int i : v) {
        if (i >= k) {
            continue;
        }
        nth[i]++;
    }

    int ans = 0;
    for (int i = 1; i < k; i++) {
        if (i == k-i) {
            ans += nth[i]/2;
            continue;
        }
        
        int minN = min(nth[i], nth[k-i]);
        nth[i] -= minN;
        nth[k-i] -= minN;
        ans += minN;
    }
    cout << ans << '\n';
}

int main () {
    cin.tie(nullptr) -> sync_with_stdio(false);
    long long T; 
    cin >> T; 
    while (T--) { 
        tc(); 
    }
    return 0;
}