#include <iostream>
using namespace std;

class Car{
public:
    string name;
    int price;
    int seats;
    string type;
};

void print(Car c){
    cout << c.name << " " << c.price << " " << c.seats << " " << c.type << endl;
}

void change(Car c){
    c.name = "Audi A8";
}

int main(){
    Car c1;
    c1.name = "Honda City";
    c1.price = 2000000;
    c1.seats = 5;
    c1.type = "Sedan";
    // cout << c1.name << " " << c1.price << " " << c1.seats << " " << c1.type << endl;

    print(c1);
}