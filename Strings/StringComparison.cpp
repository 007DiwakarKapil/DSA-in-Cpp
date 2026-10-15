#include<iostream>
#include<string>
using namespace std;
int main(){
    string x="abcdef";
    string y="xyz";
    if(x==y) cout<<"Same";
    else if(x>y) cout<<x;
    else cout<<y;
}