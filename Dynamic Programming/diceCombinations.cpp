// int main(){
//     int n;
//     cin >> n;

//     vector<int> dp(n + 1, 0);

//     dp[0] = 1;

//     for(int i = 1; i < n; i++){
//         for(int j = 1; j <= 6; j++){
//             if(i - j >= 0){
//                 dp[i] = (dp[i] + dp[i - j]) % MOD;
//             }
//         }
//     }
//     cout << dp[n] << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

vector<int> dp;
int solve(int n){
    if(n == 0) return 1;
    if(n < 0) return  0;

    if(dp[n] != -1) return dp[n];

    long long ways = 0;

    for(int i = 1; i <= 6; i++){
        ways = (ways +  solve(n - i)) % MOD;
    }
    return dp[n] = ways;

}

int main(){
    int n;
    cin >> n;
    dp.resize(n + 1,-1);
    cout << solve(n) << endl;
}