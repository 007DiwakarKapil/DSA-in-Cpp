#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float cgpa;
    Student(string n,float c,int r){
        rno=r;
        name=n;
        cgpa=c;
    }
    void print(){
        cout<<name<<" "<<rno<<" "<<cgpa<<endl;
    }
};
void change(Student& s){
    s.name="Akash";
}
int main(){
    Student x("Sumit",8.7,39);
    change(x);
    x.print();
}