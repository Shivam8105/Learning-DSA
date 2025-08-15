#include <iostream>
using namespace std;

int sum(int a, int b, int add) {
    if (a > b) {
        return add;
    }
    if (a % 2 != 0) { 
        add += a;
    }
    return sum(a + 1, b, add); 
}

int main(){
    int a,b,add;
    cout << sum(1,8,0);
}