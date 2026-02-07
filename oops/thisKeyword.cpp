#include <iostream>
#include <vector>

using namespace std;

class Cricketer{
public:
    string name;
    int runs;

    //! normal pointing without using the this keyword
    // Cricketer(string s, int r){
    //     name = s;
    //     runs = r;
    // }

    //! this operator signifies that it actally points to the data members of the class when an object is calling any function. // basically it points  to the current object.

    Cricketer(string name,int runs){
        this -> name = name;
        this -> runs = runs;
    }

    //! it will give garbage value because it doesn't know where to signify
    // Cricketer(string name,int runs){
    //     name = name;
    //     runs = runs;
    // }
};

void print(Cricketer c){
    cout << c.name << " " << c.runs << endl;
}

int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);

    print(c1);
    print(c2);
}