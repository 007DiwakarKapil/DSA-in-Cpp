#include <iostream>
#include <string>
using namespace std;
int main(){
    int sum=0;
    string s="926";
    string str;
    for(int i=0;i<s.size();i++){
        for(int j=1;j<=s.size()-i;j++){
            str=s.substr(i,j);
            sum=sum+stoi(str);
        }
    }
    cout<<sum;
}