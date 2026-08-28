#include <iostream>
using namespace std;
int main(){
   // int A = 74;
   // int B = 96;
   // int C = 91;
   // int D = 57;
   // int E = 62;
   int marks[] = {74,96,91,57,62};
   cout<<marks[2]<<endl;
   marks[2]=23;
   cout<<marks[2]<<endl;
   cout<<"Enter marks of B : ";
   cin>>marks[2];
   cout<<marks[2];
}