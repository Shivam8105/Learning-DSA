#include <iostream>
using namespace std;

class Student{
public:
    static string dept;
    int roll;
    string name;

    Student(int roll,string name){
        this -> roll = roll;
        this -> name = name;
    }

    void display(){

        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Department: " << dept << endl;
    }
};

string Student :: dept = "CSE";


int main(){
    Student s1(1,"Shivam");
    s1.display();
}