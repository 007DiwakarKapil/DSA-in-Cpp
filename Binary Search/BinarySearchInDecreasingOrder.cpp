#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums={5,4,3,2,1,0,-1};
    int target=4;
 int lo=0,hi=nums.size()-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(nums[mid]>target) lo=mid+1;
            else if(nums[mid]<target) hi=mid-1;
            else{
                cout<<mid;
                break;
            }
        }
    }