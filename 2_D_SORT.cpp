// Sphere Onlie Judge Problem: এই প্রব্লেম এ পেয়ার অব নম্বর সর্ট করতে হবে। এমন ভাবে সর্ট করতে হবে যেনো প্রতিটি পেয়ার এসেন্ডিং আকারে সর্ট হয় (x1, y1) > (x2, y2), কিন্তু যদি পেয়ারের প্রথম নম্বর x1 == x2 হয় তাহলে সেক্ষেত্রে পেয়ারের ২য় নম্বর ডিসেন্ডিং আকারে সাজাতে হবে। যেমন y1 > y2 হবে।
// Learning: Custom Sort Comparator, define

#include <bits/stdc++.h>
using namespace std;
// define
#define pii pair<int, int>

// Custom Sort Comparator
bool comparator(pii p1, pii p2) {
    if(p1.first < p2.first) return true; //exchange pare
    if(p1.first > p2.first) return false;//no change pare
    
    if(p1.second < p2.second) return false;//no change pare
    
    return true;//exchange pare (একটা পেয়ারের সাথে অন্য পেয়ারের পজিশন চেঞ্জ হবে)
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

        // used custome sort comparator
        sort(v.begin(), v.end(), comparator);
        for(auto p : v) {
            printf("%d %d\n", p.first, p.second);
        }
    }

    return 0;
}