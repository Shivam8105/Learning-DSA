#include <iostream>
using namespace std;

class Scooty{
public:
    int topSpeed;
    float mileage;
protected:
    int bootSpace; 
};

class Bike : public Scooty{
public:
    int gears;

    void setBootspace(){
        bootSpace = 70;
    }
    int getBootspace(){
        return bootSpace;
    }
};

void print(Bike &s){
    cout << s.topSpeed << " " << s.mileage << " " << s.gears << " " << s.getBootspace() << endl;
}

int main(){
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage = 12.5;
    b1.gears = 6;
    b1.setBootspace();
    print(b1);
    
    // b1.bootSpace = 2;  !// not accessible in main function as it is protected


}