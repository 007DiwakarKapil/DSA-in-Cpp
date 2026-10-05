#include <iostream>
#include <vector>
using namespace std;
void bubbleSortSmallestFirst(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}
int main(){
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
    bubbleSortSmallestFirst(numbers);
    cout << "Sorted array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}