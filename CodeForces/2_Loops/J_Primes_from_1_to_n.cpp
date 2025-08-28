#include <bits/stdc++.h>
using namespace std;

bool isPime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void printPime(int n) {
    if (n < 2) {
        return;
    }

    for (int i = 2; i <= n; i++) {
        if (isPime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {

    int n;
    cin >> n;

    printPime(n);

  return 0;
}