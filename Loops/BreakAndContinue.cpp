//Break Stops the loop and continues with the next statement after the loop.
//Continue Stops the current iteration of the loop and continues with the next iteration of the loop.
#include <iostream>
using namespace std;
int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Breaks the loop when i is 5
        }
        cout << "i: " << i << endl;
    }

    cout << "Loop exited using break." << endl;

    for (int j = 0; j < 10; j++) {
        if (j == 5) {
            continue; // Skips the rest of the loop when j is 5
        }
        cout << "j: " << j << endl;
    }

    cout << "Loop completed using continue." << endl;

    return 0;
}
