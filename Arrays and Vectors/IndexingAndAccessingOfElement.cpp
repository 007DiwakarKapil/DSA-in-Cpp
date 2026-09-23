#include <iostream>
using namespace std;
int main(){
    int marks[]={74,96,91,57,62,35};
    cout<<marks[2]<<endl;
    cout<<marks[4]<<endl;
    marks[2]=39;  //Update
    cout<<marks[2]<<endl;
    cin>>marks[2];   //Input
    cout<<marks[2]<<endl;
}