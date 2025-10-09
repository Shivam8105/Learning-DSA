#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 5;

    if(a & b){
        cout << "hello" << endl;
    }
    if(a | b){
        cout << "hello 2 baar" << endl;
    }
    if(a ^ b){
        cout << "hello 0 baar" << endl;
    }
}