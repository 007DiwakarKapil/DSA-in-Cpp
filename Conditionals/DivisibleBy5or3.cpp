#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5 == 0 || n%3 == 0) cout<<"Divisible by 5 or 3";
    else cout<<"Condition not met";

}
/* if(c1 && c2) if c1 is false, then 2nd condition will not be checked and there will be no output,
if c1 is true and c2 is false then also there will be no output,
if both conditions are true, only then there will be output. */
/* if(c1 || c2) if c1 is false but c2 is tre then there will be output,
if both are true then there will be output also,
if both are false then there will be no output. */ 
/* In && both conditions are checked 
but in || firstly, first condition is checked, if it's false then 2nd condition is checked. */