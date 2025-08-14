#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, c, cost = 0, m = 1;
        cin >> n >> c;

        vector<int> tb(n);
        for (int& i : tb) {
            cin >> i;
        }
        
        sort(tb.rbegin(), tb.rend());
        for (int i : tb) {
            i * m > c ? cost++ : m *= 2;
        }

        cout << cost << endl;
    }

  return 0;
}