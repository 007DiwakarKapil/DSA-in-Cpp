#include <iostream>
using namespace std;
int main(){
    int n,a;
    int x=0;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=n;i>0;i/=10){
        a= n%10;
        x= x*10+a;
        n = n/10;
    }
    cout<<"The reverse is : "<<x;
}