#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%5==0 && n%3!=0) cout<<"Bad Ahh";
    else if(n%3==0 && n%5!=0) cout<<"Bitchless BAKA";
    else if(n%3==0 && n%5==0) cout<<"Yo Bitch!";
    else cout<<"Cooked";
}