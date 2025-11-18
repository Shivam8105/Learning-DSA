#include <iostream>
using namespace std;

int fact(int n, int ans){
    if(n <= 1){
        return ans;
    }
    return fact(n - 1,ans*n);
}

int main(){
    int n;
    cin >> n;
    long long  x = fact(n,1);
    cout << x;
    return 0;
}
