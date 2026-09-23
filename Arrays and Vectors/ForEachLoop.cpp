#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={4,3,8,2,9};
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}