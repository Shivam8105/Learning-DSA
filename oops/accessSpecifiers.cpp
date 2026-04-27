#include <iostream>
using namespace std;

class Parent{
public:
    int a = 10;
protected:
    int b = 20;
private:
    int c = 30;
};

class Child : public Parent{
public:
    void show(){
        cout << a << endl; // Public
        cout << b << endl; // Protected
        // cout << c << endl; // Private 
    }
};

int main(){
    Child d;
    d.show();
}