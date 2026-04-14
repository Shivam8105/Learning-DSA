//! Find the sum of elements in a given range [L,R] using a prefix sum array.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];

    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;

        cout << prefixSum[r] - prefixSum[l - 1] << endl;
    }
}