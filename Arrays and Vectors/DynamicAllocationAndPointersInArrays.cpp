#include <iostream>
using namespace std;
int main(){
    int arr[7];  //Static Allocation
    int* brr= new int[7];  //Dynamic Allocation
    brr[0]=4;
    cout<<brr[0]<<endl;
    for(int i=0;i<7;i++){
        cout<<brr[i]<<" ";
    }
}