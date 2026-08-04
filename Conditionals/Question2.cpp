#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter abscissa : ";
    cin>>x;
    cout<<"Enter ordinate : ";
    cin>>y;
    if(x>=0){
        if(y>=0) cout<<"1st quadrant";
        else cout<<"2nd quadrant";
    }
    else{
        if(y>=0) cout<<"4th quadrant";
        else cout<<"3rd quadrant";
    }
}