#include <iostream>
using namespace std;

class Student {
public:
    int marks;
};

int main() {
    Student s1;
    s1.marks = 90;
    int arr[3] = {10,20,30};
    int* p = arr; 
    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;

    Student *ptr = &s1;   // object pointer

    cout << ptr->marks;   // access using pointer
}