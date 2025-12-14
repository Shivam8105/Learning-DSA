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

int main(){
    int n;
    cin >> n;
    dp.resize(n + 1,-1);

    cout << solve(n) << endl;
}