#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> a, b, c;
        for(int i=1; i<nums.size()+1; i++) {
            a.push_back(nums[i]*nums[i+1]);
        }
        for(int i=nums.size()-1; i>0; i--) {
            b.push_back(nums[i]*nums[i-1]);
        }
        for(int i=0; i<nums.size(); i++) {
            c.push_back(a[i]*b[i]);
        }
    return c;
}

int main() {

    vector<int> nums = {1,2,3,4};
    vector<int> answer = productExceptSelf(nums);
    for(int i=0; i<answer.size(); i++) {
        cout << answer[i] << " ";
    }


    return 0;
}