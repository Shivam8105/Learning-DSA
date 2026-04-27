// #include <iostream>
// using namespace std;

// class Base{
// public:
//     virtual void show(){
//         cout << "Base\n";
//     }
// };

// class Derived : public Base{
// public:
//     void show(){
//         cout << "Derived\n";
//     }
// };

// int main(){
//     Base* b;
//     Derived d;

//     b = &d;
//     b->show();   // ✅ Output: Derived
// }


#include <iostream>
using namespace std;

class Shape{
public:
    // pure virtual functions
    virtual void draw() = 0;
};

class Circle : public Shape{
public:
    void draw(){
        cout << "Circle has been drawn" << endl;
    }
};

class Rectangle : public Shape{
public:
    void draw(){
        cout << "Rectangle has been drawn" << endl;
    }
};

int main(){
    // Shape* s = new Circle;
    Shape* s;
    Circle c;
    Rectangle r;
    s = &c;
    s = &r;
    s -> draw();
}