#include <bits/stdc++.h>
using namespace std;
int getSum(int a, int b) {
    while(b != 0) {
        int temp = (a&b) << 1;
        a = a^b;
        b = temp;
    }
    return a;
}

int main() {

    int a=1, b=2;
    cin >> a >> b;
    cout << getSum(a, b) << endl;

  return 0;
}