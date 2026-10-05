#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k;
    cout<<"Enter k : ";
    cin>>k;
    vector<int> arr={93,17,4,64,46,18,3,61};
    int n=arr.size();
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 and arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<arr[k-1];
}