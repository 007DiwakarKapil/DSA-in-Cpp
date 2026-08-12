#include <iostream>
using namespace std;
void fun(){       
    //cout<<x;            //error
}
int main(){
    int x=10;
   fun();
}

//Local Variable
void fun(){
    int x=10;
    cout<<x<<endl;
}
int main(){
    fun();
    // cout<<x;         //error
}
// Block scope
int main(){
    if(true){
        int x = 5;
        cout<<x<<endl;
    }
    // cout<<x;    //error
}
// Global variable
#include <iostream>
using namespace std;

int x = 100;

void fun() {
x=50;
}

int main() {
cout << x << endl;
fun();
cout<<x<<endl;
}
//Nested Scope (Variable Shadowing)
int main() {

int x = 10;

{
int x = 20;
cout << x << endl;
}

cout << x << endl;
}