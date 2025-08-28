#include <iostream>
#include <string>
using namespace std;

int main() {
    string number;
    cin >> number;

    size_t dotPos = number.find('.');

    if (dotPos == string::npos) {
        // No decimal point, so it's an integer
        cout << "int " << number << endl;
    } else {
        string integerPart = number.substr(0, dotPos);
        string fractional = number.substr(dotPos + 1);

        // Check if all fractional digits are 0
        bool allZero = true;
        for (char c : fractional) {
            if (c != '0') {
                allZero = false;
                break;
            }
        }

        if (allZero) {
            cout << "int " << integerPart << endl;
        } else {
            cout << "float " << integerPart << " 0." << fractional << endl;
        }
    }

    return 0;
}
