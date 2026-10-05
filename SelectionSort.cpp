#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr={7,4,9,1,3,6,2,5};
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min=arr[i],min_idx=i;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}