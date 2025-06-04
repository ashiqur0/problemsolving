// LeetCode: 190. Reverse Bits
// Learning: Bit manipulation, Divide and Conquer
// Description: Reverse bits of a given 32 bits unsigned integer.

#include <bits/stdc++.h>
using namespace std;
uint32_t reverseBits(uint32_t n) {
    // 0 ms Beats 100.00% O(1); Bitwise Operation
    uint32_t ans = 0;
    for(int i=0; i<32; i++) {   // Easy method
        ans <<= 1;              // left shift 1 bit
        ans |= (n & 1);         // last bit of n is adding to the ans
        n >>= 1;                // dropping the last digit
    }
    return ans;

    // // 4ms Beats 32.51% O(1); Divide and Conquer approach: swap each part 
    // n = (((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16));
    // n = (((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8));
    // n = (((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4));
    // n = (((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2));
    // n = (((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1));
    // return n;
    // f = 1111, 0 = 0000; hexadecimal mask (0xffff0000) = 11111111111111110000000000000000
}
int main() {
    uint32_t n = 0b0000010100101000001111010011100; // Binary Literal; output: 964176192
    cout << reverseBits(n) << endl;

  return 0;
}