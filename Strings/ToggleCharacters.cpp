#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="DiWaKaR KaPiL";
     int n=s.length();
        for(int i=0;i<n;i++){
            int ascii=s[i];
            if(ascii>64 && ascii<91) s[i]=s[i]+32;
            else if(ascii>96 && ascii<123) s[i]=s[i]-32;
        }
        cout<<s;
}