// function_name(int a,int b,int c){
//  function body
// }
#include <iostream>
using namespace std;
void min_of_two(int a,int b){ //it will receive 2 numbers and print their minimum.
    if(a<b) cout<<a<<" is smaller."<<endl;
    else cout<<b<<" is smaller."<<endl;
}
int main(){
    min_of_two(71,43);
}