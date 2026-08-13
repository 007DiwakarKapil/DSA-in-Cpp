#include<iostream>
using namespace std;
int main(){
    int x = 7;
    int* ptr = &x;
    *ptr += 8; // x += 8
    cout<<x<<endl;
    x = 49;
    int *p = &x;
    cout<<x<<endl;
    *p=10;    //x=10
    cout<<x;
}
