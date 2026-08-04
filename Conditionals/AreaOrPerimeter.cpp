#include <iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length of rectangle : ";
    cin>>l;
    cout<<"Enter breadth of rectangle : ";
    cin>>b;
    float area = l*b;
    float perimeter = 2*(l+b);
    if(area>perimeter) cout<<"Area is greater";
    else if(area==perimeter) cout<<"Both are equal";
    else cout<<"Perimeter is greater";
}