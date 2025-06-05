// CodeForces Problem: Distink pair count করতে হবে।
// Learning: pair, set
/*
Input 1:
5
birch yellow
maple red
birch yellow
maple yellow
maple green
Optput 1: 4

Input 2:
3
oak yellow
oak yellow
oak yellow
Optput 2: 1
*/
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