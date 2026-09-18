#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int a=1;
    for(int i=0;i<size(arr);i++){
        a=a*arr[i];
    }
    cout<<a;
}