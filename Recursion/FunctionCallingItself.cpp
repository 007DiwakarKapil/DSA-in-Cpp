#include <iostream>
using namespace std;
// void d(){
//     cout<<"d"<<endl;
//     d();
// }   infinite loop
void d(int n){
    if(n==0) return;
    cout<<"d"<<endl;
    d(n-1);
}
int main(){
    d(3);
}