// In projects we always tend to use same / similar piece of code in the project
// multiple times, but not always we are looking for continuous repetition.
#include <iostream>
using namespace std;
void fun(){
    cout<<"Hello,World!"<<endl;
}
int main(){
    fun();   // calling the function
    cout<<"Hello,World!"<<endl;
    fun();
}