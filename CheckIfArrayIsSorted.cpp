#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,2,5,7};
     if (size(arr)<1) cout<<"true"; 
        for (int i=0;i<size(arr)-1;i++) { 
            if (arr[i] > arr[i + 1]) {
                cout<<"false";
            }
        } 
}