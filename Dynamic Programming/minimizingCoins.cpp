#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> dp;
int solve(int n, vector<int>& arr){
    if(n == 0) return 0;
    if(n < 0) return INT_MAX;
    int result = INT_MAX;
    if(dp[n] != -2){
        return dp[n];
    }
   for(int i = 0; i < arr.size(); i++){
    if(n - arr[i] < 0) continue;
    result = min(result, solve(n - arr[i],arr));
   }
   if(result == INT_MAX) return dp[n] = INT_MAX;
   return dp[n] = 1 + result;

}

int main(){
    
    int n, x;
    cin >> n >> x;
    dp.resize(1000006,-2);
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

      int ans = solve(x, arr);
    if(ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
}