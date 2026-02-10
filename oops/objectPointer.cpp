#include <iostream>
#include <vector>

using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    //! this operator signifies that it actally points to the data members of the class when an object is calling any function. // basically it points  to the current object.

    Cricketer(string name,int runs, float avg){
        this -> name = name;
        this -> runs = runs;
        this -> avg = avg;
    }

    int matches(){
        return runs/avg;
    }

    //! it will give garbage value because it doesn't know where to point
    // Cricketer(string name,int runs){
    //     name = name;
    //     runs = runs;
    // }

    void print(){
        cout << this -> name << " " << this -> runs << " " << this -> avg << endl;
    }

};

int main(){
    int x = 4;
    cout << &x << endl;

    int *p = &x;
    cout << p << endl;

    cout << *p << endl;

    // *p = 100;
    // cout << *p << endl;
    // cout << x << endl;

    Cricketer c1("Virat Kohli",25000,55.2);
    Cricketer c2("Rohit Sharma",18000,47.2);
    // c2.print();
    // c1.print();

    Cricketer* c3 = new Cricketer("MS Dhoni",26000,55.7);

    cout << (*c3).name << " " << (*c3).runs << " " << (*c3).avg << " " << endl;

    cout << c3 -> name << " " << c3->runs << " " << c3 ->avg << " " << endl;

    c3 -> print();
}