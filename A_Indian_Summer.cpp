#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;
    set<pair<string, string>> s;
    while(t--) {
        string a, b;
        cin >> a>> b;
        s.insert({a,b});
    }
    cout << s.size() << endl;

    return 0;
}