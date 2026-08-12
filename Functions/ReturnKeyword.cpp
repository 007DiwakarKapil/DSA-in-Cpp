#include <iostream>
using namespace std;
void fun(int n){
    cout<<n<<endl;
    if(n>20) return;                            //return-to terminate the execution of a function 
                                                //and send a specific value back to the code that called it.
                                                //loop ko khtm krta hai
    cout<<n*n<<endl;
}
int main(){
    fun(17);
    fun(27);
}