#include <bits/stdc++.h>
using namespace std;
int hammingWeight(int n) {
    int count = 0;
    while(n != 0) {
        if(n&1==1) {
            count++;
            n >> 1;
        }
    }
    return count;
}

int main() {

    int n;
    cin >> n;
    cout << hammingWeight(n) << endl;

  return 0;
}