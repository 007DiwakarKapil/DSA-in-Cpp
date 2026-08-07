#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a = 1;
    int r = 2;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        a = a*r;
    }
    cout << endl;

    return 0;
}
