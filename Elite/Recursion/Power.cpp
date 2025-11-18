#include <iostream>
using namespace std;

double power(int x,int n){
    long long N = n;
    if(N == 0) return 1;

    if(N < 0){
        x = 1/x;
        N = -N;
    }
    int half = power(x,n/2);
    if(n % 2 == 0){
        return half * half;
    }
    else return x * half * half;
}

int main(){
    double x;
    int n;

    cin >> x >> n;

    double result = power(x,n);
    cout << result << endl;
}