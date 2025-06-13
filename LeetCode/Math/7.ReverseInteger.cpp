/*
LeetCode: 7. Reverse Integer
Learning: Math
Description: Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
*/

#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int ans = 0;
    while(x) {
        int digit = x % 10;
        x /= 10;
        if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) return 0;
        if(ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) return 0;
        ans = ans * 10 + digit; // এখানে যেহেতু ১০ গুন করা হচ্ছে, তাই উপরের লাইনে ১০ দ্বারা ভাগ করে হিসাব করা হয়েছে।
    }
    return ans;
}

int main() {

    // int n = 123;    // 321
    // int n = -321;    // -123
    // int n = 21;    // 12
    int n = 1534236469;    // 0
    cout << reverse(n) << endl;
    // cout << INT_MAX << endl; //2147483647
    // cout << INT_MIN << endl;    //-2147483648

  return 0;
}