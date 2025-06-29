/*
LeetCode : Weekly Contest 456 Q1. Partition String
Learning: 
Description: Given a string s, partition it into unique segments according to the following procedure:

Start building a segment beginning at index 0.
Continue extending the current segment character by character until the current segment has not been seen before.
Once the segment is unique, add it to your list of segments, mark it as seen, and begin a new segment from the next index.
Repeat until you reach the end of s.
Return an array of strings segments, where segments[i] is the ith segment created.

Example 1:
Input: s = "abbccccd"
Output: ["a","b","bc","c","cc","d"]
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> partitionString(string s) {
    set<string> str;
    vector<string> str2;
    string st = "";
    for (char c : s) {
        st += c;            
        int pervious_siae = str.size();
        str.insert(st);
        int current_size = str.size();
        if (current_size > pervious_siae) {
            str2.push_back(st);
            st = "";
        }
    }
    return str2;
}

int main() {

    string s = "abbccccd";
    vector<string> str = partitionString(s);
    for (string s : str) cout << s << " ";
    cout << endl;

  return 0;
}