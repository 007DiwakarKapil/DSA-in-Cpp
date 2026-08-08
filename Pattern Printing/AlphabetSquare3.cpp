#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row/column : ";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=97;j<=m+96;j++){
            cout<<" "<<(char)j<<" ";
        }
        cout<<endl;
    }
}