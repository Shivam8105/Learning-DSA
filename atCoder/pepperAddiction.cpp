#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> C(M + 1);

    for(int i = 1; i <= M; i++){
        cin >> C[i];
    }

    long long ans = 0;

    for(int i = 0; i < N; i++){

        int A;
        long long B;

        cin >> A >> B;

        long long use = min(B, C[A]);

        ans += use;
        C[A] -= use;
    }

    cout << ans << endl;
}