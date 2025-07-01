#include <bits/stdc++.h>
using namespace std;
int main() {

    double num1, num2;
    cin >> num1 >> num2;
    cout << "floor " << num1 << " / " << num2 << " = " << floor(num1 / num2) << endl;
    cout << "ceil " << num1 << " / " << num2 << " = " << ceil(num1 / num2) << endl;
    cout << "round " << num1 << " / " << num2 << " = " << round(num1 / num2) << endl;

  return 0;
}