#include <iostream>
using namespace std;

long long fib(long long n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 0;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
    long long n;
    cin >> n;
    long long ans = fib(n);
    cout << ans << endl;
}