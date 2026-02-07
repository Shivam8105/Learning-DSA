#include <iostream>
#include <vector>

using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    //! normal pointing without using the this keyword
    // Cricketer(string s, int r){
    //     name = s;
    //     runs = r;
    // }

    //! this operator signifies that it actally points to the data members of the class when an object is calling any function. // basically it points  to the current object.

    Cricketer(string name,int runs, float avg){
        this -> name = name;
        this -> runs = runs;
        this -> avg = avg;
    }

    int matches(){
        return runs/avg;
    }

    //! it will give garbage value because it doesn't know where to signify
    // Cricketer(string name,int runs){
    //     name = name;
    //     runs = runs;
    // }
    void print(){
        cout << this -> name << " " << this -> runs << " " << this -> avg << endl;
    }
};

int main(){
    Cricketer c1("Virat Kohli",25000,55.2);
    Cricketer c2("Rohit Sharma",18000,47.2);

    c1.print();
    c2.print();

    cout << c1.matches() << endl;
    cout << c2.matches() << endl;


}