// CodeForces: A. Two Frogs
// Learning: constructive algorithms, games, greedy, math
// Description: 

#include <bits/stdc++.h>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        // cout << (((a ^ b) & 1)? "NO\n" : "YES\n");
        cout << (abs(a-b)%2 == 0? "YES\n" : "NO\n");
    }

  return 0;
}