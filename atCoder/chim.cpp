#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N; i++){
        if(A[i] < X){
            cout << 1 << endl;
            X = A[i];
        } else {
            cout << 0 << endl;
        }
    }
}