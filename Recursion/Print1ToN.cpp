#include <iostream>
using namespace std;
void print(int n,int a){
    cout<<n-a<<endl;
    if(a==n-1) return;
    print(n,a+1);
}
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    print(n,0);
}