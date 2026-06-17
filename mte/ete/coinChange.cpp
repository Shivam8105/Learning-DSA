#include <iostream>
using namespace std;

vector<vector<int>> dp;
int solve(int i, vector<int>& coins, int amount){
    int n = coins.size();
    if(amount == 0){
        return 0;
    }

    if(dp[i][amount] != -1) return dp[i][amount];

    if(i >= n) return 1e9;
    int notTake = solve(i + 1,coins,amount);
    int take = 1e9;
    if(coins[i] <= amount){
        take = 1 + solve(i,coins,amount - coins[i]);
    }

    return dp[i][amount] = min(take,notTake);
}

int coinChange(vector<int>& coins, int amount){
    int n = coins.size();
    dp.assign(n + 1,vector<int>(amount + 1,-1));

    return solve(0,coins,amount);
}

int main(){
    vector<int> coins = {1,2,5};
    int amount = 11;

    int ans = coinChange(coins,amount);
    if(ans == 1e9){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
}