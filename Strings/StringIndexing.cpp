#include <iostream>
#include <string>
using namespace std;
int main(){
    string s ="Diwakar Kapil";
    cout<<s[1]<<endl;
    s[0]='d';
    cout<<s[0]<<endl;
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
}