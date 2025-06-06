// CodeForces: A. Jagged Swaps
// Learning: Sorting
// Description: 

#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        cout << (v[0] == 1? "YES\n" : "NO\n");
    }

  return 0;
}