#include <iostream>
using namespace std;
class Cricketer{
    private:
    int runs;
    public:
    string name;
    float average;
    Cricketer(string name,int runs,float average){
        (*this).name=name;
        this->runs=runs;
        this->average=average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
    int getRuns(){
        return runs;
    }
    void setRuns(int runs){
        this->runs=runs;
    }
};
int main(){
    Cricketer c("Virat Kohli",14000,58.1);
    c.print();
    // c.runs();   error
    c.setRuns(15000);
    cout<<c.getRuns()<<endl;
}