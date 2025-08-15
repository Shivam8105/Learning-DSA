#include <iostream>
using namespace std;

int stair(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    return stair(n - 1) + stair(n - 2);
}

int stair3(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;
    return stair3(n - 3) + stair3(n - 2) + stair3(n - 1); 
}

int main(){
    int n;
    cin >> n;
    cout << stair(n) << endl;
    cout << stair3(n) << endl;
}