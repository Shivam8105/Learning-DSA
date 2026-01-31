#include <iostream>
#include <vector>
#include <climits>


using namespace std;

vector<int> dp;

int solve(int i,int n,int k,vector<int>& height){
    if(i == 0){
        return 0;
    }

    if(dp[i] != -1) return dp[i];
    int ans = INT_MAX;
    for(int j = 1; j <= k; j++){
        if(i - j >= 0){
            ans = min({ans,solve(i - j,n,k,height) + abs(height[i] - height[i - j])});
        }
    }
    return dp[i] = ans;
}

int main(){
    int n,k;
    cin >> n >> k;

    vector<int> height(n);

    dp.resize(n, -1);

    for(int i = 0; i < n; i++){
        cin >> height[i];
    }

    cout << solve(n - 1,n,k,height) << endl;

}