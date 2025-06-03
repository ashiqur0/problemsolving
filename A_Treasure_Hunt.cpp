// CodeForces: A. Treasure Hunt
// Learning: Implementation, Math
// Description: B and K digging Treasure. Each day B dig x metter, K dig y metter. The Treasure is a meeter. Who will get the treasure first? If B dig more than the a first print YES, and if K dig more than a print NO

#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        int x, y, a;
        cin >> x >> y >> a;
        cout << (a%(x+y) < x ? "NO\n" : "YES\n") ;
    }

  return 0;
}