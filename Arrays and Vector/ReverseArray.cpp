#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int>arr={6,3,8,2,4,7};
    int n=size(arr);
        for(int i=0;i<n/2;i++){
            int temp= arr[i];
            arr[i]= arr[n-1-i];
            arr[n-1-i]= temp;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
}