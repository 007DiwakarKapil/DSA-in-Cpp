#include <iostream>
#include <vector>
using namespace std;
class Car{
    public:
    string name;
    int power;
    float mileage;
    bool isE20compatible;
    
};
int main(){
    Car c1;
    c1.name="Kia Sonet";
    c1.power=118;
    c1.mileage=9.2;
    c1.isE20compatible=true;

    Car c2={"Toyota Fortuner",200,7.6,false};
    cout<<c2.isE20compatible<<" "<<c2.mileage<<" "<<c2.power<<" "<<c2.name;
}