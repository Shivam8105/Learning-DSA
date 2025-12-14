#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> get_digits(int n){
    vector<int> result;
    while(n > 0){
        if(n % 10 != 0){
            result.push_back(n % 10);
        }
        n /= 10;
    }
    return result;
}
vector<int> dp;
int solve(int n){
    if(n == 0) return 0;
    if(n <= 9) return 1;
    if(dp[n] != -1) return dp[n];
    vector<int> d = get_digits(n);

    int result = INT_MAX;

    for(int i = 0; i < d.size(); i++){
        result = min(result, solve(n - d[i]));
    }

    return dp[n] = result + 1;
}

int main(){
    int n;
    cin >> n;
    dp.resize(1000005,-1);
    cout << solve(n) << endl;
}