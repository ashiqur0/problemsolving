// LeetCode: 11. Container With Most Water
// Learning: Two pointer approach
// Description: Given n number of array elements, where each of the element are represented as the height of a pillar. Now, what is the maximum amount of area that is possible to fill with water?
#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
    int max_area = 0;
    for(int i=0; i<height.size(); i++) {
        int j = height.size()-1;
        while(i<j){
            int a = (j-i) * min(height[i], height[j]);
            max_area = max(max_area, a);
            j--;
        }
    }
    return max_area;
}
int main() {

    // vector<int> v = {1,8,6,2,5,4,8,3,7};//49
    vector<int> v = {1,1};//1
    cout << maxArea(v) << endl;

  return 0;
}