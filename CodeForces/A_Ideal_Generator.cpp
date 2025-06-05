#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        int a;
        cin >> a;
        (a%2==0) ? cout << "NO\n" : cout << "YES\n";
    }

  return 0;
}