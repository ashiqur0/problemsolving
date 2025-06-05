// CodeForces: A. Square Year
// Learning: binary search, brute force, math
// Description: if given year is possible to represent square of two number sum then print that two number else print -1;

#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--){
        int year;
        cin >> year;

        int a = sqrt(year);
        // if(a*a == year) {
        //     cout << 0 << " " << a << endl;
        // } else {
        //     cout << -1 << endl;
        // }
        cout << (a*a == year? "0 "+ to_string(a) : "-1") << endl;
    }

  return 0;
}