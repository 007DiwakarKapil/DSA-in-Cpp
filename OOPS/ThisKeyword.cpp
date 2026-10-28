#include <iostream>
using namespace std;
class Pokemon{
    public:
    string name;
    string type;
    int hp;
    Pokemon(string name,string type,int hp){
       // name=name;
       // type=type;
       // hp=hp;
       this->name = name;
        this->type = type;
        this->hp = hp;
    }
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};
int main(){
    Pokemon p3("Mewtwo","Psychic",200);
    p3.print();
}