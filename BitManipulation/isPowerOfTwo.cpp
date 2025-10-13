#include <iostream>
using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int m = n;
//     int count = 0;

//     while(n > 1){
//         if(n % 2 == 1){
//             count++;
//         }
//         n = n / 2;
//     }
//     if(n == 1){
//         count++;
//     }
//     if(count > 1){
//         cout << "NO" << endl;
//     }else{
//         cout << "YES" << endl;
//     }
// }

int main(){
    int n;
    cin >> n;
    if(n & (n - 1) == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}