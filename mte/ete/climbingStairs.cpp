#include <iostream>
using namespace std;

vector<int> dp;
int climbStairs(int n){
    if(n <= 1) return 1;
    if(dp[n] != -1) return dp[n];

    return dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
}

int main(){
    int n;
    cin >> n;
    dp.assign(n + 1,-1);
    cout << climbStairs(n) << endl;
}