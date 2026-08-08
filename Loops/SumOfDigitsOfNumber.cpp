#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int sum=0;
    for(int i =n;i>0;i/=10){
    int r= n%10;
    sum=sum+r;
    n=n/10;
    }
    cout<<"The sum of digits is : "<<sum;
}