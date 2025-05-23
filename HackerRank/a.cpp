#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    // string s="if man was meant to stay on the ground god would have given us roots";
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int row = floor(sqrt(s.size()));
    int col = ceil(sqrt(s.size()));

    for(int i=0; i<col; i++) {
        for(int j=i; j<s.size(); j+=col) {
            if(j<s.size()) {
                cout << s[j] ;
            }
        }
        cout << " " ;
    }

    return 0;
}