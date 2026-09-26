#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows : ";
    cin>>m;
    cout<<"Enter columns : ";
    cin>>n;
    vector<vector<int>>v(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    v.push_back(vector<int>(4,2));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}