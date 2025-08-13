#include <iostream>
using namespace std;

void add(int sum, int k){
    if(k == 0){
        cout << sum << endl;
        return;
    };
    add(sum + k, k - 1); 
}

int main(){
    add(0,10);
}