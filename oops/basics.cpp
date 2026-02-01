#include <iostream>
using namespace std;

class Student{
    // properties
    // int health;
public:
    string name;
    int rno;
    float gpa;
};

int main(){
    // Hero h1;
    // cout << "Size: " << sizeof(h1) << endl;
    Student s;
    s.name = "Shivam";
    s.rno = 24;
    s.gpa = 8.43;

    cout << s.name << " " << s.rno << " " << s.gpa << " " << endl;
}