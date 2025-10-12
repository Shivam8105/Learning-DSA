#include <iostream>
using namespace std;

//! bit mask method

// int main(){
//     int n;
//     cin >> n;
//     int i;
//     cin >> i;

//     if((n & (1 << i)) != 0){
//         cout << "True" << endl;
//     }else{
//         cout << "False" << endl;
//     }
// }

//! division method

// int main(){
//     int n;
//     cin >> n;
//     int i;
//     cin >> i;

//     if((n >> i) % 2 != 0){
//         cout << "True" << endl;
//     }else{
//         cout << "False" << endl;
//     }
// }


//! naive approach - convert into binary number and then start from back to the ith position & if it's 1 then the bit is set.

