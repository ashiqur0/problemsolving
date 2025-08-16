#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;

    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < n; i++) {
        int n;
        cin >> n;

        if (n < 0) {
            negative++;
            n % 2 == 0 ? even++ : odd++;
        } else if(n > 0) {
            positive++;
            n % 2 == 0 ? even++ : odd++;
        } else {
            n % 2 == 0 ? even++ : odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

  return 0;
}