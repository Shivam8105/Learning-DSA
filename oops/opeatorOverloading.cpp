#include <iostream>
using namespace std;

class Number {
public:
    string x;
    Number(string val) {
        x = val;
    }

    Number operator + (Number obj) {
        Number temp(x + obj.x);
        return temp;
    }
};

int main() {
    Number n1("shivam ");
    Number n2("kumar");

    Number n3 = n1 + n2;

    cout << n3.x;
}