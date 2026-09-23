#include <iostream>
using namespace std;
int main(){
    int arr[]={1,4,9,16,25};
    int a=arr[0];
    for(int i=0;i<size(arr);i++){
        if(arr[i]>a) a=arr[i];
    }
    cout<<a;
}