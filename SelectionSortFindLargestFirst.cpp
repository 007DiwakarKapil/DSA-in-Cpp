#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr={7,4,9,1,3,6,2,5};
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int max=arr[n-1-i],max_idx=n-1-i;
        for(int j=0;j<n-i;j++){
            if(arr[j]>max){
                max=arr[j];
                max_idx=j;
            }
        }
        swap(arr[n-1-i],arr[max_idx]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}