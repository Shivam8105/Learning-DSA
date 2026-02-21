#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> dp;
int solve(int i, int k,vector<int>& heights){
    if(i == 0) return 0;

    if(dp[i] != -1) return dp[i];

    int ans = INT_MAX;
    for(int j = 1; j <= k; j++){
        if(i - j >= 0){
            int cost1 = abs(heights[i] - heights[i - j]) + solve(i - j,k,heights);
            ans = min(ans,cost1);
        }
    }
    return dp[i] = ans;
}

int main(){
    int n,k;
    cin >> n >> k;

    dp.assign(n,-1);

    vector<int> heights(n);

    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    int ans = solve(n - 1,k,heights);

    cout << ans << endl;
    
}