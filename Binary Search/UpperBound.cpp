#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr={1,2,2,3,9,11,13};
    int target=6;
    int lo=0,hi=arr.size()-1;
    int a=arr.size();
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]>target){
            a=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
    }
    }
    cout<<a;
}