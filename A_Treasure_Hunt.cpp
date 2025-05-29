#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int x, y, a, dig=0;
        cin >> x >> y >> a;

        bool littleB = true;

        while(dig<=a) {
            if (littleB){
                dig+=x;
                if(dig>a) {
                    cout << "NO" << endl;
                }
                littleB = false;
            } else {
                dig+=y;
                if(dig>a) {
                    cout << "YES" << endl;
                }
                littleB = true;
            }
        }
    }

  return 0;
}