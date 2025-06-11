// LeetCode: 338. Counting Bits
// Learning: Bit Manipulation
// Description: Given a number n. return an array of answer with the length n+1, the number of each i's 1.(0 <= i <= n)

#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n) {
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++) {
        ans[i] = ans[i >> 1] + (i & 1);
    }
    return ans;
}
// if n = 5
// ans[i] = ans[i >> 1] + (i & 1);
// ans[0] = 0;
// ans[1] = ans[0] + 1 = 1;
// ans[2] = ans[1] + 0 = 1;
// ans[3] = ans[1] + 1 = 2;
// ans[4] = ans[2] + 0 = 1;
// ans[5] = ans[2] + 1 = 2;
// Then ans = [0, 1, 1, 2, 1, 2]

// Here,  
// 1 >> 1 = 0,    1 & 1 = 1
// 2 >> 1 = 1,    1 & 2 = 0
// 3 >> 1 = 1,    1 & 3 = 1
// 4 >> 1 = 2,    1 & 4 = 0
// 5 >> 1 = 2,    1 & 5 = 1

int main() {

    // int n=1;
    // int n=2;
    int n=5;
    // cin >> n;
    vector<int> v = countBits(n);
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

  return 0;
}