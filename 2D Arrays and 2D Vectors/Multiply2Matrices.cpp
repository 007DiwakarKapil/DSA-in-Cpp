#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> mat1 = {{1,1,1},{1,1,1},{1,1,1}};
    vector<vector<int>> mat2 = {{1,1,1},{1,1,1},{1,1,1}}; 
    vector<vector<int>>mul;
        for(int i=0;i<size(mat1);i++){
            vector<int> row;
            for(int j=0;j<size(mat2[0]);j++){
                int a=0;
                for(int k=0;k<size(mat1[0]);k++){
                    a=a+mat1[i][k]*mat2[k][j];
                }
                row.push_back(a);
            }
            mul.push_back(row);
        }
        for(int i=0;i<size(mul);i++){
            for(int j=0;j<size(mul[0]);j++){
                cout<<mul[i][j]<<" ";
            }
            cout<<endl;
        }
}