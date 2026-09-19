#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr(5);  //Index from 0 to 4
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> brr(5,18);
    for(int i=0;i<5;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    int n= arr.size();
    cout<<n<<endl;
}