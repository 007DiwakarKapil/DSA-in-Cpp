#include <iostream>
#include <string>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float average;
    Cricketer(string name,int runs,float average){
        // (*this).name=name;
        this-> name=name;
        this-> runs=runs;
        this-> average=average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
};
int main(){
    Cricketer c1("Virat Kohli",9230,46.7);
    Cricketer c2("Sachin Tendulkar",14000,55.7);
    Cricketer c3("Rohit Sharma",11000,49.4);
    c1.print();

    Cricketer* p= new Cricketer("ABD",10000,55.2);    //Object Pointer
    p->print();
    Cricketer* ptr=&c1;
    cout<<(*ptr).name<<endl;
    cout<<(*ptr).runs<<endl;
    cout<<(*ptr).average<<endl;
    // (*ptr).average=74.45; //inconvenient
    ptr->average=74.2;
    cout<<(*ptr).average<<endl;
    // cout<<ptr->average<<endl;
    // cout<<ptr->runs<<endl;
    // cout<<ptr->name<<endl;
}