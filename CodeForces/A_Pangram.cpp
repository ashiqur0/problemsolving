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
        vector<char> c(26);
        for (int i = 0; i < n; i ++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                c[s[i] - 'a' + 32]++;
            } else {
                c[s[i] - 'a']++;
            }
        }

        bool isPangram = true;

        for (int i = 0; i < c.size(); i++) {
            if (c[i] == 0) {
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