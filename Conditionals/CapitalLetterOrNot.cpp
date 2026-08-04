#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter alphabet : ";
    cin>>ch;
    int in = (int)ch;
    if(in>=65 && in<=90) cout<<"Capital letter.";
    else cout<<"Not a capital letter.";
}