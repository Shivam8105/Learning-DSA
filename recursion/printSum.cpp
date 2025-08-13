#include <iostream>
using namespace std;

void add(int sum, int k){
    if(k == 0){
        cout << sum << endl;
        return;
    };
    add(sum + k, k - 1); 
}

int sum(int n){
    if(n == 0){
        return 0;
    }
    return n + sum(n - 1);
}

int main(){
    add(0,10);
    cout << endl;
    cout << sum(10) << endl;
}