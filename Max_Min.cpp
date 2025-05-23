#include <bits/stdc++.h>
using namespace std;
int main() {

    int n, k, mini = INT_MAX;
    cin >> n >> k;

    vector<int> arr(n);    
    for(int i=0; i<n; i++) {
        cin >> arr.at(i);
    }
    
    sort(arr.begin(), arr.end());
    for(int i=0; i+k-1<arr.size(); i++) {
        mini = min(mini, arr[i+k-1]-arr[i]);
    }

    cout << mini << endl;

    return 0;
}