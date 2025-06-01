#include <bits/stdc++.h>
using namespace std;

// Modified Binary Search
int binarySearch(vector<int>& v, int target) {
    int start = 0, end = v.size() - 1;
    
    while(start <= end){
        int mid = (start + end) / 2;

        if(v[mid] == target) {
            return mid;
        }

        if(v[start] <= v[mid]) { //assume left part is sorted
            if(target >= v[start] && target < v[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {                // right part is sorted
            if(target <= v[end] && target > v[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main() {

    // vector<int> v = {4,5,6,7,0,1,2};
    // int target = 0;
    // vector<int> v = {4,5,6,7,0,1,2};
    // int target = 3;
    // vector<int> v = {1};
    // int target = 0;
    vector<int> v = {4,5,6,7,8,1,2,3};
    int target = 8;

    cout << binarySearch(v, target) << endl;

    return 0;
}