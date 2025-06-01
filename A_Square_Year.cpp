#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--){
        string year;
        cin >> year;
        // int a = stoi(year.substr(0,2));
        // int b = stoi(year.substr(2,2));
        int y = stoi(year);
        int b, a = sqrt(y);
        if(y%a == 0){
            --a;
            b = a+2;
        }
        if (a*a+2*a*b+b*b == y) {
            cout << a << " " << b <<endl;
        } else {
            cout << -1 << endl;
        }
    }

  return 0;
}