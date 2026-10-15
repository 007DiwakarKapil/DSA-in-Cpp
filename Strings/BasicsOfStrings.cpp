#include <iostream>
#include <string>
using namespace std;
int main(){
    char x[]={'D','i','w','a','k','a','r'};
    string y="Diwakar";
    cout<<y;
    cout<<endl;
    for(int i=0;i<=size(x);i++){
        cout<<x[i];
    }
    cout<<endl;
    cout<<"Diwakar";  //This is also a string.
    cout<<endl;
    string s;
    cin>>s;   //Diwakar Kapil
    cout<<s;  //Diwakar
    cout<<endl;
}