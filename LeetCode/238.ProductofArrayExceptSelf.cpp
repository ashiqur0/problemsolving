#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> c;
    
    return nums;
}

int main() {

    vector<int> nums(5,1);
    // vector<int> nums = {1,2,3,4};
    vector<int> answer = productExceptSelf(nums);
    for(int i=0; i<answer.size(); i++) {
        cout << answer[i] << " ";
    }


    return 0;
}