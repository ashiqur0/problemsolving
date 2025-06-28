/*
LeetCode: 73. Set Matrix Zeroes
Learning: Array, Hash Table, Matrix
Description: Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Example: 
intput 
1 2 3
1 0 3
1 2 3

output 
1 0 3
0 0 0
1 0 3
*/

#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    vector<vector<int>> matrix2 = matrix;
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                for(int k = 0; k < n; k++) {
                    matrix2[i][k] = 0;
                }
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                for(int k = 0; k < m; k++) {
                    matrix2[k][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = matrix2[i][j];
        }
    }
}

int main() {

    vector<vector<int>> matrix = {{1,1,1}, {1,0,1}, {1,1,1}};
    setZeroes(matrix);
    for (int i=0; i<matrix.size(); i++) {
        for (int j=0; j<matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

  return 0;
}