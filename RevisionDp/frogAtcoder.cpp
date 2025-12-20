#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int n;
vector<int> dp;
int solve(int i,vector<int>& stones){
    n = stones.size();
    if(i == n - 1) return 0;

    if(n == 2) return abs(stones[1] - stones[0]);

    if(dp[i] != -1) return dp[i];

    int cost1 = abs(stones[i + 1] - stones[i]) + solve(i + 1,stones); 
    
    int cost2 = INT_MAX;
    if(i + 2 < n){
        cost2 = abs(stones[i + 2] - stones[i]) + solve(i + 2,stones);
    }
    return dp[i] = min(cost1,cost2);
}

int main(){
    int n;
    cin >> n;
    dp.resize(n,-1);
    vector<int> stones(n);
    for(int i = 0; i < n; i++){
        cin >> stones[i];
    }

    cout << solve(0,stones) << endl;
}