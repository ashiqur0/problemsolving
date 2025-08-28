#include <bits/stdc++.h>
using namespace std;
long long int F(int n) {
    if (n <= 1) {
        return n;
    }

    return n * F(n - 1);
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << F(n) << endl;
    }

  return 0;
}