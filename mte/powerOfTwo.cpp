//! Check if a number is a power of two using bit manipulation.


// O(log n) approach

#include <iostream>
using namespace std;

// bool isPower(int n){
//     if(n <= 0) return false;
//     if(n == 1) return true;
//     if(n == 2) return true;

//     while(n > 2){
//         if(n % 2 != 0) return false;
//         n /= 2;
//     }
//     return true;
// }


// O(n) approach

bool isPower(int n){
    if(n > 0 && (n & (n - 1)) == 0){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;

    bool ans = isPower(n);
    cout << ans << endl;
}