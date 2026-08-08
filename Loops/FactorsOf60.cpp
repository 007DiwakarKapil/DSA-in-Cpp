#include <iostream>
using namespace std;
int main() {
    cout << "Factors of 60 are: ";
    for (int i = 1; i <= 60; i++) {
        if (60 % i == 0) {
            cout << i << " "; // Print the factor
        }
    }
    cout << endl;
    return 0;
}
// for(int i=1;i<=sqrt(60);i++){
// if(60%i==0){
// cout<<i<<" "<<60/i<<" ";}}