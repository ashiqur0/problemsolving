#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    cin >> s;

    string s1 = "", s2 = "0.";
    bool isInt = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '.' && isInt) {
            isInt = false;
        } else if (!isInt) {
            s2 += s[i];
        } else {
            s1 += s1[i];
        }
    }

    if (isInt ) {
        cout << "int " << s1 << endl;
    } else {
        cout << "float " << s1 << " " << s2 << endl;
    }

  return 0;
}