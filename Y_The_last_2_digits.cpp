#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int res = a;
    res = (res * b) % 100;
    res = (res * c) % 100;
    res = (res * d) % 100;

    cout << res << endl;

  return 0;
}