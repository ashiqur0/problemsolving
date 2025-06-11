// LeetCode: 191. Number of 1 Bits
// Learning: Binary Digit
// Description: Given a positive number. Count how many digit of its equivalent binary number is 1; 
#include <bits/stdc++.h>
using namespace std;
int hammingWeight(int n) {
    int count = 0;
    while(n) {
        if(n%2 == 1) {
            count++;
        }
        n/=2;
    }
    return count;
}

int main() {

    int n;
    cin >> n;
    cout << hammingWeight(n) << endl;

  return 0;
}