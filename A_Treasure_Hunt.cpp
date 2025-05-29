#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int x, y, a;
        cin >> x >> y >> a;
        (a % (x+y) < x)? cout << "NO\n" : cout << "YES\n" ;
    }

  return 0;
}