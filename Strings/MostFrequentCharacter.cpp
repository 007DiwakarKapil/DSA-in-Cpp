#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s="diwakarkapil";
    vector<int> v(26,0);
        int n=s.size();
        for(int i=0;i<n;i++){
            int x=s[i]-'a';
            v[x]=v[x]+1;
        }
        int max=v[0];
        int max_idx=0;
        for(int i=0;i<26;i++){
            if(v[i]>max){
                max=v[i];
            max_idx=i;
            }
        }
        char y=max_idx+'a';
        cout<<y;
}