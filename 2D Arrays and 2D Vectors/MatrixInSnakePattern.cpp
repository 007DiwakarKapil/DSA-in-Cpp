#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> c;
    int matrix[3][4]={{5,8,1,2},{9,11,4,4},{7,0,3,5}};
        for(int i=0;i<size(matrix);i++){
            for(int j=0;j<size(matrix[0]);j++){
                if(i%2==0) c.push_back(matrix[i][j]);
                else c.push_back(matrix[i][size(matrix[0])-1-j]);
            }
        }
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
}