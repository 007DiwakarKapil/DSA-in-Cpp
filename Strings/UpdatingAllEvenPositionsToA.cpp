#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="Diwakar_Kapil_is_the_boss";
    for(int i=0;i<size(s);i++){
        if(s[i]%2==0) s[i]='a';
    }
    cout<<s;
}