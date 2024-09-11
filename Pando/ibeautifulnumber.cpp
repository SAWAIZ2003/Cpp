#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to check if a number contains the digit X
bool containsDigit(int num, int digit) {
    // Convert the digit to a string
    string digitStr = to_string(digit);

    // Check if the number contains the digit
    string numStr = to_string(num);
    for (char ch : numStr) {
        if (ch == digitStr[0]) {
            return true;
        }
    }
    return false;
}

// Function to determine if a number can be broken into beautiful numbers
bool canBeBrokenIntoBeautifulNumbers(int num, int digit) {
    // Check if the number itself is beautiful
    if (containsDigit(num, digit)) {
        return true;
    }

    // Check for all possible pairs of beautiful numbers that sum up to the given number
    for (int i = 1; i < num; ++i) {
        if (containsDigit(i, digit) && containsDigit(num - i, digit)) {
            return true;
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;  // Read number of test cases

    while (T--) {
        int N, X;
        cin >> N >> X;  // Read N and X

        vector<int> values(N);
        for (int i = 0; i < N; ++i) {
            cin >> values[i];  // Read values
        }

        for (int value : values) {
            if (canBeBrokenIntoBeautifulNumbers(value, X)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
