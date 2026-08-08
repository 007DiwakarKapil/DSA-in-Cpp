#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row/column : ";
    cin>>m;
    int i;
    for(i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
}