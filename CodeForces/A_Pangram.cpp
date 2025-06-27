/*
CodeForces: A. Pangram
Learning: implementation, strings, *800
Description: 
*/


#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    string s;
    cin >> n;
    cin >> s;

    if (n < 26) {
        cout << "NO" << endl;
    } else {
        vector<int> v(26);
        for (int i = 0; i < n; i ++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                v[s[i] - 'A']++;
            } else {
                v[s[i] - 'a']++;
            }
        }

        bool isPangram = true;

        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 0) {
                cout << "NO" << endl;
                isPangram = false;
                break;
            }
        }
        if (isPangram) {
            cout << "YES" << endl;
        }
    }

  return 0;
}