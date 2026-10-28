#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int rno;
    float cgpa;

    Student(string n, int r, float c) {  //Parameterised constructor
        name = n;
        rno = r;
        cgpa = c;
    }
    Student(int r,string n, float c) {  //Parameterised constructor
        name = n;
        rno = r;
        cgpa = c;
    }

    Student() {
        // Default Constructor
    }
};

int main() {
    Student x("Sumit", 39, 8.7);
    cout << x.name << " " << x.rno << " " << x.cgpa << endl;

    Student y;
    y.name = "Manish";
    y.rno = 10;
    y.cgpa = 9.1;
    cout << y.name << " " << y.rno << " " << y.cgpa << endl;

    Student z(11,"Musit",9.14);
    cout<<z.name<<" "<<z.rno<<" "<<z.cgpa<<endl;

//  Student w("Sumit",11);   error
}