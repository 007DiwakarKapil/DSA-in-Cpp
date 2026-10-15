#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s1="abc";
    string s2="xyz";
    cout<<s1+s2<<endl;
    s1="111";
    s2="222";
    cout<<s1+s2<<endl;
    string s3=s1+s2;
    cout<<s3<<endl;
    string s ="abc";
    // cout<<s+4<<endl;  //error
    // string x=s+4;     //error
    string x=s+'4';
    cout<<x<<endl;
    x='4'+s;
    cout<<x<<endl;
    string s4="Diwakar";
    s4+=" Kapil";
    cout<<s4<<endl;
}