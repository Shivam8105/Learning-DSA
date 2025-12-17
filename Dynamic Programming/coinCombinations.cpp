#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> dp;
const int MOD = 1e9 + 7;

int solve(int i, int amount, vector<int> &coins)
{
    int n = coins.size();
    if (amount == 0)
        return 1;
    if (amount < 0)
        return 0;

    if (i == coins.size())
        return 0;

    if (dp[i][amount] != -1)
    {
        return dp[i][amount];
    }

    int take = solve(i, amount - coins[i], coins);

    int notTake = solve(i + 1, amount, coins);

    return dp[i][amount] = (take + notTake) % MOD;
}

int change(int amount, vector<int> &coins)
{
    int n = coins.size();
    dp.resize(n, vector<int>(amount + 1, -1));
    return solve(0, amount, coins);
}

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << change(x, arr) << endl;
}