#include <iostream>
using namespace std;
void a(){
    cout<<"Hello a"<<endl;
}
void b(){
    a();
    cout<<"Hello b"<<endl;
    a();
}
void c(){
    cout<<"Hello c"<<endl;
    b();
}
int main(){
    c();
}