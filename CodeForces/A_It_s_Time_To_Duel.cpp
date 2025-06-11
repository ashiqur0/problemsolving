// CodeForces: A. It's Time To Duel
// Learning: Implementation
// Description: 
#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, sum=0;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        if(sum == v.size() || sum == 0) {
            cout << "YES\n";
            continue;
        }
        bool isLied = false;
        for(int i=0; i<n-1; i++) {
            if(v[i] == 0 && v[i+1] == 0) {
                cout << "YES\n";
                isLied = true;
                break;
            }
        }
        if(!isLied) {
            cout << "NO\n";
        }
    }

  return 0;
}