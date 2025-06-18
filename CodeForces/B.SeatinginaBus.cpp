/*
CodeForces : B. Seating in a Bus
Learning : Two Pointers
Description : In Berland, a bus consists of a row of n seats numbered from 1 to n. Passengers are advised to always board the bus following these rules:

If there are no occupied seats in the bus, a passenger can sit in any free seat;

Otherwise, a passenger should sit in any free seat that has at least one occupied neighboring seat. In other words, a passenger can sit in a seat with index i (1 < i < n) only if at least one of the seats with indices i 1 or i + 1 is occupied.

Today, n passengers boarded the bus. The array a chronologically records the seat numbers they occupied. That is, a₁ contains the seat number where the first passenger sat, a2 the seat number where the second passenger sat, and so on.

You know the contents of the array a. Determine whether all passengers followed the recommendations.

For example, if n = 5, and a = [5, 4, 2, 1, 3], then the recommendations were not followed, as the 3-rd passenger sat in seat number 2, while the neighboring seats with numbers 1 and 3 were free.

Input

The first line of input contains a single integer t (1 < t < 104) - the number of test cases.

The following describes the input test cases.

The first line of each test case contains exactly one integer n (1<n<2-105) the number of seats in the bus and the number of passengers who boarded the bus.

The second line of each test case contains n distinct integers a¡ (1 ≤ a ≤n) order. the seats that the passengers occupied in chronological

It is guaranteed that the sum of n values across all test cases does not exceed 2 105, and that no passenger sits in an already occupied seat.

Output

For each test case, output on a separate line:

"YES", if all passengers followed the recommendations;

"NO" otherwise.

You may output the answer in any case (for example, the strings "yes", "yes", "Yes", and "YES" will be recognized as a positive answer).
*/

#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; 
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int start = arr[0], end = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] + 1 == start) start = arr[i];
        else if(arr[i] - 1 == end) end = arr[i];
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}