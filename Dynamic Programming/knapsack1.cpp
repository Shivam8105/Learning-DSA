#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int n,W;
vector<long long> w;
vector<long long> v;
vector<vector<long long>> dp;
long long knapsack(long long index, long long weight){
    if(index == n || weight == 0) return 0;

    if(dp[index][weight] != -1){
        return dp[index][weight];
    }
    
    long long take = 0;
    if(w[index] <= weight){
        take = v[index] + knapsack(index + 1, weight - w[index]);
    }
    long long notTake = knapsack(index + 1, weight);
    return dp[index][weight] = max(take,notTake);
}

int main(){
    cin >> n >> W;
    w.resize(n);
    v.resize(n);

    dp.resize(n,vector<long long>(W + 1,-1));

    for(int i = 0; i < n; i++){
        cin >> w[i] >> v[i];
    }

    cout << knapsack(0,W) << endl;
    return 0;
}