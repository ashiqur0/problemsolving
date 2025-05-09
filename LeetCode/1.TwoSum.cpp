#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> &nums, int target) {
    unordered_map<int, int> hashTable;
    for(int i=0; i<nums.size(); i++) {
        int key = target - nums[i];
        if(hashTable.count(key)) {
            return {hashTable[key], i};
        }
        hashTable[nums[i]] = i;
    }
    return {};
}

int main() {

    vector<int> num = {2, 7, 11, 15};
    vector<int> res = twosum(num, 9);
    cout << res[0] << " " << res[1] << endl;

    return 0;
}