/*
CodeForces: A. Helpful Maths
Learning: greedy implementation sortings strings *800
Description: 
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int> v;

    char a;
    while (cin >> a) {
        if (a >= '0' && a <= '9') {
            v.push_back(a - 48);
        }
    }

    sort(v.begin(), v.end());
    
    cout << v[0];
    for (int i = 1; i < v.size(); i++) {
        cout << "+" << v[i];
    }
    cout << endl;

  return 0;
}