#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> a={1, 2, 3, 4, 5};
    vector<int> b={1, 2, 3, 6, 7};
    int m=a.size();
    int n=b.size();
    vector<int> c;
    vector<int> d;
    for(int i=0;i<m+n;i++){
        if(i<m) c.push_back(a[i]);
        else c.push_back(b[i-m]);
        }
        sort(c.begin(),c.end());
        for(int i=0;i<m+n;i++){
        if(i==m+n-1 || c[i]<c[i+1]) d.push_back(c[i]);
        else{
        continue;
        }
        }
        for(int i=0;i<d.size();i++){
            cout<<d[i]<<" ";
        }
}