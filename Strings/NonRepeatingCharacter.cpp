#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<int> v(26, 0);
    string s="bacdghfsd";
        int n = s.size();

        for(int i = 0; i < n; i++){ 
            v[s[i] - 'a']++; 
        }
        for(int i = 0; i < n; i++){ 
            if(v[s[i] - 'a'] == 1) {
                cout<<s[i];
                break;
            }
            else cout<<"-1";
        } 
}