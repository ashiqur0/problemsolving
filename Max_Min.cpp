// HackerRank Problem: n সংখ্যাক array element থেকে k সংখ্যাক element নিয়ে নতুন array তৈরি করে সেই নতুন array থেকে max-min করতে হবে। এভাবে, মূল array তে সর্বনিম্ন যে মান পাওয়া যাবে তা কাঙ্খিত সমাধান।
//Learning: sliding window pattern

#include <bits/stdc++.h>
using namespace std;
int main() {

    int n, k, mini = INT_MAX;
    cin >> n >> k;

    vector<int> arr(n);    
    for(int i=0; i<n; i++) {
        cin >> arr.at(i);
    }
    
    sort(arr.begin(), arr.end());
    for(int i=0; i+k-1<arr.size(); i++) {
        mini = min(mini, arr[i+k-1]-arr[i]);
    } //sliding window approach applied

    cout << mini << endl;

    return 0;
}