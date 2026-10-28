#include <iostream>
using namespace std;
class Student{// User defined data type
    public:
    string name;
    int roll_no;
    float cgpa;
};
int main(){
    Student x;  // x is an object/variable
    x.name="Diwakar";
    x.roll_no=10;
    x.cgpa=8.6;
    Student y;
    y.name="Kapil";
    y.roll_no=7;
    y.cgpa=8.65;
    cout<<x.name<<" "<<x.roll_no<<10<<" "<<x.cgpa<<" "<<y.name<<endl;
    cout<<y.roll_no<<" "<<y.cgpa;
}