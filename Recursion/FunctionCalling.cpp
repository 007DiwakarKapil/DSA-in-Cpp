#include <iostream>
using namespace std;
void b(){
    cout<<"b"<<endl;
}
void a(){
    b();
    cout<<"a"<<endl;
}
void c(){
    b();
    cout<<"c"<<endl;
    a();
}
int main(){
    a();
    c();
    b();
}