#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="Diwakar Kapil is the boss";
    int count=0;
    for(int j=0;j<size(s);j++){
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U') count++;
    }
    cout<<count;
}