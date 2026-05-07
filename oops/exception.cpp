#include <iostream>
using namespace std;

int main(){

    try{

        int a = 10;
        int b = 0;

        if(b == 0){

            throw "Division by zero";
        }

        cout << a / b;
    }

    catch(const char* msg){

        cout << msg;
    }
}