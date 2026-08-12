// Case 1
#include <iostream>
using namespace std;
void fun(){
    cout<<"Hi"<<endl;
}
//void fun(){                          
//   cout<<"Good Morning"<<endl;
void fun(int x){
    cout<<"Good Morning"<<endl;
}                                         
int main(){
   // fun();
    fun(7);
}
// Case 1
void fun(){
    cout<<"Hi"<<endl;
}
void fun(int x =7){
    cout<<"Good Morning"<<endl;
}
int main(){
   // fun();  error
}
// Case 2
void display(int x) {
cout << "Integer: " << x << endl;
}

void display(double x) {
cout << "Double: " << x << endl;
}

void display(char x) {
cout << "Character: " << x << endl;
}
// Case 3
void fun(int x, char ch) {
cout << "int, char" << endl;
}

void fun(char ch, int x) {
cout << "char, int" << endl;
}