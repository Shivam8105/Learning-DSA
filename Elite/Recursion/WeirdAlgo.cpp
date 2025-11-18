#include <iostream>
using namespace std;

int weird(int n){
    while(n != 1){
        if(n % 2 == 0){
            n = n % 2;
            cout << n << " ";
        }else{
            n = (n * 3) + 1;
            cout << n << " ";
        }
    }
}

int main(){
    int n = 3;
    int ans = weird(n);
    cout << ans << endl;
}