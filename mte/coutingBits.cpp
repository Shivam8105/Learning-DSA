//! Count the number of 1s in the binary representation of numbers from 0 to n.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> ans;

    for(int i = 0; i <= n; i++){
        int temp = __builtin_popcount(i);
        ans.push_back(temp);
    }

    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}