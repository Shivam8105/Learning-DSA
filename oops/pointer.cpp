#include <iostream>
using namespace std;

class Student {
public:
    int marks;
};

int main() {
    Student s1;
    s1.marks = 90;

    Student *ptr = &s1;   // object pointer

    cout << ptr->marks;   // access using pointer
}