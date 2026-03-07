#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<long long> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    vector<pair<long long,int>> v;
    for(int i = 0; i < N; i++){
        v.push_back({A[i], i+1});
    }
    sort(v.begin(), v.end());
    while(Q--){
        int K;
        cin >> K;
        set<int> removed;
        for(int i = 0; i < K; i++){
            int x;
            cin >> x;
            removed.insert(x);
        }
        for(auto &p : v){
            if(!removed.count(p.second)){
                cout << p.first << "\n";
                break;
            }
        }
    }
}