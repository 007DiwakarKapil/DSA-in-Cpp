#include <iostream>
using namespace std;
int main(){
    int a,b,x;
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter exponent : ";
    cin>>b;
    x=1;
    for(int i=1;i<=b;i++){
    x=a*x;
    }
    cout<<"The value of "<<a<<" raised to the power "<<b<<" is : "<<x;
}
