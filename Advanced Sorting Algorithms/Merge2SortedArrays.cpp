#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void merge(vector<int> & a,vector<int>& b,vector<int>& c){
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            c.push_back(a[i]);
            i++;
        }
        else{
            c.push_back(b[j]);
            j++;
        }
    }
    while (i < a.size()) { 
        c.push_back(a[i]);
        i++;
    }
    
    while (j < b.size()) { 
        c.push_back(b[j]);
        j++;
    }
}
int main(){
    vector<int> a={2,3,6,8};
    vector<int> b={1,4,5,7,9,10};
    vector<int> c;
    merge(a,b,c);
    print(c);
}