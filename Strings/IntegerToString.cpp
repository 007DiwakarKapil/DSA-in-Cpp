#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
   // while(n!=0){
    //    int last_digit=(n%10);
    //    char ch=last_digit+48;
    //    n=n/10;
    //    s.push_back(ch);
    //}
  // reverse(s.begin(),s.end());
   //cout<<s;
   string s=to_string(n);
   cout<<s<<endl;
}