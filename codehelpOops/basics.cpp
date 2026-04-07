#include <iostream>
using namespace std;

class Student{
public:
    // Attributes or Data members
    int id;
    int age;
    string name;
    int nos;

    void study(){
        cout << "Studying" << endl;
    }

    void sleep(){
        cout << "Sleeping" << endl;
    }

    void bunk(){
        cout << "Bunking" << endl;
    }

    ~Student(){
        cout << this -> name << "Student Default destructor is called" << endl;
    }
};

int main(){
    Student A;
    A.id = 1;
    A.age = 15;
    A.name = "Abhishek";
    A.nos = 6;
    A.study();

    Student B;
    B.id = 2;
    B.age = 15;
    B.name = "Rahul";
    B.nos = 5;

    B.bunk();
}