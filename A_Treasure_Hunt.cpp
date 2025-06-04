// CodeForces: A. Treasure Hunt
// Learning: Implementation, Math
// Description: B and K digging Treasure. Each day B dig x metter, K dig y metter. The Treasure is located in a meeter deep. Who will get the treasure first? If B dig more than the a metter then B will get the treasure first. In that case print "YES", and if K dig more than a meeter first then K will get the treasuere first. In that case print "NO".

#include <iostream>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        int x, y, a;
        cin >> x >> y >> a;
        cout << (a%(x+y) < x ? "NO\n" : "YES\n") << endl;
    }

  return 0;
}