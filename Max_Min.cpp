#include <bits/stdc++.h>
using namespace std;
int main() {

    int n, k, result = 0;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> arr2(k);

    for(int i=0; i<n; i++) {
        cin >> arr.at(i);
    }
    
    // sort(arr.begin(), arr.end());

    for(int i=0; i<n-k; i++) {
        for(int j=0; j<k; j++) {
            arr2.at(j) = arr.at(j);
        }
        auto mx = max_element(arr2.begin(), arr2.end());
        auto mn = min_element(arr2.begin(), arr2.end());
        result = max(result, mx - mn);
    }

    cout << result << endl;

    return 0;
}