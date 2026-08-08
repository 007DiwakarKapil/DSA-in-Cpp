#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Loop runs exactly n/2 times
    for (int i = 1; i <= n / 2; i++) {
        cout << i << endl;
        cout << (n - i + 1) << endl; // Fixed to correctly print the decreasing numbers
    }

    // If n is odd, print the exact middle number that was skipped
    if (n % 2 != 0) {
        cout << (n / 2) + 1 << endl;
    }

    return 0;
}
