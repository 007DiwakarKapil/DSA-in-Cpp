#include <iostream>
using namespace std;
int main(){
    int a,b;
    int* p1=&a;
    int* p2=&b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    int sum = *p1+*p2;
    cout<<"The sum is : "<<sum<<endl;
}