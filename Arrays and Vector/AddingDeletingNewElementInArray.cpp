#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);   //Adds a new element (5) in vector
    v.push_back(18);
    v.push_back(9);
    v.push_back(11);
    v.push_back(14);
    v.pop_back();   //Deletes last element of the vector
    v.pop_back();
    for(int i=1;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}