#include <iostream>
using namespace std;

class Base{
public:
    virtual void show(){
        cout << "Base\n";
    }
};

class Derived : public Base{
public:
    void show(){
        cout << "Derived\n";
    }
};

int main(){
    Base* b;
    Derived d;

    b = &d;
    b->show();   // ✅ Output: Derived
}