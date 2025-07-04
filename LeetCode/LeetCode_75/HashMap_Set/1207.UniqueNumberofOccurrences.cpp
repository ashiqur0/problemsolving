/* 
LeetCode: 1207. Unique Number of Occurrences
Learning: Array, Hash Table
Description: Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
*/
#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector<int> v;
    for (int i = 0; i < arr.size(); i++) {
        int c = 0;
        while (i + 1 <arr.size() && arr[i] == arr[i + 1]) {
            c++;
            i++;
        }
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) return false;
    }
    return true;
}

int main() {

    vector<int> arr = {1,2,2,1,1,3};    // 1
    cout << uniqueOccurrences(arr) << endl;

  return 0;
}