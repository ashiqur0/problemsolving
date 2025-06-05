// CodeForces: A. Gellyfish and Tricolor Pansy
// Learning: games, greedy	
// Description: not yet solved
#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int m = min(min(a, b), min(c, d));
        if(m==a && a!=b){
            cout<< "Flower\n";
        }else if(m==c && c!=d){
            cout<< "Flower\n";
        }else{
            cout<< "Gellyfish\n";
        }
    }

  return 0;
}