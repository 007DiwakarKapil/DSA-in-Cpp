#include <iostream>
using namespace std;
// void swap(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a=5,b=2;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;         This will not work
// }
void swap(int& a, int& b){                 //int& a declares a as a reference to an integer variable.
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=5,b=2;
    swap(a,b);
    cout<<a<<" "<<b<<endl;           //This will work
}