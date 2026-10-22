#include <iostream>
#include <vector>
using namespace std;
void powerSet(int idx, vector<int> ans, vector<int>& nums, vector<vector<int>>& finalArr){
    if(idx==nums.size()){
        finalArr.push_back(ans);
        return;
    }
    powerSet(idx+1,ans,nums,finalArr);
    ans.push_back(nums[idx]);
    powerSet(idx+1,ans,nums,finalArr);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ans;
    vector<vector<int>> finalArr;
    powerSet(0,ans,nums,finalArr);
    return finalArr;
}