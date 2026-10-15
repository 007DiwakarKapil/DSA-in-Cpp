#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="WizDiwakar";
    int n=s.length();
    string str=s.substr(n/2);
    cout<<str;
}