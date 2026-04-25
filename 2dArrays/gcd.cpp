#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a % b);
}

int gcd(int a,int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
}

int main(){
    int a, b;
   cin >> a >> b;
   cout << gcd(a,b) << endl;
}