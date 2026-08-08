#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a =0;
    for(int i=n;i>0;i/=10){
    a++;
    }
    cout<<"The number of digits are : "<<a;
}