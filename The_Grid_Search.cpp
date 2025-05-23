#include <bits/stdc++.h>
using namespace std;
bool isFind(int arr[][100]) {

    return true;
}
int main() {

    int t;
    cin >> t;
    while(t--) {
        bool isFind = false;
        int a, b;
        cin >> a>> b;
        int arr[a][b];
        for(int i=0; i<a; i++) {
            for(int j=0; j<b; j++) {
                cin >> arr[i][j];
            }
        }
        int c, d;
        cin>>c>>d;
        int arr2[c][d];
        for(int i=0; i<c; i++) {
            for(int j=0; j<d; j++) {
                cin >> arr2[i][j];
            }
        }
        for(int i=0; i<c; i++) {
            for(int j=0; j<d; j++) {
                if(isFind(arr2[i][j])) {

                }
            }
        }


    }

    return 0;
}