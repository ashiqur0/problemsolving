#include <bits/stdc++.h>
using namespace std;

void twoX(vector<int>& tb) {
    for (int i = 0; i < tb.size(); i++) {
        tb[i] *= 2;
    }
}

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n, c, cost = 0, m = 1;
        cin >> n >> c;
        
        vector<int> tb(n);
        for (int& i : tb) {
            cin >> i;
        }

        sort(tb.rbegin(), tb.rend());
        for (int i : tb) {
            // if (i * m > c) {
            //     cost++;
            // } else {
            //     m *= 2;
            // }
            i * m > c ? cost++ : m *= 2;
        }


        
        // while (!tb.empty()) {
        //     vector<int> temp;
        //     for (int i = 0; i < tb.size(); i++) {
        //         if (tb[i] <= c) {
        //             temp.push_back(tb[i]);
        //         }
        //     }
            
        //     if (temp.empty()) {
        //         cost += tb.size();
        //         break;
        //     }
        //     sort(temp.rbegin(), temp.rend());
            
        //     tb.erase(remove(tb.begin(), tb.end(), temp[0]), tb.end());
        //     twoX(tb);
        // }
        
        cout << cost << endl;
    }

  return 0;
}