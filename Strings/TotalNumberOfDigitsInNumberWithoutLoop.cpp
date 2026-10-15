#include<iostream>
#include<string>
using namespace std;
int digits(int x){
    if(x>=0){
    string s=to_string(x);
    int y=s.size();
    return y;
    }
    else{
        string s=to_string(x);
    int y=s.size();
    return y-1;
    }
}
int main(){
    cout<<digits(12345678)<<endl;
    cout<<digits(-12345678);
}