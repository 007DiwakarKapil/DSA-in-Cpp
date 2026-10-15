#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="Diwakar";
    string sub=s.substr(1,4);
    cout<<sub<<endl;
    sub=s.substr(0,3);
    cout<<sub<<endl;
    sub=s.substr(2,3);
    cout<<sub<<endl;
    sub=s.substr(3);
    cout<<sub<<endl;
}