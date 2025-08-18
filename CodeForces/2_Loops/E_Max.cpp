#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;

    int arr[n], maxInArr = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (maxInArr < arr[i]) {
            maxInArr = arr[i];
        }
    }

    cout << maxInArr << endl;

  return 0;
}