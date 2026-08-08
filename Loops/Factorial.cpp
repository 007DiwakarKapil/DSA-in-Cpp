#include <iostream>
using namespace std;
int main(){
    int n;
    int a=1; 
    cout<<"Enter number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
    a=a*i;
    }
    cout<<"The factorial is : "<<a;
}