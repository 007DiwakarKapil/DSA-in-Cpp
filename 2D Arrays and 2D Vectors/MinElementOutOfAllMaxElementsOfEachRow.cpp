#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[3][4]={{5,8,1,2},{9,9,4,4},{7,-4,3,5}};
    vector <int> brr;
    for(int i=0;i<size(arr);i++){
        int a=arr[i][0];
        for(int j=0;j<size(arr[0]);j++){
            if(a<arr[i][j]){
                a=arr[i][j];
            }
            
        }
        brr.push_back(a);
    }
        int b=brr[0];
        for(int i=0;i<brr.size();i++){
            if(b>brr[i]){
                b=brr[i];
            }
        }
        cout<<b;
    }