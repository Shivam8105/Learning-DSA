#include <iostream>
using namespace std;

vector<vector<int>> dp;
int solve(int i, int j, string& word1, string& word2){
    int n = word1.size();
    int m = word2.size();

    if(i == n) return m - j;
    if(j == m) return n - i;

    if(dp[i][j] != -1) return dp[i][j];

    if(word1[i] == word2[j]){
        return solve(i + 1,j + 1,word1,word2);
    }else{
        return 1 + min({solve(i + 1,j,word1,word2),solve(i,j + 1,word1,word2), solve(i + 1,j + 1,word1,word2)});
    }
}

int minDistance(string word1, string word2){
    int n = word1.size();
    int m = word2.size();
    dp.assign(n,vector<int>(m,-1));
    return solve(0,0,word1,word2);

}

int main(){
    string s,t;
    cin >> s >> t;

    int ans = minDistance(s,t);
    cout << ans << endl;
}