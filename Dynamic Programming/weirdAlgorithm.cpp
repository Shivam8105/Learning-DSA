#include <iostream>
#include <vector>

#define inf INT_MAX

using namespace std;

vector<int> dp;
int solve(int n){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;


    if(dp[n] != -1) return dp[n];

    return dp[n] = 1 + min({solve(n - 1),(n % 2 == 0) ? solve(n / 2) : inf,(n % 3 == 0) ? solve(n / 3) : inf});
}



int sol(int n,vector<int>& dp){
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4; i <= n; i++){
        dp[i] = 1 + min({dp[i - 1],(i % 2 == 0) ? dp[i / 2] : inf,(i % 3 == 0) ? dp[i / 3] : inf});
    }
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    dp.resize(n + 1,-1);
    cout << sol(n,dp) << endl;
    cout << solve(n) << endl;
}