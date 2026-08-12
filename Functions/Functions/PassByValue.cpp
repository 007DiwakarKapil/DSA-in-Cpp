#include <iostream>
using namespace std;
void change(int x){       //x local variable
    x=20;
}
int main(){
    int x=10; 
    change(x);        //formal parameter- variable
    cout<<x<<endl;    //actual parameter- value
}