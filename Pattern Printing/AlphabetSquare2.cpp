#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row/column : ";
    cin>>m;
    for(int i=65;i<=m+64;i++){
        for(int j=1;j<=m;j++){
            cout<<" "<<(char)i<<" ";
        }
        cout<<endl;
    }
}