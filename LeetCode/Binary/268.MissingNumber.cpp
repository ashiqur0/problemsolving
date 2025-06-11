// LeetCode: 268. Missing Number
// Learning: Bit Manipulation;
// Description: Given an array of elements range [0-n]. Find the missing number

#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int total = n*(n+1)/2;
    int sum = 0;
    for(const int &i : nums) {
        sum += i;
    }
    return total - sum;
}
int main() {
    // vector<int> v = {3,0,1};    //2
    // vector<int> v = {0,1};   //2
    vector<int> v = {9,6,4,2,3,5,7,0,1}; //8
    cout << missingNumber(v) << endl;

  return 0;
}