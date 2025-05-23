#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

bool comparator(pii p1, pii p2) {
    if(p1.first < p2.first) return true;
    if(p1.first > p2.first) return false;
    
    if(p1.second < p2.second) return false;
    
    return true;
}

int main() {

    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);

        vector<pii> v;
        for(int i=0; i<n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            v.emplace_back(a, b);
        }

        sort(v.begin(), v.end(), comparator);
        for(auto p : v) {
            printf("%d %d\n", p.first, p.second);
        }
    }

    return 0;
}