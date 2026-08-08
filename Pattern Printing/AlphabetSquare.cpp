#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row/column : ";
    cin>>m;
    for(int i=1;i<=m;i++){
        for(int j=65;j<=m+64;j++){
            cout<<" "<<(char)j<<" ";
        }
        cout<<endl;
    }
}