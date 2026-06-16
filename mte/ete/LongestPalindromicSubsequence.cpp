#include <iostream>
using namespace std;
vector<vector<int>> dp;

int solve(int i, int j, string& s){
    if(i > j) return 0;
    if(i == j) return 1;
    if(s[i] == s[j]){
        return dp[i][j] =  2 + solve(i + 1,j - 1,s);
    }
    return dp[i][j] = max(solve(i + 1,j,s),solve(i,j - 1,s));
}

int longestPalindromicSubsequence(string s){
    int n = s.size();
    dp.assign(n,vector<int>(n,-1));
    return solve(0,n - 1,s);
}

int main(){
    string s;
    cin >> s;
    int ans = longestPalindromicSubsequence(s);
    cout << ans << endl;
}