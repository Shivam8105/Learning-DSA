#include <iostream>

using namespace std;

int factorial(int n){
    if(n < 0){
        cout << "Factorial is not defined for negative numbers.";
        return 0;
    }
    if(n == 1 || n == 0) return 1;
    return n * factorial(n - 1);
}

int main(){
    cout << factorial(-1);
}