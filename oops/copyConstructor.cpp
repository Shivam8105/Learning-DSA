#include <iostream>
using namespace std;

class Student{
public:
    int rno;
    string name;
    int* age;
    Student(int rno,string name,int age){
        this -> rno = rno;
        this -> name = name;
        this -> age = new int(age);
    }
    Student(const Student& s){
        rno = s.rno;
        name = s.name;
        age = new int (*(s.age));
    }
    
};

// void change(Student& s){
//     s.rno = 3;
//     s.age = 45;
// }

int main(){
    Student s1(2,"Shivam",21);
    Student s2 = s1;
    Student s3 = s1;
    *(s3.age) = 50;
    s3.name = "Ayush";
     cout << s3.rno << " " << s3.name << " " << *s3.age << endl; // deep copy
    // change(s2); // shallow copy
    cout << s2.rno << " " << s2.name << " " << *s2.age << endl; // shallow copy
    cout << s1.rno << " " << s1.name << " " << *s1.age << endl;
}