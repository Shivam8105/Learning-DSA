#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x = 4;
    cout << &x << endl;

    int *p = &x;
    cout << p << endl;

    cout << *p << endl;

    *p = 100;
    cout << *p << endl;
    cout << x << endl;
}