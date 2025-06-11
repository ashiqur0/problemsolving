/*
LeetCode: 3442. Maximum Difference Between Even and Odd Frequency I
Learning: Hash Table, String, Counting
Description: You are given a string s consisting of lowercase English letters.

Your task is to find the maximum difference diff = freq(a1) - freq(a2) between the frequency of characters a1 and a2 in the string such that:

a1 has an odd frequency in the string.
a2 has an even frequency in the string.
Return this maximum difference
*/

#include <bits/stdc++.h>
using namespace std;

int maxDifference(string s) {
    vector<int> mp(26);
    int maxf = 0, minf = s.size();
    for (char ch : s) mp[ch - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (mp[i] % 2 != 0) maxf = max(maxf, mp[i]);
        if (mp[i] % 2 == 0  && mp[i] > 0) minf = min(minf, mp[i]);
    }
    return maxf - minf;
}

int main() {

    // string s = "aaaaabbc";  // 3
    string s = "abcabcab";  // 1
    cout << maxDifference(s) << endl;

  return 0;
}