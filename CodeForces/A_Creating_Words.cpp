/*
CodeForces: A. Creating Words
Learning: implementation, strings, *800
Description: Matthew is given two strings a and b, both of length 3. He thinks it's particularly funny to create two new words by swapping the first character of a with the first character of b. He wants you to output a and b after the swap.
Note that the new words may not necessarily be different.

Input
The first line contains t (1 ≤ t ≤ 100) the number of test cases.
The first and only line of each test case contains two space-separated strings, a and b, both of length 3. The strings only contain lowercase Latin letters.

Output
For each test case, after the swap, output a and b, separated by a space.

Example: Input
6
bit set
cat dog
hot dog
uwu owo
cat cat
zzz zzz

Output:
sit bet
dat cog
dot hog
owu uwo
cat cat
zzz zzz

*/

#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        string temp = a;
        a[0] = b[0];
        b[0] = temp[0];
        cout << a << " " << b << endl; 
    }

  return 0;
}