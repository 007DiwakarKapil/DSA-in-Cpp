#include <iostream>
using namespace std;
int main(){
    int arr[]={1,4,9,16,25};
    int a=INT_MIN;
    int b=INT_MIN;
    for(int i=0;i<size(arr);i++){
        if(arr[i]>a) a=arr[i];
    }
    for(int i=0;i<size(arr);i++){
        if(b<arr[i] && arr[i]!=a) b=arr[i];
    }
    cout<<b;
}