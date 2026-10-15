#include <iostream>
#include <string>
using namespace std;
string reverseFirstHalf(string s) {
    int mid = s.length() / 2;
    int left = 0;
    int right = mid - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    return s;
}
int main() {
    string test1 = "abcdef";
    string test2 = "abcdefg";
    cout << "Original: " << test1 << " -> Reversed: " << reverseFirstHalf(test1) << endl;
    cout << "Original: " << test2 << " -> Reversed: " << reverseFirstHalf(test2) << endl;
}
