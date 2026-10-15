#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="Diwakar";
    // s.push_back(4);   error
    s.push_back(' ');
    s.push_back('K');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
}