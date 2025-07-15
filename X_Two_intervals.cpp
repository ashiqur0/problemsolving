#include <bits/stdc++.h>
using namespace std;
int main() {

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == c && b == d) {
        cout << a << " " << b << endl;
    } else if(c < a && d < b) {
        cout << c << " " << d << endl;
    } else if(c > a && d > b) {
        cout << c << " " << b << endl;
    } else if(a < c && c < b) {
        cout << c << " " << b << endl;
    } else if(c < a && b < d) {
        cout << a << " " << d << endl;
    } else {
        cout << -1 << endl;
    }

  return 0;
}