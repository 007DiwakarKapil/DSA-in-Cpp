#include <iostream>
using namespace std;
int product(int a,int b){
    return a*b;                              //Function also have it's own value.
}
int main(){
    product(4,11);
    cout<<product(4,11);
}
//int main() entry point of C++ code
