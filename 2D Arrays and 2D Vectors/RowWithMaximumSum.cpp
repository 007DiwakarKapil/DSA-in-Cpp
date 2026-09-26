#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a=0;
    int mat[3][4]={{5,8,1,2},{9,9,4,4},{7,0,3,5}};
    vector <int> arr;
        for(int i=0;i<size(mat);i++){
            for(int j=0;j<size(mat[0]);j++){
                a=a+mat[i][j];
            }
            arr.push_back(a);
            a=0;
        }
        int b=arr[0],c=0;
        for(int i=0;i<arr.size();i++){
            if(b<arr[i]){
                b=arr[i];
                c=i;
            }
        }
        cout<<b<<" "<<c;
}