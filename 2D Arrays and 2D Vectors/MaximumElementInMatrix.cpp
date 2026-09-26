#include <iostream>
using namespace std;
int main(){
    int arr[3][4]={{5,8,1,2},{9,11,4,4},{7,0,3,5}};
    int a=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a<arr[i][j]) a=arr[i][j];
        }
    }
    cout<<a;
}