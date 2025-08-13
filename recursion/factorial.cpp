#include <iostream>
using namespace std;

void factorial(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
        cout << f << endl;
    }
}

int main(){
    factorial(5);
}