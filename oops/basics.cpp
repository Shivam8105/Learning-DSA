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
    Student(string s,int r){
        name  = s;
        rno = r;
    }
    Student(){

    }
};

void change(Student &s){
    s.name = "Didu";
}

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

    // print(s);

    // cout << s.name << " " << s.rno << " " << s.gpa << " " << endl;

    Student s1("Shivam Kumar",23);
    s1.gpa = 4.5;
    // print(s1);

    Student s2;
    s2.name = "Vyakhya Namdev";
    s2.gpa = 8.4;
    s2.rno = 34;

    Student s6 = s1;
    s6.name = "Gadhi";

    print(s1);
    change(s1);
    // print(s1);

    Student s7(s1);
    s7.name = "pagli";
    print(s7);

    // print(s6);

}