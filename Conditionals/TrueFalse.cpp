#include <iostream>
using namespace std;
int main(){
    int a;
    if(a) cout<<"Hi"<<endl;  //True
    if(a=10) cout<<"Hehe"<<endl;   //True
    if(a=0) cout<<"Uh oh"<<endl;   //False
    a==8;
    if(a==4) cout<<"Dihh"<<endl;    //False
    if(a==8) cout<<"Puhh"<<endl;    //True
    a==0;
    if(a==0) cout<<"Sus"<<endl;   //True
    if(a==10) cout<<"Son of a B...";   //False
    int x = 1;
    int y = 2;
    if(x++ || y++) cout<<x<<" "<<y;
    else cout<<"Diwakar";
}