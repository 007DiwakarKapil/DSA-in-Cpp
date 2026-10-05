#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> a={89, 24, 75, 11, 23};
    vector<int> b={89, 2, 4};
    int m=a.size();
              int n=b.size();
              vector<int> c;
              for(int i=0;i<m;i++){
                  for(int j=0;j<n;j++){
                      if(a[i]==b[j]) c.push_back(a[i]);
                  }
              }
              for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
              }
}