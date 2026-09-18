#include<iostream>
using namespace std;
int main(){
    int marks[]={74,96,91,57,62,35};
    cout<<size(marks)<<endl;
    cout<<sizeof(marks)<<endl;
    cout<<sizeof(marks)/4<<endl;
    cout<<sizeof(marks)/sizeof(int)<<endl;
    int x=10;
   // cout<<size(x);   error
    cout<<sizeof(x);
}