#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        string st;
        cin >> st;
        int c = 0;

        for(int i = 0; i < st.size(); i++) {
            if (st[i] == '1') c++;
        }
        cout << c << endl;
    }

  return 0;
}