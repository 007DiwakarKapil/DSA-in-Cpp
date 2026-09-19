#include <iostream>
using namespace std;
int main(){
    int arr[]={-62,-35,-5,-1,-88,-34};
    int n= size(arr);
    for(int i=0;i<n;i++){
        cout<<&arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
}