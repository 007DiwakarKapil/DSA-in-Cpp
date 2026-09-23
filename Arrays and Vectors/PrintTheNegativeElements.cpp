#include <iostream>
using namespace std;
int main(){
    int arr[]={1,-2,3,-4,5,-6};
    for(int i=0;i<size(arr);i++){
        if(arr[i]<0) cout<<arr[i]<<" ";
    }
}