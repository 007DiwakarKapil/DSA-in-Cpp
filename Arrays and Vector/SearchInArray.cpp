#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a=0;
    int arr[]={1,3,5,7,9,11};
    for(int i=0;i<size(arr);i++){
        if(n==arr[i]){
            a=1;
            break;
        }
    }
    if(a==0) cout<<"The number does not exist.";
    else cout<<"The number exist.";
}