#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long result = 1;
    result = (result * a) % 100;
    result = (result * b) % 100;
    result = (result * c) % 100;
    result = (result * d) % 100;

    // Print last 2 digits with leading zero if needed
    if (result < 10)
        cout << "0" << result << endl;
    else
        cout << result << endl;

    return 0;
}
