#include <iostream>
using namespace std;
int factorial(int x){
    int a=1;
    for(int i=1;i<=x;i++){
        a=a*i;
    }
    return a;
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"The value of nCr is : "<<factorial(n)/(factorial(r)*factorial(n-r))<<endl;
    cout<<"And the value of nPr is : "<<factorial(n)/factorial(n-r);
}