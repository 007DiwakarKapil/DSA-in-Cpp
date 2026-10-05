#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> a={3, 4, 2, 2, 4};
    vector<int> b={3, 2, 2, 7};
    vector<int> c;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int m=a.size();
        int n=b.size();
        int i=0,j=0;
        while(i<m && j<n){
            if(a[i]==b[j]){
                c.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else j++;
        }
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
}