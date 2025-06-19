/*
CodeForces : C. Word on the Paper
Learning: implementation, strings
Description : On an 8 x 8 grid of dots, a word consisting of lowercase Latin letters is written vertically in one column, from top to bottom. What is it?

Input

The input consists of multiple test cases. The first line of the input contains a single integer t (1 ≤ t ≤ 1000) the number of test cases.

Each test case consists of 8 lines, each containing 8 characters. Each character in the grid is either. (representing a dot) or a lowercase Latin letter (a-z).

The word lies entirely in a single column and is continuous from the beginning to the ending (without gaps). See the sample input for better understanding.

Output

For each test case, output a single line containing the word made up of lowercase Latin letters (a-z) that is written vertically in one column from top to bottom.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while (t--) {
        char arr[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> arr[i][j];
            }
            for (int j = 0; j < 8; j++) {
                if (arr[i][j] >= 97 && arr[i][j] <= 122) {
                    cout << arr[i][j];
                }
            }
        }
        cout << endl;
    }

  return 0;
}