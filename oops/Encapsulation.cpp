#include <iostream>
using namespace std;

class Student{
public:
    int marks;
    // Student(int m){   // normal constructors
    //     if(m >= 0 && m <= 100){
    //         this -> marks = m;
    //     }else{
    //         this -> marks = 0;
    //     }
    // }
    Student(int marks, int rollno){
        this -> marks = marks;
        this -> rollno = rollno;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
        }
    }

    void setter(int rollno){
        if(rollno < 0){
            cout << "Invalid rollno" << endl;
            return;
        }
        rollno = rollno;
    }

    int getter(){
        return rollno;
    }
private:
    int rollno;
    int balance;
};

int main(){
  Student s1(10,20);
  cout << s1.marks << " " << s1.getter() << endl;
}