// CodeForces: A. Even Odds 
// Learning: Math
// Description: Given n and k. 1 to till n the odd number will be stored sequentially then 1 to till n even number will be stored. Need to print the k positioned number.

#include <bits/stdc++.h>
using namespace std;
int main() {

    long long int n, k;
    cin >> n >> k;

    long long int p = ceil(n/2.0);
    cout << (p >= k? k*2-1 : (k-p)*2) << endl;

  return 0;
}