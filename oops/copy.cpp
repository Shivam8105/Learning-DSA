#include <iostream>
using namespace std;

// class Test{ // default copy constructor
// public:
//     int age;

//     Test(int age){
//         this -> age = age;
//     }
// };


// class Test{. // shallow copy
// public:
//     int* age;
//     Test(int x){
//         this -> age = new int(x);
//     }
// };

class Test{
public:
    int* age;
    Test(int x){
        this -> age = new int(x);
    }

    Test(const Test& s){
        this -> age = new int(*s.age);
    }
};

int main(){
    Test t1(10);
    Test t2 = t1;

    *t2.age = 30;
    cout << *t1.age << endl;
    cout << *t2.age << endl;
}

