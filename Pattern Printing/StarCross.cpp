#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter a number : ";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if(i==j or i==m+1-j) cout<<" * ";
            else cout<<"   ";
        }
        cout<<endl;
    }
}