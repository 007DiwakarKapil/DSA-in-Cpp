#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={0,1,0,1,0,0,1,1,1,0};
    int n= size(arr);
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) zero++;
        else one++;
    }
   for(int i=0;i<zero;i++){
    arr[i]=0;
   }
   for(int i=zero;i<n;i++){
    arr[i]=1;
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}