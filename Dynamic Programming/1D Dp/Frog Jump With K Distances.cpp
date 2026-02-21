#include <iostream>
#include <vector>

using namespace std;

int solve(int i, int k,vector<int>& heights){
    if(i == 0) return 0;

    int ans = INT_MAX;
    for(int j = 1; j <= k; j++){
        if(i - j >= 0){
            int cost1 = abs(heights[i] - heights[i - j]) + solve(i - j,k,heights);
            ans = min(ans,cost1);
        }
    }
    return ans;
}

int main(){
    int n,k;
    cin >> n >> k;

    vector<int> heights(n);

    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    int ans = solve(n - 1,k,heights);

    cout << ans << endl;
    
}