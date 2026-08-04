#include <iostream>
using namespace std;
int main(){
    cout<<"Enter 3 numbers : ";
    int a,b,c;
    cin>>a>>b>>c;
 int max_val = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
 cout<<max_val<<" is largest";
}