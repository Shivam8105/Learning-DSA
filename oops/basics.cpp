#include <iostream>
using namespace std;

class Student{
    // properties
    // int health;
public:
    string name;
    int rno;
    float gpa;
    Student(string n,int r,float g){
        name = n;
        rno = r;
        gpa = g;
    }
};

void print(Student c){
    cout << " " << c.name << " " << c.rno << " " <<  c.gpa << endl;
}

int main(){
    // Hero h1;
    // cout << "Size: " << sizeof(h1) << endl;
    Student s("Sumit chomu",24,8.52);
    // s.name = "Shivam";
    // s.rno = 24;
    // s.gpa = 8.43;

    print(s);

    // cout << s.name << " " << s.rno << " " << s.gpa << " " << endl;

}