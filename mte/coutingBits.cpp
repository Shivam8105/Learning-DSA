//! Count the number of 1s in the binary representation of numbers from 0 to n.

//! using builtin function
#include <iostream>
using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     vector<int> ans;

//     for(int i = 0; i <= n; i++){
//         int temp = __builtin_popcount(i);
//         ans.push_back(temp);
//     }

//     for(int x : ans){
//         cout << x << " ";
//     }
//     cout << endl;
//     return 0;
// }

//! using function

int bit(int i){
    int count = 0;
    while(i > 0){
       count += (i & 1); 
       i >>= 1;
    }
    return count;
}


int main(){
    int n;
    cin >> n;
    
    vector<int> ans;

    for(int i = 0; i <= n; i++){
        int temp = bit(i);
        ans.push_back(temp);
    }

    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}